package palindrome;
import java.util.ArrayList; 

public class solution {
	   public boolean isPalindrome(int x) {
			ArrayList array=new ArrayList();
			int count = 0;
			int y = x;
			int z = x;

			if (x < 0)
				return false;
			while (y!=0)
			{
				y =y/ 10;
				count++;
			}

			System.out.println(count);
			int count1 = count;

			for (int i = 0; i < count; i++)
			{
				y = z % 10;
				z = z / 10;
				array.add(y);
			}


			for (int i = 0; i < array.size()/2; i++)
			{
				if (array.get(i) == array.get(count1-1))
				{
					count1--;
				}
				else
				{
					System.out.println("false");
					return false;
				}
			}
			System.out.println("true");
			return true;
	    }
}
