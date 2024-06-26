import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.File;

public class Filee
{
    public static void main(String[] args)
    {
        // try(FileReader fr = new FileReader("File.txt"))
        // {
        //     int letters = fr.read();
        //     while(fr.ready())
        //     {
        //         System.out.println((char)letters);
        //         letters = fr.read();
        //     }
        //     System.out.println();
        // }
        // catch(IOException e)
        // {
        //     System.out.println(e.getMessage());
        // }

        try(FileWriter fr = new FileWriter("newFile.txt",true))
        {
            fr.write("Gopal Agarwal");

            // fr.append('a');
            // fr.append('p');
            // fr.append('p');
            // fr.append('l');
            // fr.append('e');

            // fr.write("This is test");

        }
        catch(IOException e)
        {
            System.out.println(e.getMessage());
        }


        //To create a file, use File class . createNewFile method.
        try{
            File fo = new File("New-File.txt");
            fo.createNewFile();
        }
        catch(IOException e)
        {
            e.getMessage();
        }
    }
}