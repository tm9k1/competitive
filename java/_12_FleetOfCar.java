package day03;

import java.util.Scanner;

public class _12_FleetOfCar {
		 
		 public static int carFleet(int target, int[] position, int[] speed) {
			 int[] time = new int[position.length];
			 for(int i=0;i<position.length;i++){
				 time[i] = (target-position[i])/speed[i];
			 }
			 return 0 ;
 	     }
	     
	     // Dont make changes here
	     public static void main(String[] args){
	         Scanner sc=new Scanner(System.in);
	         int target=sc.nextInt();
	         int n=sc.nextInt();
	         int[] pos=new int[n];
	         int[] speed=new int[n];
	         for(int i=0;i<n;i++)pos[i]=sc.nextInt();
	         for(int i=0;i<n;i++)speed[i]=sc.nextInt();
	         System.out.println(carFleet(target, pos, speed));
	     }
}
