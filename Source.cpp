#include <iostream>
#include <array>
#include <iomanip>
using namespace std;
int main() 
{
array<int,11>n={1,2,3,4,5,6,7,8,9,101};
array<int,6>m={-30,6,9,45,100};
array<int,15>npm;
int in(0), im(0), ip(0);

do
	{
        if(in>=10) // finished scanning of array n, take the next from m
        {
            npm[ip]=m[im++];
        }
        else if(im>=5)  // finished scanning of array m, take the next from n
        {
            npm[ip]=n[in++];
        }
		else if(n[in]<m[im])  // take the biggest number from n or m
		{
			npm[ip]=n[in++];
		}
		else
		{
			npm[ip]=m[im++];
		}
	ip++;
	}
while(ip<15);
    
for(int c=0;c<15;c++)
	{
		cout<<npm[c]<<" "/*endl*/;    // display
	}
return 0;
}