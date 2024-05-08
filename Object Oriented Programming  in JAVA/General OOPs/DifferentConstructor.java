public class DifferentConstructor {
    public static void main(String[] args) {
        Box box1 = new Box(4);
        Box box2 = new Box(box1);
        System.out.println(box1.l + " " + box1.h + " " + box1.w);
        System.out.println(box2.l + " " + box2.h + " " + box2.w);
    }

}

class Box {
    double l;
    double h;
    double w;

    Box() {
        this.l = -1;
        this.h = -1;
        this.w = -1;
    }

    Box(double side)
    {
    this.l = side;
    this.h = side;
    this.w = side;
    }

    Box(double l,double w,double h)
    {
    this.l = l;
    this.w = w;
    this.h = h;
    }

    //!Copy Constructor
    Box(Box old)
    {
    this.l = old.l;
    this.w = old.w;
    this.h = old.h;
    }
}
