#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float x;
	int re;
do{
	re=1;
	cin>>x;	
	
	if (x!=1 && x!=2)
	{
		cout <<"bn"<< endl;
	}else{
		cout <<"mal"<< endl;
	}
}while(re==1);
	return 0;
}

