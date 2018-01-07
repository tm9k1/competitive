
import java.util.Scanner;

public class K_concatenation {

	public static void main(String[] args) {
		Scanner scan=new Scanner(System.in);
		int T=scan.nextInt();
		for(int i=0; i<T; i++){
			int N=scan.nextInt();
			int K=scan.nextInt();
			int []arr=new int[N];
			for(int j=0; j<N; j++){
				arr[j]=scan.nextInt();
			}
			System.out.println(maxSum(arr, n,K));			
		}
	}
	
}
public static long maxSum(int [] a, int n,int k)
{
    long max_so_far = -9999999, max_ending_here = 0;
 
    for (int i = 0; i < n*k; i++)
    {
        max_ending_here = max_ending_here + a[i%n];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}