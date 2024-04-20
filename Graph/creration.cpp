#include<bits/stdc++.h>
using namespace std;
void printgrap(vector<vector<int>> &edgeMat){
    for(int i=0;i<edgeMat.size();i++){
        for(int j=0;j<edgeMat.size();j++){
            if(edgeMat[i][j]!=0){
                cout<<i<<" -"<<j<<endl;
            }
        }
    }
}
int main(){
    int nodec;
    int edgec;
    cin>>nodec>>edgec;
    //taking edge in matrix of nodec*nodec
    vector<vector<int>> edgeMat(nodec+1,vector<int>(nodec+1));
    for(int i=1;i<=edgec;i++){
        int u,v;
        cout<<"node where edge is present ";
      cin>> u>>v;
      edgeMat[u][v]=1;
      edgeMat[v][u]=1;
    }
    printgrap(edgeMat);

    return 0;
}