class Logic
{
    void findFactorial(int n)
    {
        int iDigit = 0;
        if(n < 0)
        {
            n = -n;
        }
        while(n > 0)
        {
            iDigit = n % 10;
            System.out.println(iDigit);
            n = n /10;
        }
    }
}

class A16Q4
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.findFactorial(1234);
    }
}