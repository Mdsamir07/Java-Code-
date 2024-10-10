package JavaRecursion;

public class print1toN {
    public static void main(String[] args) {
        funRev(6);
    }
    static void funRev(int n){
        if(n==0)
            return ;
        funRev(n-1);
        System.out.print(n+" ");
    }
}

