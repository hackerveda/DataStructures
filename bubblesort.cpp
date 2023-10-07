#include<iostream>
using namespace std;
class sorting
{
    private:
        int list[10],current,walker,last,size;
        bool sorted;
    public:
        sorting()
        {
            cout<<"enter size \n";
            cin>>size;
            current=0;
            sorted=false;
            last=size-1;
            cout<<"enter elemnts ";
            for(int i=0;i<size;i++)
            {
                
                cin>>list[i];
            }
        }
    void bubble()
    {
        while(current<=last && sorted==false)
        {
            walker=last;
            sorted=true;
            while(walker>current)
            {
                if(list[walker]<list[walker-1])
                {
                    sorted=false;
                    swap(list[walker],list[walker-1]);
                    cout<<"status after pass "<<current;
                    display();
                }
                walker--;
            }
        }
        
    }
    void display()
    {
        for(int i=0;i<size;i++)
        {
            cout<<list[i]<<"\t";
        }
        cout<<endl;
    }
};
int main()
{
    sorting s;
    s.bubble();
    cout<<"after sorting \n";
    s.display();
    return 0;
}