#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		//�ո񲿷�
		for(int k=1;k<=n-i;k++)	
		{
			cout<<" ";
		}
		//�ַ�����
		char a,b;
		a='A';
		b='A'+i-2;
		for(int k=1;k<=i;k++)
		{
			cout<<a;
			a++;
		} 
		for(int j=0;j<i-1;j++)
		{
			cout<<b;
			b--;
		}
		cout<<endl;
	}
	return 0;
}
