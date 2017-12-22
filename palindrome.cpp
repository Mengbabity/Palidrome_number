# Palidrome_number
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	bool isPalindrome(int x) {
		vector<int> array;
		int count = 0;
		int y = x;
		int z = x;

		if (x < 0)
			return false;
		while (y)   //the number of the figure
		{
			y =y/ 10;
			count++;
		}

		cout << count << endl;
		int count1 = count;

		for (int i = 0; i < count; i++)   //put the number into the vector one by one
		{
			y = z % 10;
			z = z / 10;
			array.push_back(y);   
		}


		for (int i = 0; i < array.size()/2; i++)   //compare the first and the last,then the second and the last-1
		{
			if (array[i] == array[count1-1])
			{
				count1--;
			}
			else
			{
				cout << "false" << endl;
				return false;
			}
		}
		cout << "true" << endl;
		return true;

	}
};

void main()
{
	Solution s;
	s.isPalindrome(1232145);
}
