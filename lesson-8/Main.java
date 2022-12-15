public class Main {
    public static void main(String[] args) {
        Forecast forec=new Forecast.Fake();
        Weather newWeather= new Weather(forec);
        System.out.println(newWeather.todaysTemperature());
        assert "Today's temperature is: 20.0".equals(newWeather.todaysTemperature());
    }
}