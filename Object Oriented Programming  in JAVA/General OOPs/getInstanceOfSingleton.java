
public class getInstanceOfSingleton {
    public static void main(String[] args) {
        Singleton obj1 = Singleton.getInstance();
        Singleton obj2 = Singleton.getInstance();
        Singleton obj3 = Singleton.getInstance();

        obj1.print(); 
        obj2.print(); 
        obj3.print(); 
    }
}
