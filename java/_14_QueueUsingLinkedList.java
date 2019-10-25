package day03;

import java.util.Scanner;

public class _14_QueueUsingLinkedList {
	static class MyQueue
	 {
	     QueueNode front = null;
	     QueueNode rear = null;
	 
	     // This function should add an item at
	 
	     // rear
	 	 void push(int a)
	 	 {
	 		 if(front == null){
	 			 QueueNode temp = new QueueNode(a);
	 			 front = temp;
	 			 rear = temp;
	 			 return;
	 		 }
	 		 rear.next = new QueueNode(a);
	 		 rear = rear.next;
	 	 }
	 	 
	     // This function should remove front
	     // item from queue and should return
	     // the removed item.
	 	 int pop()
	 	 {
	 		 if(front == rear){
	 			 QueueNode temp = front;
	 			 temp.next = null;
	 			 front = null;
	 			 rear = null;
	 			 return temp.data;
	 		 }
	 		 QueueNode temp = front;
	 		 front = front.next;
	 		 return temp.data;
	 	 }
	 }
	 
	 // Dont make changes here
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
	 
	 static class QueueNode
	 {
	 	 int data;
	 	 QueueNode next;
	 	 QueueNode(int a)
	 	 {
	 	     data = a;
	 	     next = null;
	 	 }
	 }
}
