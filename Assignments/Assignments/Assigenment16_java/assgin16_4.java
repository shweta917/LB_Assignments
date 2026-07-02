import java.util.Scanner;


class ArrayX16_4
{
    public void DigitX(int Arr[])
    {
        int iCnt = 0, iValue = 0, iSize = 0;


         for (iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSize = 0;
            iValue = Arr[iCnt];
           while(iValue != 0)
           {
               iValue = iValue / 10;
               iSize++;
               if (iValue == 0 && iSize == 3) 
               {
                    System.out.println("The element is : " + Arr[iCnt]);
               }
           }

        }

    }
}
class assgin16_4
{

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt = 0;

        System.out.println("Enter the number of elements : ");
        int iLength = sobj.nextInt();

        int Brr[] = new int[iLength];

        System.out.println("Enter the elements : ");
        for (iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            Brr[iCnt] = sobj.nextInt();
        }

        ArrayX16_4 aobj = new ArrayX16_4();
        aobj.DigitX(Brr);
    }
}
