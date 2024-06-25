import java.io.IOException;
import java.io.InputStreamReader;

public class InputStream {
    public static void main(String[] args) {
        try(InputStreamReader Isr = new InputStreamReader(System.in))
        {
            System.out.println("Enter some letters");
            int letters = Isr.read();
            while(Isr.ready())
            {
                System.out.println((char)letters);
                letters = Isr.read();
            }
        }
        catch(IOException e)
        {
            System.out.println(e.getMessage());
        }
    }
}
