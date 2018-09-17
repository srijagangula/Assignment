#include<iostream>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
using namespace std;
main()
{
int num,guessnum,guess=0;
pid_t getpid();
char ch;
do {
	srand(getpid());
	num=rand()%1000;
	guess++;
while(1)
{
	cout<<"guess the number less than 1000"<<endl;
	cin>>guessnum;
	guess++;
	if(guessnum>num)
		cout<<"Too High!!!"<<endl;
	else if(guessnum<num) 
		cout<<"Too Low!!!"<<endl;
	else
	{
		cout<<"Wow you have guessed the right number"<<endl;
		cout<<"you took"<<guess<<"guess!!!"<<endl;
		break;
	}
}
	cout<<"Enter s to play once again"<<endl;
	cin>>ch;
}
while(ch=='s'||ch=='S');

}
