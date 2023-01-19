public final class Characters implements Sequence{
    private final String string;

    public Characters(String string2) {
        this.string=string2;
    }
    @Override
    public String printedSeq() {
        return this.string;
    }
}
