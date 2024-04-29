public class Main {
    public static void main(String[] args) {
        Cat A1 = new Dog("Dog");
        A1.type();//!What method to call depends on the type of object. Dog is printed because I have mentioned sout in constructor of Dog sub-class.
        System.out.println(A1.animalName);//! What variable to access depends on the type of the reference variable.
        // System.out.println(A1.type); //! error as we can't access the variable present in Dog sub-calss.
    }
}
