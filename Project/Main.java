import java.util.ArrayList;
import java.util.Scanner;
import java.io.*;
public class Main {
    public static ArrayList<Matrix> matrices=new ArrayList<>();
    public static void main(String[] args) {
        System.out.println("MatrixAlmostExpert - a program to perform various operations on matrices by Zuzanna Ławniczak, PUT student.");
        Menu();
    }
    public static void Menu()
    {
        System.out.println("===========================================================");
        System.out.println("                           MENU                            ");
        System.out.println("1. Create a new matrix");
        System.out.println("2. Delete a matrix from memory");
        System.out.println("Your choice (input an integer):");
        Scanner cin=new Scanner(System.in);
        int input=cin.nextInt();
        if(input==1)
        {
            createAMatrixMenu();
        }
        //System.out.println("3. ");
    }
    public static void createAMatrixMenu()
    {
        try{
            Scanner cin=new Scanner(System.in);
            System.out.println("Input number of rows for the new matrix");
            int m=cin.nextInt();
            System.out.println("Input number of columns for the new matrix");
            int n=cin.nextInt();
            if(m<=0||n<=0)
            {
                throw new IllegalArgumentException("Number of rows and columns of a matrix must be positive!");
            }
            else
            {
                Matrix mat=new Matrix(m,n);
                matrices.add(mat);
                matrices.get(0).show();
            }
        }
        catch(IllegalArgumentException ex1)
        {
            System.out.println(ex1.getMessage());//a getter, but I can't do anything about it ;(
            createAMatrixMenu();
        }
    }
    public static void deleteAMatrixMenu()
    {
        //try{
        //    Scanner cin=new Scanner(System.in);
        //    System.out.println("Which matrix do you want to delete?");
        //}
    }

}