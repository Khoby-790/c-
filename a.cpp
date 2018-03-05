#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	system("clear");
	int num,temp,reversed_num = 0,remainder;
	
	cout << "Enter a number :" ;
	cin >> num;
	temp = num;
	while(num != 0){
		remainder = num % 10;
		reversed_num = (reversed_num * 10 ) + remainder;
		num = num/10; 
	}
	cout << "the number "<< temp << " has been reversed to " << reversed_num << endl;
	return 0;
}