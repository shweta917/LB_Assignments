import java.util.Scanner;
class ArrayX
{
    public static int CountEven(int Arr[])
    {
        int iCnt = 0, iEven = 0;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) == 0)
            {
                iEven++;
            }
        }
        return iEven;
    }
}
class assign14_1 {
public static void main(String A[]) 
{
    Scanner obj = new Scanner(System.in);
    int iCnt = 0, iSize = 0, iRet;

    System.out.println("Enter the number of elements: ");
    iSize = obj.nextInt();
    int Brr[] = new int[iSize];

    System.out.println("Enter the elements: ");
    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
        Brr[iCnt] = obj.nextInt();
    }

    ArrayX aobj = new ArrayX();
    iRet = aobj.CountEven(Brr);
    System.out.println("Number of even elements: " + iRet);
}
}


