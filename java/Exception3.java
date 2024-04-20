import java.util.*;

class Exception3
{
    public static void main(String[] args) 
    {
        try
        {
            System.out.println("Try block");
            Scanner sobj = new Scanner(System.in);
            int Arr[] = {10,20,30,40,50};

            System.out.println("Enter the index number : ");
            int i = sobj.nextInt();

            System.out.println(Arr[i]);

            System.out.println("End of code");
        }
        catch(ArrayIndexOutOfBoundsException obj)
        {
            System.out.println("Inside Catch Block");
        }
        finally
        {
            System.out.println("Inside Finally Block");
        }
        System.out.println("End of code");
    }
}