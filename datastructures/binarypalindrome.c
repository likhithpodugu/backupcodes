import java.util.* ;

public class binarypalindrome{
    
    static int kthbit(int x ,int k){
        int y ;
        y  = x & (1 << (k-1)) ;
        if(y!= 0){
            return 1 ;
        }
        else{
            return 0 ;
        }
    }
    
    static int leftmostbit(int x){
        int count = 0 ;
        while(x > 0){
            count++ ;
            x = x >> 1 ;
        }
        return count ;
    }
    
    static int ispalindrome(int x){
        int l = leftmostbit(x) ;
        int r = 1 ;
        
        while(l>r){
            if(kthbit(x,l) != kthbit(x,r)){
                return 0 ;
            }
            l-- ;
            r++ ;
        }
        return 1 ;
        
    }
    
    public static void main(String[] args){
        
        int num ;
        Scanner sc = new Scanner(System.in) ;
        num = sc.nextInt() ;
        int ans = ispalindrome(num);
        System.out.println(ans) ;
        
    }
}
