package Prefix_Sum_Problem;

// Prefix Sum Approach 
// Given an Integer array 'a ',return the Prefix sum/running sum in the same 
// array without creating a new array

// Sample input 
// a=[2,1,3,4,5]
// Prefix=[2,3,6,10,15]

import java.util.*;
public class prefix
{
	public static void main(String[] args) {
	    System.out.println("Enter the no of elements in Array :");
	    Scanner sc=new Scanner(System.in);
	    int n=sc.nextInt();
		int a[]=new int[n+1];
		int[] prefix=new int[n+1];
		System.out.println("Enter "+n+" nos Present in array: ");
		for(int i=1;i<=n;i++){
		    a[i]=sc.nextInt();
		}
		
		for(int i=1;i<=n;i++){
		  //  for(int j=0;j<=i;j++){
		  //      prefix+=a[j];
		  //  }
		  a[i]+=a[i-1];
		}
		System.out.println("Prefix Sum of the Given array is ");
		for(int i=0;i<=n;i++){
		  //  System.out.print(prefix[i]+" ");
		    System.out.print(a[i]+" ");
		}
		System.out.println();
		int l,r;
		System.out.println("Enter the value of L and R:");
		l=sc.nextInt();
		r=sc.nextInt();
		
		int sum=a[r]-a[l-1];
		System.out.println("Sum= "+sum);
		
	}
}
