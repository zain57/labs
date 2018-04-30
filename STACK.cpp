#include <iostream>

using namespace std;
	int A[50];
	int top=-1;
    //int c=0;

void push(int n)
{
	if(top<50)
	{
		cout<<"PUSH : "<<n<<endl;
	
		A[++top]=n;
		
	}
}
void pop()
{
	if(top>-1)
	{
		cout<<"POP :"<<A[top]<<endl;
		A[top]=0;
		top--;
	}
}
void display()
{
	//int k=0;
	

	for( int k=0; k<=top;k++)
	{
		cout<<" "<<A[k];
	
		
	}
}
int main() {
	int n=0;
	int b=0;
	int y=0;
	for(int o=0;o<50;o++)
	{
	
	cout<<"\n 1.PUSH \n 2.POP \n 3.display";
	cin>>y;
	switch(y)
	{
	
	case 1:
		cout<<"HOW MANY VALUES YOU WANT TO ENTER";
	cin>>b;
	
      for(int l=0;l<b;l++)
      {
		cout<<"ENTER NUMBER TO PUSH : ";
	
	cin>>n;
	
    push(n);
	   }
    
		break;
		
	case 2:
		pop();
		break;
	case 3:
		display();
		break;
}
}
	return 0;
}
