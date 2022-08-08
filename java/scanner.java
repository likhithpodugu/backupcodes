import java.util.Scanner;
import java.io.File ;

public class scanner {
    public static void main(String[] args) throws Exception{
        File book = new File("Book.txt"); 
        Scanner scan = new Scanner(book);
        while(scan.hasNext()){
            String n = scan.nextLine();
            System.out.println(n);
        }
       
        scan.close();
    }
}
