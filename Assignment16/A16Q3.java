class Logic
{
    void findFactorial(int n)
    {
        int iCnt = 0 , iFact = 1;
        if(n < 0)
        {
            n = -n;
        }
        for(iCnt = 1 ; iCnt <= n ; iCnt++)
        {
            iFact = iFact * iCnt;
        }
        System.out.println("Factorial of "+ n+" is " + iFact);
    }
}

class A16Q3
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.findFactorial(5);
    }
}