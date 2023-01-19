public final class Concatenation implements Sequence{
    private Sequence seq1;
    private Sequence seq2;
    Concatenation(Sequence seqP1, Sequence seqP2)
    {
        this.seq1=seqP1;
        this.seq2=seqP2;
    }
    public String printedSeq() {
        return this.seq1.printedSeq()+this.seq2.printedSeq();
    }
}
