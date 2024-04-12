class ArrayDemoLoops
{
    public static void main(String Arg[])
    {
        // int Arr[] = {10,20,30,40,50};

        int Arr[] = {10,20,30,40,50};
        int i = 0;

        System.out.println("Number of elements in array are : "+Arr.length);

        for(i = 0; i<Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }

        i = 0;
        while(i<Arr.length)
        {
            System.out.println(Arr[i]);
            i++;
        }   
    }
}