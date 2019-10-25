package day03;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class _02_NumberOfFetches {
	
	 static Queue<Integer> que = new LinkedList<>();
	 static class RecentFetch {
	     public int ping(int t) {
    	    que.add(t);
    	    while((t-3000) > que.peek()){
    	    	que.remove();
    	    }
    	    return que.size();
	     }
	 }

	 // Dont make changes here 
	 public static void main(String[] args){
	 	 RecentFetch rf=new RecentFetch();
	 	 Scanner sc=new Scanner(System.in);
	 	 int n=sc.nextInt();
	 	 for(int i=0;i<n;i++){
	 	 	 System.out.print(rf.ping(sc.nextInt())+" ");
	 	 }
	 }
}
