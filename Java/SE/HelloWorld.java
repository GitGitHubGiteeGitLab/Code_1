public class HelloWorld {
    public static void main(String[] args) {
        byte a = 1;
        byte b = 127;
        char ch = 0;
        byte c = (byte)(a + b);
        System.out.println(c);
    }
    public static void main11(String[] args) {
        int a = 10;
        long b = 20L;
        a = (int)b;
        b = a;

        System.out.println(b);
        int c = 10;
        float f = 12.5f;
        c = (int)f;
        f =c;
        System.out.println(c);
        System.out.println(f);
        b = a;
    }
    public static void main10(String[] args) {
        //在java中，真只有一个true, 假只有一个false,JVM没有明确boolean的大小。
        boolean flg = true;
        System.out.println(flg);
    }
    public static void main9(String[] args) {
        //char是两个字节（汉字是两个字节） 16bit 65536 Unicode Character

        char ch = 'a';
        char space = ' ';
        char han = '美';
        char ch2 = 101;
        System.out.println(ch);
        System.out.println(space);
        System.out.println(han);
        System.out.println(ch2);
    }
    public static void main8(String[] args) {
        //12.5默认是double类型
        float f = 12.5F;
        System.out.println(f);
    }
    public static void main7(String[] args) {
        double d = 12.5;
        System.out.println(d);
        double sum = 1.1;
        System.out.println(sum * sum);
    }
    public static void main6(String[] args) {
        System.out.println(Byte.MAX_VALUE);
        System.out.println(Byte.MIN_VALUE);
    }
    public static void main5(String[] args) {
        byte a = 10;
        System.out.println(a);

    }
    public static void main4(String[] args) {
        short sh = 10;
        System.out.println(Short.MAX_VALUE);
        System.out.println(Short.MIN_VALUE);
    }
    public static void main3(String[] args) {
        long a = 10L;
        System.out.println(a);
        System.out.println(Long.MAX_VALUE);
        System.out.println(Long.MIN_VALUE);
    }
    public static void main2(String[] args) {
        int a = 10;
        System.out.println(Integer.MAX_VALUE);
        System.out.println(Integer.MIN_VALUE);
    }
    public static void main1(String[] args) {
        System.out.println("Hello, World!");
    }
}
