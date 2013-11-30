#include <iostream>
#include <memory>
#include <stdio.h>
#include <cstring>
#include <string>
using namespace std;
int test(int n)
{
char * p(new char[13]);
n = 12-n;
strcpy(p,"hello world!");
string s(p+n);
*(p+n) = '\0';
string t(p);
cout<<s<<t<<endl;
return 0;
}//没有delete操作，观察执行100000次的结果
int main()
{
for (int i=0;i<100000;i++)
{
test(1);
}
return 0;
}