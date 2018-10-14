ostream>
using namespace std;
void a_insert(int,int);
void a_delete(int);
void a_location(double);
void a_traverse();
int arr[10], n;

void a_insert(int num, int pos)
 {
 for(int i=n-1; i>=pos;i--)
 {
 arr[i+1]=arr[i];
}
 arr[pos]=num;
 n++;
 }
void a_delete(int pos)
 {
 	int  num=arr[num];
 for(int i=pos; i<=n;i++){
 {
 
 arr[i]=arr[i+1];
}
 n--;
 }
}
void a_traverse()
{ int i;
cout<<"array is:"<<endl;
for(i=0;i<n;i++)
cout<<arr[i]<<endl;

}
void a_location(double element)
{
cin>>element;
int Index;
for (int i=0;i<5; i++)
{
 if (element == arr[i])
 {
 Index = i;
 }
cout<<Index;
}}
int main()
{
int k;
cout<<"enter length";
cin>>n;
cout<<"array is:";
for(k=0;k<n;k++)
{cin>>arr[k];
}
int ch;
int num,pos;
double element;
while(ch!=5)
 {
 cout<<"1> Insert";
 cout<<"\n2> Delete";
cout<<"\n3> location";
 cout<<"\n4> Show";
 cout<<"\n5> Quit\n";
 cin>>ch;
switch(ch)
{
case 1:
cout<<"enter element:";
cin>>num;


cout<<"enter pos.:";
cin>>pos;
a_insert(num,pos);
break;
case 2:
cout<<"enter pos.:";
cin>>pos;
a_delete(pos);
break;
case 3:
cout<<"enter element";
a_location(element);
break;
case 4:
cout<<"\nArray:";
a_traverse();
break;
case 5:
break;
default:
cout << "Invalid input" << endl;
}
}

 }
