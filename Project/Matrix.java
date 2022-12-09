public class Matrix{
    private int numberOfRows, numberOfColumns;
    private Element elements[][];
    Matrix(int m, int n)
    {
        this.numberOfRows=m;
        this.numberOfColumns=n;
        this.elements=new Element[numberOfRows][numberOfColumns];
    }
    void show()
    {
        for(int i = 0; i<numberOfRows; i++)
        {
            for(int j = 0; j<numberOfColumns; j++)
            {
                System.out.print(elements[i][j].pvalue());
                System.out.print(" ");
            }
            System.out.println();
        }
    }

}
