#include<iostream>
#define SIZE 4
using namespace std;
class que
{
    private:
        int front,rear,Q[10];;
    public:
        que()
        {
            front=-1;
            rear=-1;
        }
    void enqueue(int x)
    {
        if(rear<SIZE-1)
        {
            Q[++rear]=x;
            if(front==-1)
            {
                front++;
            }

        }
        else
            cout<<"overflow";
    }
    int dequeue()
    {
        if(front!=-1)
        {
            int x=Q[front];
            if(front==rear)
                front=rear=-1;
        }
        else
        
            cout<<"underflow";
            return -1;
        
    }
    int isEmpty()
    {
        if(rear==-1)
            return 1;
        else
            return 0;
    }
};
class graph
{
    int adj[SIZE][SIZE];
    int processed[SIZE];
    int inqueue[SIZE];
    que q;
    public:
        graph()
        {
            for(int i=0;i<SIZE;i++)
            {
             processed[SIZE]=0;
             inqueue[SIZE]=0;}
        }
    void input()
    {
        cout<<"enter"<<SIZE*SIZE<<"elements \n";
        for(int i=0;i<SIZE;i++)
            for(int j=0;j<SIZE;j++)
            cin>>adj[i][j];
    }
    void bfs()
    {
        int vertex;
        cout<<"breath first traversal of the graph is \n";
        for(int i=0;i<SIZE;i++)
        {
            cout<<i<<" ";
            if(processed[i]==0)
            {
                if(inqueue[i]==0)
                {
                    q.enqueue(i);
                    inqueue[i]=1;
                }
            }
            while(!q.isEmpty())
            {
                vertex=q.dequeue();
                if(vertex==-1)
			{
			cout<<"error\n";
			return;
			}
			processed[vertex]=1;
			cout<<vertex<<"\t";
			for(int j=0;j<SIZE;j++)
			{
				if(adj[i][j]==1)
				{
				if(processed[j]==0 && inqueue[j]==0)
				{
					q.enqueue(j);
					inqueue[j]=1;
				}
				}
			}
		}
	}
	for(int k=0;k<SIZE;k++)
	{
		processed[k]=0;
		inqueue[k]=0;
		}
	}
	};

int main()
	{
	graph g;
	cout<<"enter the adjacency matrix:";
	g.input();
	g.bfs();
	return 0;
}
            
        

