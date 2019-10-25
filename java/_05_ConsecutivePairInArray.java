package day03;

import java.util.Scanner;
import java.util.Stack;

public class _05_ConsecutivePairInArray {
		 public static boolean pairWiseConsecutive(Stack<Integer> st) {
			 Stack<Integer> st2 = new Stack<>();
			 int count = 0;
			 while(!st.isEmpty()){
				 st2.push(st.pop());
				 count++;
			 }
			 for(int i =0;i<count-count%2;i+=2){
				 int temp1 = st2.pop();
				 int temp2 = st2.pop();
				 if(Math.abs(temp1-temp2) != 1){
					 return false;
				 }
			 }
			 return true;
	 	 }
	 
	 	 // Dont make changes here
	 	 public static void main(String[] args){
	 	 	 Scanner sc=new Scanner(System.in);
	 	 	 int n=sc.nextInt();
	 	 	 Stack<Integer>st=new Stack<>();
	 	 	 for(int i=0;i<n;i++){
	 	 	 	 st.push(sc.nextInt());
	 	 	 }
	 	 	 System.out.println(pairWiseConsecutive(st));
	 	 	 	 
	 	 }
}
