import java.util.Arrays;
import java.util.Scanner;

public class TestLesson6 {
    public static void main(String[] args) {
        int[] array = {1, 2, 345, 4, 5,5498, 34};
        Arrays.sort(array  );
        String ret = Arrays.toString(array);
        System.out.println(ret);
    }
    public static void hanota(int n, char pos1, char pos2, char pos3){
        if(n == 1){
            move(pos1, pos3);
            return;
        }
        hanota(n-1, pos1, pos3, pos2);
        hanota(1,pos1, pos2, pos3);
        hanota(n-1, pos2, pos1, pos3);
    }
    public static void move(char pos1, char pos2){
        System.out.print(pos1+"->"+pos2+" ");
    }
    public static void main7(String[] args) {
        hanota(3, 'A', 'B', 'C');
        System.out.println();
        hanota(1,'A', 'B', 'C');
    }
    public static void func4(int n){
        if(n < 10) {
            System.out.println(n);
            return;
        }
        func4(n/10);
        System.out.println(n%10);
    }
    public static void main6(String[] args) {
        func4(1234);
    }

    public static int fib(int n){
        if(n == 1 || n == 2)return 1;
        int f1 = 1;
        int f2 = 1;
        for(int i = 2; i < n; i++){
            f2 += f1;
            f1 = f2 - f1;
        }
        return f2;
    }
    public static void main5(String[] args) {
        System.out.println(fib(1));
        System.out.println(fib(2));
        System.out.println(fib(5));
    }

    public static int max(int a, int b){
        return (a > b ? a : b);
    }
    public static int max(int a, int b,int c){
        return max(max(a, b), c);
    }
    public static void main4(String[] args) {
        System.out.println(max(1, 2, 3));
    }
    public static void login(){
        int count = 3;
        Scanner scan = new Scanner(System.in);
        while(count != 0){
            String password = scan.nextLine();
            if(password.equals("123456")){
                System.out.println("login");
            }//if
            count--;
            System.out.println("你还有"+count+"次机会");
        }//while
    }
    public static void main3(String[] args) {
        login();
    }

    public static void func2(int n){
        while(n != 0){
            System.out.print(n % 10 + " ");
            n /= 10;
        }//while
    }
    public static void main2(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        func2(n);
    }
    public static double func1(int n){
        double sum = 0;
        int flg = 1;
        for (int i = 1; i <= 100; i++) {
            sum = sum + 1.0/i * flg;
            flg = -flg;
        }
        return sum;
    }
    public static void main1(String[] args) {
        System.out.println(func1(100));
    }
}
