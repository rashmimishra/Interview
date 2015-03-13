/* This program is written to find all prime factors of a given number n. The approach 
to find the prime factors is to first find all the factors of 2 and then find the factors
of odd prime numbers */

#include<cstdio>
#include<cmath>

void primefactors(int n)
{
	//first we need to find all the factors of 2.
	while (n%2 == 0)
	{
		printf("%d ", 2);
		n = n/2;
	}

	int length = sqrt(n);
	// now we will start prime factors greater than 2 hence starting with 3.
	for (int i =3; i<=length; i= i+2)
	{
		while (n%i == 0)
		{
			printf("%d " ,i);
			n = n/i;
		}
	}

	// last case when n itself in prime number and greater than 2. 

	if(n>2)
	{
		printf("%d ", n);
	}

}


int main()
{
	int n;
	scanf("%d", &n);
	primefactors(n);
	return 0;
}