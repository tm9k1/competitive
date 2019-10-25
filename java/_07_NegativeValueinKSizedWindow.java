package day03;

import java.util.ArrayList;
import java.util.Scanner;

public class _07_NegativeValueinKSizedWindow {
	
		 public  static void window(int[] arr, int window){
			 	int i=0;
			 	int j =0;
			 	ArrayList<Integer> negative = new ArrayList<>();
			 	while(j<arr.length){
			 		if(arr[j]<0){
			 			while(i<=j-window && j-window>=0){
			 				negative.add(0);
			 				i++;
			 			}
			 			while(i<=j){
			 				negative.add(arr[j]);
			 				i++;
			 			}
			 		}
			 		j++;
			 	}
			 	for(int k=0;k<=arr.length-window;k++){
			 		System.out.print(negative.get(k)+" ");
			 	}
			 	for(int k =negative.size();k<arr.length-window+1;k++){
			 		System.out.print(0+" ");;
			 	}
	 	 }
	
	 	 // Dont make changes here
	 	 public static void main (String[] args) {
	 	      	Scanner s=new Scanner(System.in);
	 	 	    int size=s.nextInt();
	 	 	    int[]arr=new int[size];
	 	 	    for(int i=0;i<size;i++){
	 	 	        arr[i]=s.nextInt();
	 	 	    }
	 	 	    int k=s.nextInt();
	 	 	      
	 	 	    window(arr, k);
	 	 }
}
