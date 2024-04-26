public class Main {
    public static void main(String[] args) {
        // BoxWeight box1 = new BoxWeight(0.34);
        // System.out.println(box1.l + " " + box1.h + " " + box1.w + " " + box1.weight);//! As we havn't provided any values for l,w,h, 
        //!the default constructor will be called.

        // Box box1 = new Box();
        // System.out.println(box1.h);

        // BoxWeight box2 = new BoxWeight(5,6,7,2);//! if we ommit super(l,b,h) the default constructor will be called.
        // System.out.println(box2.l + " " + box2.h + " " + box2.w + " " + box2.weight);

        // Box old = new BoxWeight(15,6,7,8);
        // System.out.println(old.l + " " + old.h + " " + old.w + " ");

        
        // Box box1 = new Box(1,2,3);
        // System.out.println(box1.l + " " + box1.h+ " " + box1.w);

        // BoxWeight other_3 = new Box();//! Error



        BoxWeight other = new BoxWeight(1,2,3,4);
        System.out.println(other.l + " " + other.h + " " + other.w + " " + other.weight);

        Box other_2 = new BoxWeight(other);//todo: OOP3 Super keyword in YT if don't understand this concept- kk
        System.out.println(other_2.l + " " + other_2.h + " " + other_2.w);



        




    }
}
