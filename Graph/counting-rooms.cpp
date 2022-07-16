
/*You are given a map of a building, and your task is to count the number of its rooms.
The size of the map is n×m squares, and each square is either floor or wall.
You can walk left, right, up, and down through the floor squares.

Input:
5 8
########
#..#...#
####.#.#
#..#...#
########

Output:
3
*/

#include<bits/stdc++.h>
using namespace std;

int n,m;

vector<vector<int>> vis;
vector<pair<int,int>> position={{-1,0},{1,0},{0,1},{0,-1}};



int main(){
    cin>>n>>m;
    vis.resize(n);

    for(int i=0;i<n;i++){
        vis[i].resize(m);
    }


    
}
