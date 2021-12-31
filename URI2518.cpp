#include<bits/stdc++.h>
using namespace std;

int main()
{
	int number_of_steps;
	while(cin >> number_of_steps){
		int Hight, Deep, Length;
		cin >> Hight >> Deep >> Length;
		double l = number_of_steps * sqrt(Hight * Hight + Deep * Deep);
		l = (Length * l) / (100.0 * 100.0);
		cout  << fixed << setprecision(4) << l << endl;
	}
	return 0;
}