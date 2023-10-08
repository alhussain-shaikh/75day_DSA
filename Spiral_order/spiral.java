package Spiral_order;

/******************************************************************************

Sprial MatriX Traversal and Generation
1.printing the

*******************************************************************************/
import java.util.*;
public class spiral

{
    public static int[][] inputMatrix(int[][] matrix,int r,int c){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter "+r*c+" value of matrix:");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                matrix[i][j]=sc.nextInt();
            }
        }
        return matrix;
    }
    public static void printMatrix(int[][] matrix,int r,int c){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                System.out.print(matrix[i][j]+" ");
            }
            System.out.println();
        }
    }
    static void printSprialOrder(int[][] matrix,int r,int c){
        int topRow=0,bottomRow=r-1,leftCol=0,rightCol=c-1;
        int totalElement=0;
        while(totalElement<r*c){
            //topRow -> leftCol to RightCol
            for(int j=leftCol;j<=rightCol && totalElement<r*c;j++){
                System.out.print(matrix[topRow][j]+" ");
                totalElement++;
                
            }
            topRow++;
            //rightCol -> topRow to bottomRow
            for(int i=topRow;i<=bottomRow && totalElement<r*c;i++){
                System.out.print(matrix[i][rightCol]+" ");
                totalElement++;
            }
            rightCol--;
            
            //bottomRow -> rightCol to leftCol
            for(int i=rightCol;i>=leftCol && totalElement<r*c;i--){
                System.out.print(matrix[bottomRow][i]+" ");
                totalElement++;
            }
            bottomRow--;
            
            //leftCol -> bottomRow to topRow
            for(int i=bottomRow;i>=topRow && totalElement<r*c;i--){
                System.out.print(matrix[i][leftCol]+" ");
                totalElement++;
                
            }
            leftCol++;
        }
        
    }
    static int[][] sprialMatrix(int[][] matrix,int r,int c){
        int topRow=0,rightCol=c-1,bottomRow=r-1,leftCol=0;
        int totalElement=0;
        int currt=1;
        while(totalElement<r*c){
            //toprow -> leftCol to rightCol
            for(int i=topRow ;i<=rightCol && totalElement<r*c;i++){
                matrix[topRow][i]=currt;
                currt++;
                totalElement++;
                
            }
            topRow++;
            
            //rightCol -> toprow to bottomRow
            for(int j=topRow;j<=bottomRow && totalElement<r*c;j++){
                matrix[j][rightCol]=currt;
                currt++;
                totalElement++;
            }
            rightCol--;
            
            //bottomRow -> rightCol to leftCol
            for(int i=rightCol;i>=leftCol && totalElement<c*r;i--){
                matrix[bottomRow][i]=currt;
                currt++;
                totalElement++;
            }
            bottomRow--;
            
            //leftCol -> bottomRow to toprow
            for(int j=bottomRow;j>=topRow && totalElement<c*r;j--){
                matrix[j][leftCol]=currt;
                currt++;
                totalElement++;
            }
            leftCol++;
        }
        return matrix;
    }
    
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
		System.out.println("Enter no of row:");
		int r=sc.nextInt();
		System.out.println("Enter the no of columns");
		int c=sc.nextInt();
		int[][] m=new int[r][c];
// 		m=inputMatrix(m,r,c);
// 		System.out.println("Printing the Normal Matrix: ");
// 		printMatrix(m,r,c);
// 		System.out.println("Printing the spiral Matrix ");
// 		printSprialOrder(m,r,c);
        m=sprialMatrix(m,r,c);
        printMatrix(m,r,c);
        printSprialOrder(m,r,c);
		
		
		
	}
}

