#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
class p
{
    public:
    int b,c,tat,wt,in,pr;
};
bool comp(p a,p b)
{
    if(a.pr==b.pr){
        return a.b<b.b;
    }
    return a.pr<b.pr;
}
int main()
{
    vector<p>q;
    int n;
    cout<<"Enter the no of process"<<endl;
    cin>>n;
    cout<<"Enter the  priority and burst time of process"<<endl;
    for (int i = 0; i < n; i++)
    {
        int b,pr;
        p process;
        cin>>pr>>b;
        process.b=b;
        process.pr=pr;
        process.in=i+1;
        q.push_back(process);
    }

    sort(q.begin(),q.end(),comp);

    int tt=0;
    for (int i = 0; i < n; i++)
    {
            q[i].c=tt+q[i].b;
            tt=q[i].c;
    }
    for (int i = 0; i < n; i++)
    {
        q[i].tat=q[i].c;
        q[i].wt=q[i].tat-q[i].b;

    }
    cout<<"pro  "<<"bt  "<<"pr  "<<"ct  "<<"wt  "<<"tat "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<q[i].in<<"    "<<q[i].b<<"    "<<q[i].pr<<"   "<<q[i].c<<"    "<<q[i].wt<<"   "<<q[i].tat <<endl;
    }
    
    
}