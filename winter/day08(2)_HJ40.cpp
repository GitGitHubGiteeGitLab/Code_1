#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    int hash[4] = {0};
    #define ALPHA 0
    #define SPACE 1
    #define DIGIT 2
    #define OTHER 3
    for(auto ch : str){
        if(isalpha(ch)){
            hash[ALPHA]++;
        }else if(ch == ' '){
            hash[SPACE]++;
        }else if(isdigit(ch)){
            hash[DIGIT]++;
        }else{
            hash[OTHER]++;
        }
    }
    for(auto e : hash){
        cout << e << endl;
    }
    return 0;
}
// 64 位输出请用 printf("%lld")