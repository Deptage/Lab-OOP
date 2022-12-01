public class MathematicalOperations {
    private int a;
    private int b;
    public MathematicalOperations(int a1, int b1)
    {
        a=a1;
        b=b1;
    }
    public int min()
    {
        if(a>b) return b;
        else return a;
    }
    public int max()
    {
        if(a>b) return a;
        else return b;
    }
    public float average()
    {
        float result = a+b;
        result/=2;
        return result;
    }

}
