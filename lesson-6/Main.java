import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        //We start with the exercise 1:
        MathematicalOperations obj = new MathematicalOperations(1,2);
        System.out.println(obj.max());
        System.out.println(obj.min());
        System.out.println(obj.average());
        //Exercise 2:
        double in1,in2;
        Scanner cin=new Scanner(System.in);
        in1=cin.nextInt();
        in2=cin.nextInt();
        try{
            Logarithm loggh=new Logarithm(in1,in2);
            double res=loggh.doubleValue();
            System.out.println(res);
        } catch(IllegalArgumentException ex1)
        {
            System.out.println(ex1.getMessage());
        }
    }
}