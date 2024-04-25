/*
    getClass()
    hashCode()
    equals()
    clone()
    finalize()
*/

class Marvellous
{}

//Class ObjectDemo extends Object
class ObjectDemo
{
    public static void main(String Arg[])
    {
        Object obj = new Marvellous();
        System.out.println(obj.getClass().getName());
    }
}