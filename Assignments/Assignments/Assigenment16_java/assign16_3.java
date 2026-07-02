import java.util.Scanner;


class ArrayX16_3
{
    public int Diff(int Arr[])
    {
        int iCnt = 0, iMin = 0, iMax = 0;

        iMin = Arr[0];
        iMax = Arr[0];

         for (iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if (Arr[iCnt] < iMin)
            {
                iMin = Arr[iCnt];
            }
            else if (Arr[iCnt] > iMax)
            {
                iMax = Arr[iCnt];
            }
        }
        return iMax - iMin;

    }
}
class assign16_3
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

        ArrayX16_3 aobj = new ArrayX16_3();
        iRet = aobj.Diff(Brr);
        System.out.println("Difference between maximum and minimum is: " + iRet);
    }

}
