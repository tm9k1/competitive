package day03;

import java.util.Scanner;

public class _30_MergeSortedLinkedList {
	static Node left;
	 
    // -----------------------------------------------------
    // This is a functional problem. Only this function has to be written.
    // This function takes as input the head of two linked lists.
    // It should return the head of merged list
    public static Node mergeResult(Node head1, Node head2) {
        Node head = mergeSorted(head1, head2);
        return reverse(head);
    }
    
    private static Node mergeSorted(Node headA, Node headB) 
    { 
        
        /* a dummy first node to  
           hang the result on */
        Node dummyNode = new Node(0); 
          
        /* tail points to the  
        last result node */
        Node tail = dummyNode; 
        while(true)  
        { 
              
            /* if either list runs out,  
            use the other list */
            if(headA == null) 
            { 
                tail.next = headB; 
                break; 
            } 
            if(headB == null) 
            { 
                tail.next = headA; 
                break; 
            } 
              
            /* Compare the data of the two 
            lists whichever lists' data is  
            smaller, append it into tail and 
            advance the head to the next Node 
            */
            if(headA.data <= headB.data) 
            { 
                tail.next = headA; 
                headA = headA.next; 
            }  
            else
            { 
                tail.next = headB; 
                headB = headB.next; 
            } 
              
            /* Advance the tail */
            tail = tail.next; 
        } 
        return dummyNode.next; 
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
    

    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n1 = sc.nextInt();
        int a1 = sc.nextInt();
        head = insert(head, a1);

        for (int i = 1; i < n1; i++) {
            int a = sc.nextInt();
            head = insert(head, a);
        }
        
        int n2 = sc.nextInt();
        int a2 = sc.nextInt();
        head2 = insert(head2, a2);
        for (int i = 1; i < n2; i++) {
            int a = sc.nextInt();
            head2 = insert(head2, a);
        }

        head3 = mergeResult(head, head2);
        display(head3);

    }

    // Class declaration for a Node of the Linked List
    static class Node {
        int data;
        Node next;

        public Node(int data) {
            this.data = data;
            this.next = null;
        }

    }

    static Node head;

    static Node head2;

    static Node head3;

    /*
     * Input Parameters: head: head of the linked list in which a new node is to
     * be inserted. data: the data value of the node which is to be inserted.
     * 
     * Return Value: head of the linked list in which the node is inserted
     */
    public static Node insert(Node head, int data) {

        if (head == null) {
            return new Node(data);
        }

        head.next = insert(head.next, data);
        return head;
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
    }
}
