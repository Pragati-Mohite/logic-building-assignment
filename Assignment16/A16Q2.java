
class Logic
{
    void checkEvenOdd(int n)
    {
        if(n < 0)
        {
            n = -n;
        }
        if(n % 2 == 0)
        {
            System.out.println(n+" is even number");
        }
        else
        {
            System.out.println(n+"is odd number");
        }
    }
}

class A16Q2
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.checkEvenOdd(10);
    }
}