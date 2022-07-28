#include<bits/stdc++.h>

#define   ll      long long int
#define   ld      long double
#define   vi      vector<int>
#define   vli     vector<long long>
#define   pb      push_back
#define   mp      make_pair
#define   vpi     vector<pair<int,int> >
#define   pi      pair<int, int>
#define   xx      first
#define   yy      second
#define   mod     1000000007LL
#define   maxn    1000005

using namespace std;

int n,m,rooms;
vector<vector<bool> > vis;
vector<pair<int ,int> >position={{-1,0},{1,0},{0,-1},{0,1}};

bool isvaild(int x,int y)
{
    if(x<0 || x>=n || y<0 || y>=m)
        return false;
    if(vis[x][y])
        return false;
    return true;
}

void dfs(int a,int b)
{
    vis[a][b]=true;
    for(auto p: position){
        if(isvaild(a+p.xx,b+p.yy)){
            dfs(a+p.xx,b+p.yy);
        }
    }

}

void connected()
{
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j]){
                dfs(i,j);
                rooms++;
            }
        }
    }
}

int main()
{
    cin>>n>>m;
    vis.resize(n);

    for(int i=0;i<n;i++)
        vis[i].resize(m);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char c;
            cin>>c;
            if(c=='#')
                vis[i][j]=true;
        }
    }
    connected();
    cout<<rooms<<endl;

    return 0;
}
