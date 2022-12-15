public interface Forecast {
    double todaysTemperature();

    final class Fake implements Forecast {
        private double temp = 20.0;

        @Override
        public double todaysTemperature() {
            return temp;
        }
    }
}
