#include <iostream>
using namespace std;
//1. Creating make file
//2. Swap the value in the array using pointers** to help
//3. Take input from argv


int main(int argc, char **argv){
 int i,N,*a,n,*p;
			N=argc-1;
 		     a=new int[N];
			for(i=0;i<N;i++) {
			    a[i]=atoi(argv[i+1]);
		         cout<< "a[" << i << "]=" <<a[i]<<endl;
		}
  int *pa = &a[0]; 
  int *pb = &a[N-1];
  cout<<"Reverse: ";
  for(i=0; i<N/2; i++, pa++,pb--)
    {
      int temp=*pa;
      *pa=*pb;
      *pb=temp;
    }
    pa=&a[0];
    for(i=0; i<N; i++)
    {
        cout<<a[i]<<" ";
    }
}
   