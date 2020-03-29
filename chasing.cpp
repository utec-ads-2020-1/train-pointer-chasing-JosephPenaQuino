#include "chasing.h"

#define parse_(x) x.erase(remove_if(x.begin(), x.end(), isspace), x.end());
#define correct_syntax(str, m,x,n,y) sscanf(str.c_str(), "%c%d%c%d", &m, &x, &n, &y) != EOF  && str.length() == 4

void chasing(int **A[], int a, int *B[], int b, int C[], int c)
{
	std::string current_string;
	while(getline(std::cin, current_string))
	{
		int correctness = 0;
		char m, n;
		int x, y;
		parse_(current_string);
		if (correct_syntax(current_string, m, x, n, y))
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
	}	
}