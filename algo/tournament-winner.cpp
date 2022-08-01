#include <vector>
using namespace std;
void update(string winner, int p,unordered_map<string,int> &m );

string tournamentWinner(vector<vector<string>> competitions,
                        vector<int> results) {

  string ans="";
  unordered_map<string,int> m={{ans,0}};

  for(int i=0;i<competitions.size();i++){
    string home=competitions[i][0];
    string away=competitions[i][1];
    string winner="";
    if(results[i]==1)winner=home;
    else winner=away;

    update(winner,3,m);

    if(m[winner]>m[ans])ans=winner;
  }
  return ans;

}

void update(string winner, int p,unordered_map<string,int> &m ){
  if(m.find(winner)==m.end())m[winner]=p;
  else m[winner]+=p;
}
