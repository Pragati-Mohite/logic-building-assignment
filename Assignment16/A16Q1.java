class Logic
{
    void calculateSum(int n)
    {
        int iCnt = 0 , iSum = 0;

        if(n < 0)
        {
            n = -n;
        }
        for(iCnt = 0 ; iCnt <= n ; iCnt++)
        {
            iSum = iSum + iCnt;
        }
        System.out.println("Addition of first N natural numbers is : "+iSum);
    }
}

class Program
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.calculateSum(10);
    }
}