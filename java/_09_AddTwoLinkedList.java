package day03;

import java.util.Scanner;

public class _09_AddTwoLinkedList {
	
	public static Node addTwoNumbers(Node n1, Node n2) {
		Node head1 = reverse(n1);
		Node head2 = reverse(n2);
		Node temp = head1;
		Node prev = null;
		int sum = 0;
		int carry = 0;
		while(temp!=null && head2 != null){
			sum = temp.data+head2.data+carry;
			temp.data = sum%10;
			carry = sum/10;
			prev = temp;
			temp = temp.next;
			head2 = head2.next;
			
		}
		while(temp !=null){
			sum = temp.data+carry;
			temp.data = sum%10;
			carry = sum/10;
			prev = temp;
			temp = temp.next;
		}
		while(head2 != null){
			sum = head2.data+carry;
			head2.data = sum%10;
			carry = sum/10;
			prev.next = head2;
			prev = prev.next;
			head2 = head2.next;
		}
		if(carry!=0){
			prev.next = new Node(carry,null);
			prev = prev.next;
		}
		prev.next = null;
		head1 = reverse(head1);
		return head1;
     }

	private static Node reverse(Node n) {
		if(n.next == null){
			return n;
		}
		Node prev = n;
		Node curr = n.next;
		while(curr!=null){
			Node next = curr.next;
			curr.next = prev;
			prev = curr;
			curr = next;
		}
		n.next = null;
		return prev;
	}
     
     // -----------------------------------------------------
 
     static Node head1;
 
     static Node head2;
 
     static Node head3;
 
     public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);
         int n1 = sc.nextInt();
         int a1 = sc.nextInt();
 
         Node tail;
         head1 = tail = insert(null, a1);
 
         for (int i = 1; i < n1; i++) {
             int a = sc.nextInt();
             tail = insert(tail, a);
         }
 
         int n2 = sc.nextInt();
         int a2 = sc.nextInt();
 
         head2 = tail = insert(null, a2);
 
         for (int i = 1; i < n2; i++) {
             int a = sc.nextInt();
             tail = insert(tail, a);
         }
 
         head3 = addTwoNumbers(head1, head2);
         display(head3);
 
     }
 
     // Class declaration for a Node of the Linked List
     private static class Node {
         int data;
         Node next;
 
         public Node(int data, Node next) {
             this.data = data;
             this.next = next;
         }
 
     }
 
     /*
      * Input Parameters: tail: head of the linked list in which a new node is to
      * be inserted. data: the data value of the node which is to be inserted.
      * 
      * Return Value: tail of the linked list/the node that is inserted
      */
     public static Node insert(Node tail, int data) {
 
         if (tail == null) {
             return new Node(data, null);
         }
 
         Node nn = new Node(data, null);
         tail.next = nn;
         return nn;
     }
 
     /*
      * Input Parameters: head: head of the linked list in which is to be
      * displayed.
      * 
      * Return Value: null
      */
     public static void display(Node head) {
         for (Node node = head; node != null; node = node.next) {
             System.out.print(node.data + " ");
         }
         System.out.println();
     }
}
