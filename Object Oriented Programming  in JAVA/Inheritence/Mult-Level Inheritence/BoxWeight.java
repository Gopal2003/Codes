public class BoxWeight extends Box1{
    int weight;

    BoxWeight()
    {
        weight = -1;
    }
    BoxWeight(int weight)
    {
        this.weight = weight;
    }

    BoxWeight(int length,int height,int width,int weight)
    {
        super(length,height,weight);
        this.weight = weight;
    }

    BoxWeight(BoxWeight obj)
    {
        this.weight = obj.weight;
    }
}
