import java.util.* ;

public class strobogramatic{
    
    static ArrayList<String> numdef(int n,int length){
        ArrayList<String> result = new ArrayList<String>() ;
         if(n==0){
            return result ;
         }
         if(n == 1 ){
             result.add("1") ;
             result.add("0") ;
             result.add("8") ;
             return result ;
         }
         
         ArrayList<String> middles = numdef(n-2 ,length) ;
         for(String m : middles){
             if(n != length){
                 result.add("0" + m + "0") ;
             }
             else{
                result.add("8" + m + "8");
                result.add("1" + m + "1");
                result.add("9" + m + "6");
                result.add("6" + m + "9");
             }
         }
         return result ;
    }
    
    static ArrayList<String> strobogrammatic_num(int n)
  {
    ArrayList<String> result = numdef(n, n);
    return result;
  }
  
    public static void main(String[] args){
        
        for(String num :strobogrammatic_num(3) ){
             System.out.print(num + " ");
        }
    }
}
