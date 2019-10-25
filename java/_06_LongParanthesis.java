package day03;

import java.util.Scanner;
import java.util.Stack;

public class _06_LongParanthesis {
		  public static int longestParenthesis(String s){
			  char[] arr = s.toCharArray();
			  int max = 0;
			  Stack<Integer> stack = new Stack<>();
			  stack.push(-1);
			  for(int i = 0;i<arr.length;i++){
				  if(arr[i]==')' && stack.peek() != -1 && arr[stack.peek()]=='('){
					  stack.pop();
					  if(max < i-stack.peek()){
						  max = i-stack.peek();
					  }
				  }
				  else{
					  stack.push(i);
				  }
			  }
			  return max;
	      }
	  	  // Dont make changes here
	  	  public static void main (String[] args) {
	  	      	Scanner scn=new Scanner(System.in);
	  	        String s=scn.next();
	  	        System.out.println(longestParenthesis(s));
	  	  }
}
