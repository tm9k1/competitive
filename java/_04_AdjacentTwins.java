package day03;

import java.util.Scanner;
import java.util.Stack;

public class _04_AdjacentTwins {
		 public static void removeAdjTwins(String s) {
			 char[] arr = s.toCharArray();
			 Stack<Character> stack = new Stack<>();
			 for(int i=0;i<arr.length;i++){
				 if(stack.isEmpty()){
					stack.push(arr[i]); 
				 }
				 else if(stack.peek()==arr[i]){
					 stack.pop();
				 }
				 else{
					 stack.push(arr[i]);
				 }
			 }
			 String res = "";
			 while(!stack.isEmpty()){
				 res = stack.pop()+res;
			 }
			 System.out.println(res);
	 	 }
	 	 
	 	 //Dont make changes here
	 	 public static void main(String[] args) {
	 	 	 // TODO Auto-generated method stub
	 	 	 Scanner sc=new Scanner(System.in);
	 	 	 String s = sc.next();
	 	 	 removeAdjTwins(s);
	 	 }
}
