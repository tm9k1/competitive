package day03;

import java.util.Scanner;
import java.util.Stack;

public class _11_PositionOfBracket {
	
	 public static void printBracketsPos(String s){
        int counter = 0;
		Stack<Integer> stack = new Stack<>();
        for(int i =0;i<s.length();i++){
        	if(s.charAt(i) == '('){
        		counter++;
        		stack.push(counter);
        		System.out.print(counter+" ");
        	}
        	else if(s.charAt(i)==')'){
        		System.out.print(stack.pop()+" ");
        	}
        }
	 }

	 //Dont make changes here 
	 public static void main (String[] args) {
	     Scanner scn=new Scanner(System.in);
	         String s=scn.next();
	         printBracketsPos(s);
	     
	 }
}
