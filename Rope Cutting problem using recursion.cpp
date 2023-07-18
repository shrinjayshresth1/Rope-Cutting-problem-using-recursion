#include <iostream>
#include<algorithm>
using namespace std;
/*Maximum number of cuts in a rope.
input:length of rope(l),three possible rope lengths(after cut){a,b,c}
*/
int max_cut(int n,int a, int b, int c)
{
  if(n==0)
  {
    return 0;
  }
  if(n<0)
  {
    return -1;
  }
  int result=max({max_cut(n-a,a,b,c),max_cut(n-b,a,b,c),max_cut(n-c,a,b,c)});
  if(result==-1)
  {
    return -1;
  }
  else{
    return result+1;
  }
}
int main()
{
 cout<< max_cut(5,5,3,1);
}