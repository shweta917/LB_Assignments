import java.util.Scanner;

class ArrayX
{
    public static boolean CheckNumber(int Arr[])
    {
        int iCnt = 0, iEven = 0, iOdd = 0, iDiff = 0;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] == 11 ))
            {
                break;
            }
        }

        if (iCnt == Arr.length)
        {
            return false;
        }
        else
        {
            return true;
 
        }
}
}

class assign14_3 {
public static void main(String A[]) 
{
    Scanner obj = new Scanner(System.in);
    int iCnt = 0, iSize = 0;
    boolean bRet;

    System.out.println("Enter the number of elements: ");
    iSize = obj.nextInt();
    int Brr[] = new int[iSize];

    System.out.println("Enter the elements: ");
    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
        Brr[iCnt] = obj.nextInt();
    }

    ArrayX aobj = new ArrayX();
    bRet = aobj.CheckNumber(Brr);
    if (bRet == true)
    {
        System.out.println("Number 11 is present.");
    }
    else
    {
        System.out.println("Number 11 is not present.");
    }
}
}






