
public class Box {

    double l;
    // private double l; //! Although subclass have the access of all the methods and variables of its parent class, it will not be able
    //! to access the private data of its parent class. 
    double h;
    double w;

    Box() {
        this.l = -1;
        this.h = -1;
        this.w = -1;
    }

    Box(double l, double h, double w) {
        this.l = l;
        this.h = h;
        this.w = w;
    }
}
