

public class BoxWeight extends Box {
    double weight;

    BoxWeight(double weight)
    {
        this.weight = weight;
    }

    BoxWeight(double l,double h, double w,double weight)
    {
        super(l,h,w); //! Calling parent class constructor
        this.weight = weight;
    }
}
