import java.util.Scanner;


class ArrayX16_1
{
    public  int Summation(int Arr[])
    {
        int iCnt = 0, iEvenSum = 0, iOddSum = 0;

         for (iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if ((Arr[iCnt] % 2) == 0)
            {
                iEvenSum = iEvenSum + Arr[iCnt];
            }
            else
            {
                iOddSum = iOddSum + Arr[iCnt];
            }
        }
        return (iEvenSum - iOddSum);
        
    }
}
class assign16_1
{

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt = 0, iRet = 0;

        System.out.println("Enter the number of elements : ");
        int iLength = sobj.nextInt();

        int Brr[] = new int[iLength];

        System.out.println("Enter the elements : ");
        for (iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            Brr[iCnt] = sobj.nextInt();
        }

        ArrayX16_1 aobj = new ArrayX16_1();
        iRet = aobj.Summation(Brr);
       System.out.println("Diff between summation of even and odd numbers: " + iRet);
    }

}
