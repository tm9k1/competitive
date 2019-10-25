package day03;

import java.util.Scanner;

public class _25_CloningLinkedList {
	static class Node {
        int data;
        Node next, arbitrary;

        Node(int d) {
            data = d;
            next = arbitrary = null;
        }
    }

    // This is a functional problem. You have to complete this function.
    // It takes as input the head of the linked list.
    // It should return the head of the cloned list.

    public static Node copyList(Node n) {
    	if(n == null)
    		return n;
    	Node head1 = n;
    	while(head1!=null){
    		Node temp = head1.next;
    		head1.next = new Node(head1.data);
    		head1.next.next = temp;
    		head1 = temp;
    	}
//    	display(n);
    	head1 = n;
    	while(head1!=null){
    		if(head1.arbitrary!=null)
    			head1.next.arbitrary = head1.arbitrary.next;
    		else
    			head1.next.arbitrary = head1.arbitrary;
    		head1 = head1.next.next;
    	}
    	head1 = n;
    	Node temp = n.next;
    	Node head2 = n.next;
    	while(head2.next!=null){
    		head1.next = head2.next;
    		head2.next = head2.next.next;
    		head1 = head1.next;
    		head2 = head2.next;
    	}
    	head1.next = null;
    	head2.next = null;
    	return temp;
    }


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();

        int a1 = sc.nextInt();

        Node tail;
        head = tail = insert(null, a1);

        for (int i = 1; i < n; i++) {
            int a = sc.nextInt();
            tail = insert(tail, a);
        }

        // adding arbitrary pointers
        for (int i = 0; i < m; i++) {

            int a = sc.nextInt();
            int b = sc.nextInt();

            Node tempA = head;
            int count = -1;

            while (tempA != null) {
                count++;
                if (count == a - 1) {
                    break;
                }
                tempA = tempA.next;
            }

            Node tempB = head;
            count = -1;

            while (tempB != null) {
                count++;
                if (count == b - 1) {
                    break;
                }

                tempB = tempB.next;
            }

            // when both a greater than N
            if (a <= n) {
                tempA.arbitrary = tempB;
            }
        }

        Node generated_add = head;

        Node res = copyList(head);

        Node cloned_add = res;

        if (check(head, res, cloned_add, generated_add) == true) {
            display(res);
        } else {
            System.out.println("false");
        }
    }

    static Node head;

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

    /*
     * Input Parameters: tail: tail of the linked list in which a new node is to
     * be inserted. data: the data value of the node which is to be inserted.
     * 
     * Return Value: tail of the linked list/the node that is inserted
     */
    public static Node insert(Node tail, int data) {

        if (tail == null) {
            return new Node(data);
        }

        Node nn = new Node(data);
        tail.next = nn;
        return nn;
    }

    public static boolean check(Node head, Node res, Node cloned_add, Node generated_add) {
        if (generated_add == cloned_add)
            return false;

        Node temp1 = head;
        Node temp2 = res;
        int len1 = 0, len2 = 0;

        while (temp1 != null) {
            len1++;
            temp1 = temp1.next;
        }

        while (temp2 != null) {
            len2++;
            temp2 = temp2.next;
        }

        /* if lengths not equal */
        if (len1 != len2) {
            return false;
        }

        temp1 = head;
        temp2 = res;

        while (temp1 != null) {

            if (temp1.data != temp2.data) {
                return false;
            }

            if (temp1.arbitrary != null && temp2.arbitrary != null) {
                if (temp1.arbitrary.data != temp2.arbitrary.data) {
                    return false;
                }
            } else if (temp1.arbitrary != null && temp2.arbitrary == null) {
                return false;
            }

            temp1 = temp1.next;
            temp2 = temp2.next;
        }

        return true;

    }
}
