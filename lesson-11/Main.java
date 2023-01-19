public class Main {
    public static void main(String[] args) {
        Sequence mySeq = new Concatenation(new Substring(new LowerCased(new Characters("podsTawy progRamoWania")), 0, 8), new Characters("ZL"));
        String a = mySeq.printedSeq();
        System.out.println(a);

    }
}//concatenation - polaczenie stringow, wystarczy oblsuzyc laczenie ze soba 2 stringow