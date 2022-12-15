public class Weather {
    private final Forecast forecast;
    Weather(Forecast f)
    {
        this.forecast=f;
    }
    public String todaysTemperature()
    {
         return "Today's temperature is: "+forecast.todaysTemperature();
    }

}
