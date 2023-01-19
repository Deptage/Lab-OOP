public final class Substring implements Sequence {

    private final Sequence sequence;
    private final int start;
    private final int end;
    public Substring(Sequence seq, int start, int end) {
        this.sequence = seq;
        this.start = start;
        this.end = end;
    }
    @Override
    public String printedSeq() {
        return this.sequence.printedSeq().substring(start,end);
    }
}
