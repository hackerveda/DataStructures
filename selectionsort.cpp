#include<iostream>
using namespace std;
class selectionsort
{
    int a[10],size,min,i,j;
    public:
    selectionsort()
    {
        cout<<"enter size \n";
        cin>>size;
        cout<<"enter elements \n";
        for(i=0;i<size;i++)
            cin>>a[i];
        
    }
    void sorting();
    void swapping();
    void display();
    
};
void selectionsort::sorting()
{
    for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {
            if(a[j]<a[min])
                min=j;
        }
        swap(a[i],a[min]);
    }
    
    
}
/*void selectionsort::swapping(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}*/
void selectionsort::display()
{
    cout<<"sorted list is \n";
    for(i=0;i<size;i++)
        cout<<a[i]<<"\t";
}
int main()
{
    selectionsort s;
    s.sorting();
    //s.swapping();
    s.display();
    
}