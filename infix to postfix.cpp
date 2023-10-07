#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int prec(char x){
    if(x=='+' || x=='-')
        return 1;
    else if(x=='/' || x=='*')
        return 2;
    else 
        return -1;
}

class list{
        char s[20];
        int top;
        string input;
    public:
        list(){
            cout<<"Enter expression\n";
            cin>>input;
            top=-1;
        }
        void push(char x){
            top++;
            s[top]=x;
        }
        char pop(){
            char x=s[top];
            top--;
            return x;
        }
        int isempty(){
            if(top==-1)
                return 1;
            else    
                return 0;
        }
        char stacktop(){
            if(!isempty())
                 return s[top];
            else
                return '\0';    
        }
        void display(){
            if(top==-1){cout<<"underflow\n\n";}
            else{
                for(int i=0;i<=top;i++){
                    cout<<s[i]<<" ";
                }
            }
        }
        void convert(){
            cout<<"\n======================\n";
            int i=0;
            string out;
            char x;
            while(input[i]!='\0'){
                x=input[i];
                if(isalpha(x)){
                   out+=x;
                }
                else if(x=='('){
                    push(x);
                }
                else if(x==')'){
                    while(stacktop()!='('){
                       out+=pop();
                    }
                    pop();
                }
                else{
                    while(!isempty() && prec(x)<=prec(stacktop())){
                        out+=pop();
                    }
                    push(x);
                }
                i++;
            }
            while(!isempty()){
                out+=pop();
            }
            cout<<endl;
            cout<<out;
        }
};

int main(){
    list s;
    s.convert();
}