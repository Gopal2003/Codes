public class BoxWeight extends Box {
    double weight = -1;

    
    // @Override we can't override due to static keyword.
    static void greetings() 
    {
        System.out.println("Hey, I am in BoxWeight Class. Greetings!");
    }
}
