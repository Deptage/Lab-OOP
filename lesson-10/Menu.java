import java.util.Scanner;

final public class Menu {
    Shiritori game=new Shiritori();
    Scanner cin=new Scanner(System.in);
    void newGame()
    {
        boolean goOn=true;
        while(goOn)
        {
            System.out.println("1. Play");
            System.out.println("2. Print the words");
            System.out.println("3. Restart");
            System.out.println("4. Exit");
            System.out.println("Input your choice:");
            int choice=cin.nextInt();
            cin.nextLine();
            switch (choice)
            {
                case 1 -> playGame();
                case 2 -> game.printWords();
                case 3 -> game.restart();
                case 4 -> goOn=false;
            }
        }
    }
    void playGame()
    {
        System.out.println("Input a word:");
        String word=cin.nextLine();
        game.play(word);
    }
}
