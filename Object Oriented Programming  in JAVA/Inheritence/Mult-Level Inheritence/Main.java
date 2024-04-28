

public class Main {
    public static void main(String[] args) {
        /* 
        BoxColor b = new BoxColor(11,2,32,323,"Red");
        System.out.println(b.length + " " + b.height + " " + b.width + " " + b.weight + " " + b.color);
        // BoxColor b1 = new BoxColor("Blue");
        // System.out.println(b1.color);

        BoxWeight b2 = new BoxColor("hey");//even it takes color parameter but we can't access it. As type of the reference determines what variables can be accessed.
        System.out.println(b2.weight);
        System.out.println(b2.length);
        // System.out.println(b2.color); error

        Box1 b3 = new Box1(1,2,3);
        System.out.println(b3.height + " " + b3.length);
        */

        BoxWeight obj = new BoxWeight(20);
        System.out.println(obj.weight);

        BoxWeight obj1 = new BoxColor(obj);
        System.out.println(obj1.weight);
    }
}

