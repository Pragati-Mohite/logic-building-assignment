class Logic
{
    void countDigits(int num)
    {
        int iCount = 0;
        if(num < 0)
        {
            num = -num;
        }
        while(num > 0)
        {
            // iDigit = num % 10;
            iCount++;
            num = num /10;
        }
        System.out.println(iCount);
    }
}

class A16Q5
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.countDigits(7865);
    }
}