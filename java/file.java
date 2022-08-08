import java.io.File;
import java.io.FileWriter;

public class file {
    public static void main(String[] args) throws Exception{
        File book = new File("Book.txt");
        book.createNewFile() ;

        FileWriter writes = new FileWriter("Book.txt");
        writes.write("HI I AM LIKHITH");
        writes.close();

        
    }
}
