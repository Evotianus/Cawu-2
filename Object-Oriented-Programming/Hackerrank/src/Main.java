import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;

public class Main {
    public Main() {
        // Question 1 : Welcome to Java!
        // System.out.println("Hello, World.");
        // System.out.println("Hello, Java.");


        // Question 2 : Java Stdin and Stdout I
        // Scanner scan = new Scanner(System.in);
        // System.out.println(scan.nextInt());
        // System.out.println(scan.nextInt());
        // System.out.println(scan.nextInt());
        // scan.close();


        // Question 3 : Java If-Else
        // Scanner scan = new Scanner(System.in);
        // int x = scan.nextInt();
        // if (x % 2 == 1) {
        //     System.out.println("Weird");
        // } else if (2 <= x && x <= 5) {
        //     System.out.println("Not Weird");
        // } else if (6 <= x && x <= 20) {
        //     System.out.println("Weird");
        // } else {
        //     System.out.println("Not Weird");
        // }
        // scan.close();


        // Question 4 : Java Stdin and Stdout II (Note: Kita perlu scan.nextLine() sebelum scan untuk nextLine nya itu sendiri)
        // Scanner scan = new Scanner(System.in);
        // int i = scan.nextInt();
        // double d  = scan.nextDouble();
        // scan.nextLine();
        // String s = scan.nextLine();
        // scan.close();

        // System.out.println("String: " + s);
        // System.out.println("Double: " + d);
        // System.out.println("Int: " + i);


        // Question 5 : Java Output Formatting
        // Scanner sc=new Scanner(System.in);
        // System.out.println("================================");
        // for(int i=0;i<3;i++){
        //     String s1=sc.next();
        //     int x=sc.nextInt();
        //     //Complete this line (bagian yang aku coding)
        //     System.out.println(String.format("%-15s", s1) + String.format("%03d", x));
        // }
        // System.out.println("================================");
        // sc.close();


        // Question 6 : Java Loops I (BufferedReader sama aja kaya scanner, mending pake scanner aja deh Vo, lebih gampang di mengerti WKWKWK)
        // BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        // int N = Integer.parseInt(bufferedReader.readLine().trim());
        
        // for (int i = 1; i <= 10; i++) {
        //     System.out.println(N + " x " + i + " = " + (N * i));
        // }

        // bufferedReader.close();


        // Question 7 : Java Loops II
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            
            int index = 1;
            int num = a + index * b;
            System.out.print(num + " ");
            for (int j = 2; j <= n; j++) {
                int result = num + index * b;
                System.out.print(result);
                if (j != n) {
                    System.out.print(" ");
                }
                index *= 2;
            }
        }
        in.close();
    }
    public static void main(String[] args) {
        new Main();
    }
}
