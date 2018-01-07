
import java.util.Scanner;

public class K_concatenation {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int T = scan.nextInt();
		for (int i = 0; i < T; i++) {
			int N = scan.nextInt();
			int K = scan.nextInt();
			int []arr = new int[N];
			for (int j = 0; j < N; j++) {
				arr[j] = scan.nextInt();
			}
			System.out.println(maxSum(arr, N, K));
		}

	while (t--) {
		int flag = 0;
		int N = scan.nextInt();
		int K = scan.nextInt();
		int []data = new int[N];
		long sum = 0;
		
			for (int j = 0; j < N; j++) {
				arr[j] = scan.nextInt();
			}
		if (K < 4) {
			int []a= new int[N * K];
			for (int i = 0; i < n * k; i++) {
				a[i] = data[i % n];
			}
			sum = maxSubArraySum(a, n * k);
		}
		else {
			int a[n * 3];
			for (int i = 0; i < n * 3; i++) {
				a[i] = data[i % n];
			}
			long long sum2 = maxSubArraySum(a, n * 2);
			long long sum3 = maxSubArraySum(a, n * 3);
			sum=sum2+(k-2)*(sum3-sum2);
		}
		System.out.println(sum);
	}
	
}


	public static long maxSum(int [] a, int n, int k) {
		long max_so_far = -9999999, max_ending_here = 0;

		for (int i = 0; i < n * k; i++) {
			max_ending_here = max_ending_here + a[i % n];
			if (max_so_far < max_ending_here)
				max_so_far = max_ending_here;

			if (max_ending_here < 0)
				max_ending_here = 0;
		}
		return max_so_far;
	}
}