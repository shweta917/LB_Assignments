import java.util.Scanner;


class ArrayX16_2
{
    public int MinNumber(int Arr[])
    {
        int iCnt = 0, iMin = 0, iMax = 0;

        iMin = Arr[0];

         for (iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if (Arr[iCnt] < iMin)
            {
                iMin = Arr[iCnt];
            }
        }
        return iMin;

    }
}
class assign16_2
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

        ArrayX16_2 aobj = new ArrayX16_2();
        iRet = aobj.MinNumber(Brr);
        System.out.println("Smallest number is: " + iRet);
    }

}
