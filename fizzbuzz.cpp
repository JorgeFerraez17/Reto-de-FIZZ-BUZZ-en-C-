#include<iostream>
#include<conio.h>
using namespace std;



int main (){
	
	int a = 0,b,c,z;
	
for(int i=0; i<=100; i++){
	
	a=i;
	b=a%3;
	c=a%5;
	z=b+c;
	
	
	if (z==0){
			cout<<i<<" FIZZBUZZ"<<endl;
	}

	
    else if(b==0){
	
		cout<<i<<" FIZZ"<<endl;
	}
	
	else if (c==0)
	{
		cout<<i<<" BUZZ"<<endl;
	}
	
else{
	cout<<i<<endl;
}

}
	


return 0;
}
