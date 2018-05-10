#include<iostream.h>
int main()
{
	int A[10],n=10;
	for(int i=0;i<n;i++)
		cin>>A[i];
	//Selection sort- Ascending order
	for(int i=0;i<n-1;i++)
	{
		int small=A[i],pos=i;
		for(int j=i+1;i<n;i++)
			if(A[j]<=small)
			{
				small=A[j];
				pos=j;
			}
			int temp=A[i];
			A[i]=A[pos];
			A[pos]=temp;
	}
	return 0;
}
