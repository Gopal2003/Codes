
public class Box {

    double l;
    // private double l; //! Although subclass have the access of all the methods and variables of its parent class, it will not be able
    //! to access the private data of its parent class. 
    double h;
    double w;
    // double weight;

    Box() {
        super();//Object() is the root of class hierarchy.
        this.l = -1;
        this.h = -1;
        this.w = -1;
        // this.weight = -1;
    }

    Box(Box old)
    {
        this.l = old.l;
        this.h = old.h;
        this.w = old.w;
    }

    Box(double l, double h, double w) {
        this.l = l;
        this.h = h;
        this.w = w;
    }
}
