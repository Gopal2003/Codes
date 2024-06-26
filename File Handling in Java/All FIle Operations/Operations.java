import java.io.BufferedWriter;
import java.io.File;
import java.io.IOException;
import java.io.FileWriter;
import java.io.FileReader;
import java.io.BufferedReader;

public class Operations {
    public static void main(String[] args) {

        // * Creating a File.
        try {
            File fo = new File("Package.txt");
            fo.createNewFile();
        } catch (IOException e) {
            System.out.println(e.getMessage());
        }

        // * Write In a FIle.
        /*
         * try(FileWriter fw = new FileWriter("Package.txt",true))
         * {
         * fw.write("Hello");
         * fw.write(" My Name is Gopal");
         * }
         * catch(IOException e)
         * {
         * System.out.println(e.getMessage());
         * }
         */
        // * Another way to write in a fine which is the fast and efficient way.

        try (BufferedWriter bw = new BufferedWriter(new FileWriter("Package.txt", true))) {
            bw.write(" Hello this is written using BufferWriter Class!!!");
        } catch (IOException e) {
            System.out.println(e.getMessage());
        }

        // * Read From File

        /*
         * try(FileReader fr = new FileReader("Package.txt"))
         * {
         * int letters = fr.read();
         * 
         * while(fr.ready())
         * {
         * System.out.print((char)letters);
         * letters = fr.read();
         * }
         * }
         * catch(IOException e)
         * {
         * System.out.println(e.getMessage());
         * }
         */

        // * Efficient Way to read from file.

        try (BufferedReader br = new BufferedReader(new FileReader("Package.txt"))) {
            System.out.println(br.readLine());
        } catch (IOException e) {
            System.out.println(e.getMessage());
        }

        // * File delete

        File fd = new File("Package.txt");
        fd.delete();

    }
}
