public class Logarithm implements Number{
    private double base, argument;
    @Override
    public double doubleValue()
    {
        return Math.log(this.argument)/Math.log(this.base);
    }
    public Logarithm(double inputBase, double inputArgument)
    {
        this.base=inputBase;
        this.argument=inputArgument;
        if(inputBase<=0||inputBase==1)
        {
            throw new IllegalArgumentException("Wrong base!");
        }
        if(inputArgument<=0)
        {
            throw new IllegalArgumentException("Wrong argument!");
        }
    }
}
