import java.util.Scanner;

public class TestLesson5 {
    public static int add(int a, int b){
        return a+b;
    }
    public static void main(String[] args) {
        int a = 3, b = 5;
        int c = add(a, b);
        System.out.println(c);
        
    }
    public static void main8(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        for(int i = 0; i < n; i++){
            for (int j = 0; j < n; j++) {
                if(i == j || i + j == n-1){
                    System.out.print("*");
                }else{
                    System.out.print(" ");
                }
            }//forj
            System.out.println();
        }
    }
    public static void main7(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int count = 0;
        while(n != 0){
            n &= n-1;
            count++;
        }
        System.out.println(count);
    }
    public static void main6(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int count = 0;
        while(n != 0){
            if((n & 1) != 0)count++;
            n >>>= 1;
        }
        System.out.println(count);
    }
    public static void main5(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt(), count = 0;
        for (int i = 0; i < 32; i++){
            if(((n >> i) & 1) != 0)count++;
        }
        System.out.println(count);
    }
    public static void main4(String[] args) {
        for (int i = 0; i <= 999999; i++) {
            int count = 0, temp = i;
            do{
                temp /= 10;
                count++;
            }while(temp != 0);
            temp  = i;
            int sum = 0;
            while(temp != 0){
                sum += Math.pow(temp % 10, count);
                temp /= 10;
            }
            if(sum == i) System.out.println(i);
        }
    }
    public static void main3(String[] args) {
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();
        while(b != 0){
            int temp = a % b;
            a = b;
            b = temp;
        }
        System.out.println(a);
    }
    public static void main2(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i ; j++) {
                System.out.print(j + "*" + i +"="+ i * j + " ");
            }
            System.out.println();
        }
    }
    public static void main1(String[] args) {
       Scanner scanner = new Scanner(System.in);
       int n = scanner.nextInt();
        for (int i = 2; i < n; i++) {
            double  I = Math.sqrt(i) ;
            int flag = 0;
            for(int j = 2; j <= I; j++){
                if(i % j != 0)continue;
                flag = 1;
            }//forj
            if(flag == 0) System.out.println(i);
        }//fori
    }//main
}//class
