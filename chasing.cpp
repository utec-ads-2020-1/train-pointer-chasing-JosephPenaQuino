#include "chasing.h"

void chasing(int **A[], int a, int *B[], int b, int C[], int c)
{
	std::string current_string;
	current_string.clear();
	while(getline(std::cin, current_string))
	{
		int correctness = 0;
		char m=10, n=10;
		int x=10, y=10;
		current_string.erase(remove_if(current_string.begin(), current_string.end(), isspace), current_string.end());
		if (sscanf(current_string.c_str(), "%c%d%c%d", &m, &x, &n, &y) != EOF  && current_string.length() == 4)
		{
			if (m == 'A' && n == 'B' && x < a && y < b)
			{
				A[x] = B+y;
				correctness=1;
			}
			else if (m == 'B' && n =='C' && x < b && y < c)
			{
				B[x] = C+y;
				correctness=1;
			}
		}
		
		std::cout << correctness << std::endl;
		current_string.clear();
	}	
}