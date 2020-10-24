#include <iostream>
using namespace std;
long long int find_max(long long int a[],long long int n)
{
	if(n==1)
	return a[0];
	return max(a[n-1],find_max(a,n-1));
}
int main() {
	long long int n;cin>>n;
	long long int a[n];
	for(long long int i=0;i<n;i++)cin>>a[i];
	int x = find_max(a,n);
	cout<<x;
	return 0;
}
