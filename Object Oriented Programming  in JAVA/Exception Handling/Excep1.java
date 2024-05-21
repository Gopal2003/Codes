public class Excep1{
    public static void main(String[] args) {
        int a = 5;
        int b = 1;
        try{
            String name = "Gopal";
            // int c = divide(a, b);
            // throw new Exception("Just for fun"); // Example to execute the Exeception e catch block.
            if(name.equals("Gopal"))
            {
                throw new MyException("The name is gopal");
            }
        }
        catch(MyException e)
        {
            System.out.println(e.getMessage());
        }
        catch(ArithmeticException e)
        {
            System.out.println(e.getMessage());
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
        // catch(ArithmeticException e) //! Error- Unreachable catch block for ArithmeticException. It is already handled by the catch block for ArithmeticException
        // {
        //     System.out.println(e.getMessage());
        // }
        finally{
            System.out.println("This will always execute");
        }
    }

   static int divide(int a,int b) throws ArithmeticException //! It is used for declaration. It tells that hey, this function may throws exeception.
   {
        if (b == 0) {
            throw new ArithmeticException("Please Don't divide with zero"); //! Used to actually throw exeception.
        }

        return a/b;
        
    }
   
}