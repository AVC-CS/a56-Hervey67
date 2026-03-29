
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i<=N - 1; i++){
    	for (int j = N - 1 - i; j<N - 1; j++){
      	cout << i << "," << j << " ";
    	}
    	cout << endl;
  	}

	// TODO
}
