

public class BoxWeight extends Box {
    double weight;

    BoxWeight()
    {
        this.weight = -1;
    }

    BoxWeight(BoxWeight other)
    {
        super(other);
        weight = other.weight;
    }

    BoxWeight(double weight)
    {
        this.weight = weight;
    }

    BoxWeight(double l,double h, double w,double weight)
    {
        super(l,h,w); //! Calling parent class constructor
        // System.out.println(this.weight);
        // System.out.println(super.weight); //! This is used when there is similar variable name in current class and parent class.
        this.weight = weight;
    }
}
