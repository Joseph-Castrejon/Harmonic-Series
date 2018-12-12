#include<math.h>
#include<iostream>
#include<cstring>
#include<stdlib.h>

using namespace std;

double HarmonicSeries(long int n);

int main(int argc, char *argv[])
{
	long int n;

	if(argc == 2)
	{
		cout << "Harmonic Series Calculator by JC" << endl;
		cout << "Calculating for " << atoi(argv[1]) << " terms" <<  endl;
		HarmonicSeries(atol(argv[1]));	
		return 0; 
	}
	


			
	cout << "--------------------------------" << endl;
	cout << "|   Harmonic Series Calculator |" << endl;
	cout << "--------------------------------" << endl;
	cout << "Enter N: ";	
	cin >> n;

	HarmonicSeries(n);
	
	return 0;
}

double HarmonicSeries(long int n)
{
	long int i;
	double sum = 0;	
	for(i = 1; i <= n; i++)
	{
		if(i == (n / 4) ){
			cout << "25\% Finished" << endl;
		}
		else if(i == (n/2))
		{
			cout << "50\% Finished" << endl;
		}
		else if(i == (n * 3/4)){
			cout << "75\% Finished" << endl;
		}
		sum = sum + (1.0 / i);
	}
	
	cout << "Harmonic Series for N = " << n << endl;
	cout << "Result: " << sum << endl; 	
};

