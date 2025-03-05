// C++ program to find parity of an integer

# include<bits/stdc++.h>
# define bool int
using namespace std;


bool getParity(unsigned int n)
{
	bool parity = 0;
	while (n)
	{
		parity = !parity;
		n	 = n & (n - 1);
	}	 
	return parity;
}

//Driver code
int main()
{
	unsigned int n = 7;
	cout<<"Parity of no "<<n<<" = "<<(getParity(n)? "odd": "even");
	
	getchar();
	return 0;
}
