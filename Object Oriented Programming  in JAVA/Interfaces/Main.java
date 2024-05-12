public class Main {
    public static void main(String[] args) {
        Car c = new Car();
        c.start();
        c.stop();
        c.brake();
        System.out.println(Brake.money);

        Engine c1 = new Car();
        //System.out.println(c1.a);//! error as we can only access the variables which are of type engine...
        System.out.println(c1.money);

        
    }
}
