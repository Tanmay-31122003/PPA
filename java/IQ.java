import java.util.*;

class IQ
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the First Number : " );
        int No1 = sobj.nextInt();

        System.out.println("Enter the Second Number : " );
        int No2 = sobj.nextInt();

        int ans = No1 + No2;

        System.out.println("Addition is : "+ans);
        
    }
}