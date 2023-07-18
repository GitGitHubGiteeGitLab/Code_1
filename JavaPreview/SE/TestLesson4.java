import com.sun.xml.internal.ws.api.model.wsdl.WSDLOutput;

import java.util.Random;
import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Random random = new Random(123);
        int randNum = random.nextInt(123) ;
        System.out.println(randNum);
    }

    //猜数字
    public static void main18(String[] args) {
        Scanner scan = new Scanner(System.in);
        Random random = new Random();
        int randNum = random.nextInt(100);
        while (true) {
            int guess = scan.nextInt() ;
            if (guess > randNum) {
                System.out.println("猜大了");
            }else if (guess < randNum) {
                System.out.println("猜小了");
            }else{
                System.out.println("猜对了");
                break;
            }
        }
    }
    public static void main17(String[] args) {
        Scanner scan = new Scanner(System.in);
        while(scan.hasNextInt()){
            int n = scan.nextInt();
            System.out.println("n = " + n) ;
        }
    }
    public static void main16(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        System.out.println(n);
        scan.nextLine();
        String name = scan.nextLine();
        System.out.println(name);
    }
    public static void main15(String[] args) {
        Scanner scan = new Scanner(System.in);
        String name = scan.next();
        System.out.println(name);
        String name1 = scan.next();
        System.out.println(name1);
    }
    public static void main14(String[] args) {
        System.out.println("请输入姓名：");
        Scanner scan = new Scanner(System.in);
        String name = scan.nextLine();
        System.out.println("请输入年龄");
        int age =scan.nextInt();
        System.out.println("请输入你的工资：");
        float f = scan.nextFloat();
        System.out.println(name + " " + age + " " + f);
        scan.close();
    }
    public static void main13(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        System.out.println(n);
    }
    public static void main12(String[] args) {
        System.out.println("输出且换行");
        System.out.print("输出不换行");
        System.out.printf("%s\n", "格式化输出！和C语言一样");
    }
    public static void main11(String[] args) {
        int i = 0;
        do {
            System.out.println(i);
            i++;
        }while(i <= 10);
    }
    public static void main10(String[] args) {
        int sum = 0;
        for (int i = 1; i <= 5; i++) {
            int ret = 1;
            for (int j = 1; j <= i; j++) {
                ret *= j;
            }
            sum += ret;
        }
        System.out.println(sum);
    }
    public static void main9(String[] args) {
        for (int i = 0; i < 10; i++) {
            System.out.println(i);
        }

    }
    public static void main8(String[] args) {
        int i = 1;
        while(i <= 100){
            if(i % 15 != 0){
                i++;
                continue;
            }
            System.out.println(i++);
        }
    }
    public static void main7(String[] args) {
        while(true){
            System.out.println("he");
        }
    }
    public static void main6(String[] args) {
        int i = 1, sum = 0, ret = 1, j;
        while(i <= 5){
            j= 1;
            ret = 1;
            while(j <= i){
                ret *= j;
                j += 1;
            }
            sum += ret;
            System.out.println("ret == " + ret);
            i += 1;
        }
        System.out.println("sum == " + sum);
    }
    public static void main5(String[] args) {
        int a = 1;
        while(a <= 10){
            System.out.println(a);
            a += 1;
        }
        System.out.println("laear");
    }
    public static void main4(String[] args) {
        int year = 2004;
        if(year % 100 == 0) {
            if(year % 400 == 0) {
                System.out.println(year + "是闰年");
            }
        }else {
            if(year % 4 == 0) {
                System.out.println(year + "是闰年");
            }
        }
    }

    public static void main3(String[] args) {
        int a = 10;
        if(a == 10) {
            System.out.println("a == 10");
        }
        else {
            System.out.println("b != 10");
        }
    }
    public static void main2(String[] args) {
        int a = 10;
        if(a == 10) System.out.println("a == 10");
    }
    public static void main1(String[] args) {
        short a = 128;
        boolean b = true;

        System.out.println(2 % 2.5);
    }
}
