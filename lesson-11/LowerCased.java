public final class LowerCased implements Sequence{
    private Sequence sequence;
    LowerCased(Sequence sequence)
    {
        this.sequence=sequence;
    }
    @Override
    public String printedSeq()
    {
        return this.sequence.printedSeq().toLowerCase();
    }
}
