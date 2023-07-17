
public class Test {
    public static void main(String[] args) {
        boolean flg =((true == true) ?(true == true) ? false : true : true);
        System.out.println(flg);
    }
    public static void main11(String[] args) {
        int a = -1;
        System.out.printf("%d", a >> 1);
    }
    public static void main10(String[] args) {
        System.out.println(11 | 13);
    }
    public static void main9(String[] args) {
        System.out.println(3 == 3 | (1 / 0) == 0);
    }
    public static void main8(String[] args) {
        System.out.println(1 < 5);
        System.out.println(1 >= 5);
    }
    public static void main7(String[] args) {
        int i = 10;
        i = i++;
        System.out.println(i);
    }
    public static void main6(String[] args) {
        int a =19;
        int b = ++a;
        System.out.println(b);
        System.out.println(a++);
        System.out.println(++a);
    }
    public static void main5(String[] args) {
        short sh = 12;
        sh += 32767;
        System.out.println(sh);

        System.out.println(sh);
    }
    public static void main4(String[] args) {
        System.out.println(11.5 % 2.0);
    }
    public static void main3(String[] args) {
        String str = "12345";
        int ret = Integer.valueOf(str);
        int ret3 = Integer.parseInt(str);
        System.out.println(ret3 + 1);
        System.out.println(ret);
        String str2 = "12.5";
        double d = Double.valueOf(str2);
        System.out.println(d);
    }
    public static void main2(String[] args) {
        int a =123456;
        String aa = 12345 + "";
        System.out.println(aa);
        String ret = String.valueOf(a);
        System.out.println(ret);
        float f = 12.5f;
        String ret2 = String.valueOf(f);
        System.out.println(ret2);
    }
    public static void main1(String[] args) {
        String str1 = "Hello";
        String str2 ="World";
        System.out.println(str1 + str2);
        int a = 10;
        int b = 20;
        System.out.println("a = " + a);
        System.out.println("a + b = " + a + b);
        System.out.println("a + b = " + (a + b));
        System.out.println(a + b + "是a与b的和");
    }
}
