/*************************************************************************
	> File Name: MiniShell.c
	> Author: 
	> Mail: 
	> Created Time: Sat 23 Mar 2024 08:41:31 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<errno.h>
#define SIZE 512
#define DELIM " "
#define END '\0'
char input[SIZE];
char* argv[SIZE];
char cwd[SIZE];   
int EXIT = 0;

char* getUser(){
    return getenv("USER");
}

char* getHost(){
    //return getenv("HOST");
    return "119.91.249.213";
}

char* getCwd(){
    return getenv("PWD");
}

void MakePrompt(){
    char* user = getUser();
    char* host = getHost();
    char* cwd = getCwd();
    cwd = strrchr(cwd, '/');
    printf("[%s@%s %s] ", user, host, strlen(cwd) == 1 ? cwd : cwd + 1);
    fflush(stdout);
}

void GetCommand(){
    fgets(input, SIZE, stdin);
    input[strlen(input) - 1] = END;
}

void SplitCommand(){
    if(input[0] == '\0')return;
    argv[0] = strtok(input, DELIM); 
    int i = 1;
    while(argv[i++] = strtok(NULL, DELIM));
    //for(i = 0; argv[i]; i++){
    //    printf("argv[%d] : %s\n", i, argv[i]);
    //}
}

void ExecuteCommand(){
    if(argv[0] == NULL)return;
    pid_t rid = fork();
    if(rid == 0){
        char* file = argv[0];
        execvp(file, argv); 
        printf("%s : %s\n", file, strerror(errno)); 
        exit(1);
    }
    int status = 0;
    waitpid(rid, &status, 0); 
    //子进程状态
    //if(!WIFEXITED(status)){
    //    printf("abnormal exit\n"); 
    //}else{
    //    //存在着问题
    //    if(WEXITSTATUS(status)){
    //        printf("%s : %s\n", argv[0], strerror(errno));
    //    }    
    //}
}

void RunBuiltin(){
    if(argv[0] == NULL)return;
    //strcmp会解引用
    if(strcmp("exit", argv[0]) == 0){
        if(argv[1] == NULL)
            exit(0); 
        else 
            exit(atoi(argv[1]));
    }else if(strcmp("cd", argv[0]) == 0){
        chdir(argv[1]);
        char tmp[SIZE] = ""; 
        getcwd(tmp, SIZE);
        snprintf(cwd, SIZE, "PATH=%s", tmp);
        putenv(cwd);
    }
}

int main(){
    int quit = 0;
    while(!quit){
        //0.Prompt    
        MakePrompt();
        //1.get input
        GetCommand();
        //2.split input
        SplitCommand();
        //3.run builtin
        RunBuiltin();
        //4.execute noraml command
        ExecuteCommand();
    }
     return 0;
}
