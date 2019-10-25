package day03;

import java.util.Scanner;
import java.util.Stack;

public class _15_StackSupportingMinimumOperation {
		static int minEle;
	    static Stack<Integer> s1=new Stack<>();
	    static Stack<Integer> s2=new Stack<>();
	    
	    //Complete the below 3 functions only
	    static int getMin()
	    {
	    	if(!s2.isEmpty())
	    		return s2.peek();
	    	else
	    		return -1;
	    }
	    static int pop()
	    {
	    	if(!s1.isEmpty()){
	    		s2.pop();
	    		return s1.pop();
	    	}
	    	return -1;
	    }
	    static void push(int x)
	    {
	    	s1.push(x);
	    	if(s2.isEmpty()){
	    		s2.push(x);
	    	}
	    	else{
	    		if(s2.peek()>x){
	    			s2.push(x);
	    		}
	    		else{
	    			s2.push(s2.peek());
	    		}
	    	}
	    }
	    
	 // Dont make changes here    
	    public static void main(String[] args) {
	 	 // TODO Auto-generated method stub
		 	 Scanner sc=new Scanner(System.in);
		 	 int n=sc.nextInt();
		 	 int[] query=new int[n];
		 	 for(int i=0;i<n;i++){
		 	 	 query[i]=sc.nextInt();
		 	 }
		 	 int i=0;
		 	 while(i<n){
		 	 	 if(query[i]==1){
		 	 	 	 i++;
		 	 	 	 push(query[i]);
		 	 	 }
		 	 	 else if(query[i]==2){
		 	 	 	 System.out.print(pop()+" ");
		 	 	 }
		 	 	 else if(query[i]==3){
		 	 	 	 System.out.print(getMin()+" ");
		 	 	 }
		 	 	 i++;
		 	 }
	    }
}
