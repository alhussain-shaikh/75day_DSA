package Prefix_Sum_Problem;

/******************************************************************************

Check if we can partition the array into two subarray with equal sum.More formally 
check that the prefix sum of a part of the array is equal to the suffix sum of 
rest of the array.


*******************************************************************************/
import java.util.*;
public class comparing
{
    static void inputValue(int[] a){
        System.out.println("Enter "+a.length+"nos in Array: ");
        Scanner sc=new Scanner(System.in);
        for(int i=0;i<a.length;i++){
            a[i]= sc.nextInt();   
        }
        
    }
    static void printArray(int[] a){
        for(int i=0;i<a.length;i++){
            System.out.print(a[i]+" ");
        }
        System.out.println();
    }
    static void prefix(int[] a,int[] prefix){
        for(int i=0;i<a.length;i++){
            for(int j=0;j<=i;j++){
		        prefix[i]+=a[j];
		    }
        }

        
    }
    static void suffix(int[] a,int[] suffix){
        for(int j=a.length-1;j>=0;j--){
            for(int k=a.length-1;k>=j;k--){
                suffix[j]+=a[k];
            } 
                
        }
        
    }
    static boolean isPartition(int[] pre,int[] suf){
        boolean x=false;
        for(int i=0;i<pre.length;i++){
		    if(i<=pre.length-2){
		       if(pre[i]==suf[i+1]){
		            x=true;
		            
		        } 
		    }
		  
		}
		return x;
    }
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    System.out.println("Enter the no of Element Present in array: ");
	    int n=sc.nextInt();
	    int[] a=new int[n];
	    int[] pre=new int[n];
	    int[] suf=new int[n];
	    inputValue(a);
	    System.out.println("Printing the Given Array.....");
	    printArray(a);
	    System.out.println("Printing the Prefix  Array.....");
	    prefix(a,pre);
	    printArray(pre);
	    System.out.println("Printing the Suffix  Array.....");
	    suffix(a,suf);
	    printArray(suf);
	    boolean x=isPartition(pre,suf);
	    if(x==true){
	        System.out.println("YES WE CAN PARTITION ");
	    }else{
	        System.out.println("NO  WE CANNOT PARTITION ");
	    }
		
		
	}
}

