package day03;

import java.util.Scanner;
import java.util.Stack;

public class _16_MakingCalculator {
	     public static int calculate(String s) {
	    	 Stack<String> op = new Stack<>();
	    	 Stack<String> word = new Stack<>();
	    	 for(int i =s.length()-1;i>=0;i--){
	    		 if(s.charAt(i)!=' '){
	    			 if(s.charAt(i)=='+' || s.charAt(i)=='-' || s.charAt(i)==')'){
	    				 op.push(""+s.charAt(i));
	    			 }
	    			 else if(s.charAt(i)=='('){
	    				 while(!op.peek().equals(")")){
	    					 String temp1 = word.pop();
	    					 String temp2 = word.pop();
	    					 String operation = op.pop();
	    					 word.push(eval(temp1,temp2,operation));
	    				 }
	    				 op.pop();
	    			 }
	    			 else{
	    				 word.push(""+s.charAt(i));
	    			 }
	    		 }	 
	    	 }
	    	 while(!word.isEmpty()){
	    		 System.out.println(word.pop());
	    	 }
//	    	 while(!op.isEmpty()){
//	    		 String temp1 = word.pop();
//	    		 String temp2 = word.pop();
//	    		 System.out.print(temp1+" "+temp2);
//	    		 String operation = op.pop();
//	    		 word.push(eval(temp1, temp2, operation));
//	    		 System.out.println();
//	    	 }
//	    	 return Integer.parseInt(word.pop());
	    	 return 0;
	  	  }
	  
	  	  private static String eval(String temp1, String temp2, String operation) {
			 if(operation.equals("+")){
				 return ""+(Integer.parseInt(temp1)+Integer.parseInt(temp2));
			 }
			 else if(operation.equals("-")){
				 return ""+(Integer.parseInt(temp1)+Integer.parseInt(temp2));
			 }
			 return "";
		  }

		//Dont make changes here
	  	  public static void main(String[] args) {
	  	  	  Scanner sc=new Scanner(System.in);
	  	  	  String s=sc.next();
	  	  	  System.out.println();
	  	  	  
	  	  	  System.out.println(calculate(s));
	  
	  	  }
}
