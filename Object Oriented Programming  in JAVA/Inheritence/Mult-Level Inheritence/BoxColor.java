public class BoxColor extends BoxWeight {
    String color;

    BoxColor(String color)
    {
        this.color = color;
    }

    BoxColor(int length,int height,int width,int weight,String color)
    {
        super(length,height,width,weight);
        this.color = color;
    }
    BoxColor(BoxWeight obj)
    {
        super(obj);
    }
}
