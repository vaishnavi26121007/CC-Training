import java.util.*;

public class Palindrome 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();

        String temp = s;

        char arr[] = s.toCharArray();

        int i = 0;
        int j = s.length() - 1;

        while(i < j)
        {
            char temp1 = arr[i];
            arr[i] = arr[j];
            arr[j] = temp1;

            i++;
            j--;
        }

        String ans = new String(arr);

        if(temp.equals(ans))
            System.out.println("yes");
        else
            System.out.println("No");

        sc.close();
    }
}
