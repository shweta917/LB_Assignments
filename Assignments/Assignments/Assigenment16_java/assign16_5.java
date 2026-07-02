import java.util.Scanner;


class ArrayX
{
    public void DigitSummation(int Arr[])
    {
        int iCnt = 0, iDigit = 0, iSum= 0;


         for (iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum = 0;
           while(Arr[iCnt] != 0)
           {
               iDigit = Arr[iCnt] % 10;
               iSum = iSum + iDigit;
               Arr[iCnt] = Arr[iCnt] / 10;

               if (Arr[iCnt] == 0)
               {
                    System.out.println("The summation of element is : " + iSum);
               }
           }

        }

    }
}
class assign16_5
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

        ArrayX aobj = new ArrayX();
        aobj.DigitSummation(Brr);
    }
}
