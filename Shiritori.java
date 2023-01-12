import java.util.ArrayList;
//immutability is not required
final public class Shiritori {
    ArrayList<String> words=new ArrayList<String>();
    boolean game_over;
    void play(String word)
    {
        //if valid, add to the array, return the array
        //invald: return game over and set the boolean to true
        if(words.size()==0)
        {
            words.add(word);
            return;
        }
        String x=words.get(words.size()-1);
        char y=x.charAt(x.length()-1);
        char z=word.charAt(0);
        if(y==z)
        {
            for(int i = 0; i<words.size();i++)
            {
                String temp=words.get(i);
                if(!temp.equals(word))
                {
                    words.add(word);
                    System.out.println(words);
                    return;
                }
                else {
                    System.out.println("Game over!");
                    game_over=true;
                    return;
                }
            }
        }
        else {
            System.out.println("Game over!");
            game_over=true;
            return;
        }
    }
    void restart()
    {
        words.clear();
        game_over=false;
        System.out.println("Game restarted!");
    }
    void printWords()
    {
        System.out.println(words);
    }

}
