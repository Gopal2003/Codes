// import java.util.Arrays;

public class Doubts {
    public static void main(String[] args) {
       Dog obj = new Dog();
       obj.sound();

       Animal obj2 = new Animal();
       obj2.sound();

    }
   
}

class Animal{
    void sound(){
        System.out.println("Animal makes a sound");
    }
}

class Dog extends Animal {
    @Override
    void sound() {
        System.out.println("Dogs Barks!!!");
    }
}

