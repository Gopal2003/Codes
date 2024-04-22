public class Main {
    public static void main(String[] args) {
        // BoxWeight box1 = new BoxWeight(0.34);
        // System.out.println(box1.l + " " + box1.h + " " + box1.w + " " + box1.weight);//! As we havn't provided any values for l,w,h, 
        //!the default constructor will be called.

        // Box box1 = new Box();
        // System.out.println(box1.h);

        BoxWeight box2 = new BoxWeight(5,6,7,2);//! if we ommit super(l,b,h) the default constructor will be called.
        System.out.println(box2.l + " " + box2.h + " " + box2.w + " " + box2.weight);


    }
}
