package day03;

import java.util.Scanner;
import java.util.Stack;

public class _03_PlayingTheGame {

	public static int calculatePoints(String[] ops) {
		Stack<Integer> game = new Stack<>();
		for(String i:ops){
			if(i.equals("C")){
				if(!game.isEmpty()){
					game.pop();
				}
			}
			else if(i.equals("D")){
				if(!game.isEmpty()){
					int temp = game.peek();
					game.push(temp*2);
				}
			}
			else if(i.equals("+")){
				if(!game.isEmpty()){
					int temp = game.pop();
					int temp1 = game.peek();
					game.push(temp);
					game.push(temp+temp1);
				}
			}
			else{
				game.push(Integer.parseInt(i));
			}
		}
		int sum=0;
		while(!game.isEmpty()){
			sum += game.pop();
		}
		return sum;
 	 }
 
 	 //Dont make changes here
 	 public static void main(String[] args) {
 	 Scanner sc=new Scanner(System.in);
 	 int n=sc.nextInt();
 	 String[] S=new String[n];
 	 for(int i=0;i<n;i++){
 	 	 S[i]=sc.next();
 	 }
 	 System.out.println(calculatePoints(S));
 	 }

}
