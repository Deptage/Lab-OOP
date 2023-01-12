import java.util.ArrayList;
//immutability is not required
final public class Shiritori {
    ArrayList<String> words=new ArrayList<String>();
    boolean game_over;
    void play(String word)
    {
        //if valid, add to the array, return the array
        //invalid: return game over and set the boolean to true
        if(words.size()==0)
        {
            words.add(word);
            return;
        }
        String last_word_in_array=words.get(words.size()-1);
        char last_character_last_word=last_word_in_array.charAt(last_word_in_array.length()-1);
        char first_character_new=word.charAt(0);
        boolean flag=true;
        if(last_character_last_word==first_character_new)
        {
            for(int i = 0; i<words.size();i++)
            {
                String temp=words.get(i);
                if(temp.equals(word))
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                words.add(word);
                System.out.println(words);
                return;
            }
        }
        System.out.println("Game over!");
        game_over=true;
        return;
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
