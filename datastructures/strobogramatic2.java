import java.util.* ;

public class strobogramatic2{
    
    static int isstrobogramatic(String num){
        Map<Integer,Integer> sets = new HashMap<>() ;
        sets.put(0,0) ;
        sets.put(6,9) ;
        sets.put(9,6) ;
        sets.put(8,8) ;
        
        int n = num.length() ;
        int j = n-1;
        for(int i = 0 ;i<=j ;i++){
            int left = num.charAt(i) - '0' ;
            int right = num.charAt(j) - '0' ;
            
            int mapping = sets.getOrDefault(left, -1) ;
            if(mapping == -1){
                return 0  ;
            }
            
            if(mapping != right){
                return 0 ;
            }
            j-- ;
        }
        return 1 ;
    }
    public static void main(String[] args){
        System.out.print(isstrobogramatic("121")) ;
        
    }
}
