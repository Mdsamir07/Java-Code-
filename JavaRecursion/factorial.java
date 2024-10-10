package JavaRecursion;
import java.util.Scanner;

public class factorial {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        System.out.println("Please Enter the value of n:");
        int n=input.nextInt();
        int ans =fact(n);
        System.out.println("The value of factorial is : "+ans);
    }
    static int fact(int n){
        if(n==1 || n==0) {
            return 1;
        }
        return n*fact(n-1);
    }
}
