#include<iostream>
using namespace std;

int main(){
	int i = 0, sum = 0;
	while(true){
		i+=1;
		if (i == 5)
			continue;
		else if (i > 10)
			break;
		sum+=i;
	}
	cout << sum;
	return 0;
}
