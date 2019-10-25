package day03;

import java.util.Scanner;

public class _13_QueueUsingArray {
	static class MyQueue {
	 	 static int front, rear;
	 	 static int arr[] = new int[1000];
	     	 
	 	 //constructor
	 	 MyQueue()
	 	 {
	 	 	 front=-1;
	 
	 	 	 rear=-1;
	 	 }
	 	 
	 	 /* The method push to push element
	 	    into the queue */
	 	 static void push(int a)
	 	 {
	 		 if(front == -1){
	 			 front++;
	 			 rear++;
	 			 arr[rear] = a;
	 			 return;
	 		 }
	 		 rear = (rear+1)%1000;
	 		 arr[rear] = a;
	 		 return;
	 	 } 
	     	 /* The method pop which return the 
	        	 element poped out of the queue*/
	 	 static int pop()
	 	 {
	 		 if(front>rear){
	 			 return -1;
	 		 }
	 		 else if(front == rear){
	 			 rear = -1;
	 			 int temp = front;
	 			 front = -1;
	 			 return arr[temp];
	 		 }
	 		 else{
	 			 int temp = front;
	 			 front = (front+1)%1000;
	 			 return arr[temp];
	 		 }
	 	 } 
	 } 

// Dont make changes  here
	public static void main(String[] args){
	 MyQueue queue=new MyQueue();
  	  Scanner sc=new Scanner(System.in);
  	  int n=sc.nextInt();
  	  int i=0;// number of operationsto be performed
  	  while(i!=n){
  	 	  int q=sc.nextInt();
  	 	  if(q==1){
  	 	 	  queue.push(sc.nextInt());
  	 	  }
  	 	  else if(q==2)System.out.println( queue.pop());
  	 	  i++;
  	  }
   }
}
