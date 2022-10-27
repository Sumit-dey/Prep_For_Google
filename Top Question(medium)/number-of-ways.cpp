using namespace std;
int factorial(int num){
  int res=1;
  for(int i=2;i<=num;i++){
    res=res*i;
  }
  return res;
}
int numberOfWaysToTraverseGraph(int width, int height) {
  int n=width-1;
  int m=height-1;
  int ans=(factorial(n+m)/(factorial(n)*factorial(m)));
  return ans;
}
