public class Cat extends AnimaL{

    String animalName;
    Cat(){
        animalName = "Gopal";
    }
    Cat(String animalName)
    {
        this.animalName = animalName;
        System.out.println("Cat");
    }
    @Override
    void type()
    {
        System.out.println("Cute pet");
    }
}
