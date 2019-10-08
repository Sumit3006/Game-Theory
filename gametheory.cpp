#include<iostream>
using namespace std;
int main()
{
	struct payoffs
	{ int x,y;
	}s[10][10];
	int a,b,c;
	cout<<"hi i m Z.A.R.V.I.S :)";
	cout<<"\ndo u want to minimise or maximise payoffs?";
	cin>>c;
	if(c==1)
	{
		cout<<"enter payoffs of strategys:";
		cout<<"\n****************************you play strategy 1***************************************";
		cout<<"\nif your partner play strategy 1 then,";
		cout<<"\nyour payoff for strategy 1:";
	cin>>s[0][0].x;
	cout<<"your partners payoff for startegy 1:";
	cin>>s[0][0].y;
	cout<<"\nwhen your partner play strategy 2";
		cout<<"\nyour payoff for strategy 1 :";
	cin>>s[0][1].x;
	cout<<"your partners payoffs:";
	cin>>s[0][1].y;
	cout<<"\n***************************** now u choose strategy 2:**********************************";
	cout<<"\n if your partner choose startegy 1";
	cout<<"\nyours payoffs:";
	cin>>s[1][0].x;
	cout<<"yours partner's payoffs:";
	cin>>s[1][0].y;
	cout<<"\nnow if your partner choose startegy 2:";
    cout<<"\nyour payoffs:";
	cin>>s[1][1].x;
	cout<<"yours partner payoffs:";
	cin>>s[1][1].y;
	}
    a=s[0][0].x-s[0][1].x;
    b=s[1][0].x-s[1][1].x;
    if(a>b)
   {
	 cout<<"      strategy 1 dominant";
	 cout<<"\N      YOU SHOULD CHOOSE STRATEGY 1 ";
   }
    else
    {
	cout<<"      strategy 2 dominant";
	cout<<"\n      YOU SHOULD CHOOSE STRATEGY 2";
}
	
}
