#include "iostream"
#define int long long
using namespace std;
#define fo(i,x,y) for(int i = x; i < y; i++)
signed main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	int w = 20,l = 20;
	int z = 0;
	fo(i,0,w+1)
	{ 
		fo(j,0,l+1)
		{
			if(i == 0) cout<<"_";
			else if(i == j && i != w/2 && j != w/2) cout<<"\\";
			else if(i == 1 && j == 19) cout<<"/";
			else if(i == 2 && j == 18) cout<<'/';
			else if(i == 3 && j == 17) cout<<'/';
			else if(i == 4 && j == 16) cout<<'/';
			else if(i == 5 && j == 15) cout<<'/';
			else if(i == 6 && j == 14) cout<<'/';
			else if(i == 7 && j == 13) cout<<'/';
			else if(i == 8 && j == 12) cout<<'/';
			else if(i == 9 && j == 11) cout<<'/';
			else if(i == 11 && j == 9) cout<<'/';
			else if(i == 12 && j == 8) cout<<'/';
			else if(i == 13 && j == 7) cout<<'/';
			else if(i == 14 && j == 6) cout<<'/';
			else if(i == 15 && j == 5) cout<<'/';
			else if(i == 16 && j == 4) cout<<'/';
			else if(i == 17 && j == 3) cout<<'/';
			else if(i == 18 && j == 2) cout<<'/';
			else if(i == 19 && j == 1) cout<<'/';
			else if(i == 20 && j == 0) cout<<'/';
			else if(j == 0) cout<<"|";
			else if(i == 20) cout<<"_";
			else if(j == 20) cout<<"|";
			else if(i == 1 && j >= 1 && j <= 19) cout<<"_";
			else if(i == 2 && j >= 2 && j <= 18) cout<<"_";
			else if(i == 3 && j >= 3 && j <= 17) cout<<"_";
			else if(i == 4 && j >= 4 && j <= 16) cout<<"_";
			else if(i == 5 && j >= 5 && j <= 15) cout<<"_";
			else if(i == 6 && j >= 6 && j <= 14) cout<<"_";
			else if(i == 7 && j >= 7 && j <= 13) cout<<"_";
			else if(i == 8 && j >= 8 && j <= 12) cout<<"_";
			else if(i == 9 && j >= 9 && j <= 11) cout<<"_";
			else if(i == 10 && j >= 10 && j <= 10) cout<<"_";
			else if(i == 11 && j <= 10 && j >= 9) cout<<"_";
			else if(i == 12 && j <= 12 && j >= 8) cout<<"_";
			else if(i == 13 && j <= 13 && j >= 7) cout<<"_";
			else if(i == 14 && j <= 14 && j >= 6) cout<<"_";
			else if(i == 15 && j <= 15 && j >= 5) cout<<"_";
			else if(i == 16 && j <= 16 && j >= 4) cout<<"_";
			else if(i == 17 && j <= 17 && j >= 3) cout<<"_";
			else if(i == 18 && j <= 18 && j >= 2) cout<<"_";
			else if(i == 19 && j <= 19 && j >= 1) cout<<"_";
			else if(i == 20 && j <= 20 && j >= 0) cout<<"_";
			else if(i == 10 && j == 10) cout<<" ";
			else if(i >= 2 && j >= 1) cout<<"|";
			else cout<<" ";
	}
	cout<<"\n";
}
}
