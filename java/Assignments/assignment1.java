import java.util.Scanner;

public class assignment1{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in) ;
        System.out.println("Number1 : ");
        int n1 = sc.nextInt() ;
        System.out.println("Number2 : ");
        int n2 = sc.nextInt() ;
        System.out.println("ENTER YOUR OPERATOR : ");
        String s1 = sc.next() ;
        sc.close();
        
        System.out.println("OUTPUT: ");
        switch(s1){
            case "+" :
            System.out.println(n1+n2);
            break ;
            case "-" :
            System.out.println(n1-n2);
            break ;
            case "*":
            System.out.println(n1*n2);
            break ;
            case "/" :
            double na ;
            na = n1/n2 ;
            System.out.println(na);
            break ;
            case "^" :
            double aa = Math.pow(n1,n2) ;
            int aaa = (int)aa ;
            System.out.println(aaa);
            default:
            System.out.println("WRONG OPERATOR ");
        }

    }
}