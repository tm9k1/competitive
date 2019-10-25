package day03;

import java.util.Scanner;

public class _01_Mustang {
	
		public static int mustangTour(int[] petrol,int[] dist){
			 int i =0;
			 int j =0;
			 int sq = 0;
			 while(true){
				 if(sq>=0){
					 sq += petrol[j]-dist[j];
					 j = (j+1)%petrol.length;
					 if(i==j){
						 if(sq>=0){
							 return i;
						 }
						 else{
							 return -1;
						 }
					 }
				 }
				 else{
					 if(j<i){
						 return -1;
					 }
					 i = j;
					 sq = 0;
				 }
			 }
		}
	 
	 
	 	 // Dont make changes here
	 	 public static void main(String[] args) {
	 	 	 Scanner sc=new Scanner(System.in);
	 	 	 int n=sc.nextInt();
	 	 	 int[] petrol=new int[n];int[] dist=new int[n];
	 	 	 for(int i=0;i<n;i++)petrol[i]=sc.nextInt();
	 	 	 for(int i=0;i<n;i++)dist[i]=sc.nextInt();
	 	 	 System.out.println(mustangTour(petrol,dist));
	 	 }
}
