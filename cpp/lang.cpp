#include<iostream>
#include<locale>
using namespace std;
main ()
{
setlocale(LC_CTYPE,"");
wchar_t ch;
for(ch=9812;ch<=9823;ch++)
wcout<<ch<<" ";
cout<<endl;
}
