#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isSafe(int x,int y,int n,vector<vector<int>> visited,vector<vector<int>> &m)
{
    if((x>=0&& x<n) &&(y>=0&&y<n)&&visited[x][y]==0&&m[x][y]==1)
    return true;
    else
    return false;
}
void solve(vector<vector<int>> &m,int n,vector<string> &ans,vector<vector<int>> visited,string temp,int x,int y)
{
    //cout<<"In solve: "<<endl;
    if(x==n-1&& y==n-1)
    {
        ans.push_back(temp);
        return;
    }
    visited[x][y]=1;

    if(isSafe(x+1,y,n,visited,m))
    {
        temp.push_back('D');
        solve(m,n,ans,visited,temp,x+1, y);
        temp.pop_back();
    }
    if(isSafe(x-1,y,n,visited,m))
    {
        temp.push_back('U');
        solve(m,n,ans,visited,temp,x-1, y);
        temp.pop_back();}
    if(isSafe(x,y+1,n,visited,m))
    {
        temp.push_back('R');
        solve(m,n,ans,visited,temp,x, y+1);
        temp.pop_back();}
    if(isSafe(x,y-1,n,visited,m))
    {
        temp.push_back('L');
        solve(m,n,ans,visited,temp,x, y-1);
        temp.pop_back();
        }
    

}
vector<string> findPath(vector<vector<int>> &m,int n)
{
    cout<<"in find path"<<endl;
  
    vector<string> ans;
    if(m[0][0]==0)
    return ans;
    
    vector<vector<int>> visited=m;
    string temp="";
    int srcx=0,srcy=0;
    cout<<"hello";
    for(int i=0;i<n;i++)
    {
        cout<<"hello";
        for(int j=0;j<n;j++)
        {
            cout<<"hello";
            visited[i][j]=0;
        }

    }
    cout<<"hello";
    solve(m,n,ans,visited,temp,srcx,srcy);
    sort(ans.begin(),ans.end());
    return ans;


}

int main()
{
    vector<vector<int>> maze={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    vector<string> ans;
    ans=findPath(maze,maze.size());
    for(string i:ans)
    cout<<" "<<i;
    return 0;
}