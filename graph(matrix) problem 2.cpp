#include<iostream>
using namespace std;
int main(){
    int vertex,edges,u,v;
    cout<<"Insert number of edges";
    cin>>edges;
    cout<<"Insert number of vertex";
    cin>>vertex;
    int matrix[100][100]={0};
    cout<<"Enter edges as a pair";
    for (int i=0;i<edges;i++)
        {
            cin>>u>>v;
            matrix[u][v]=1;
            matrix[v][u]=1;
        }
cout<<"Adjacency Matrix is \n";
for(int i=0;i<vertex;i++){
    for(int j=0;j<vertex;j++)
        {
            cout<<matrix[i][j];
        }
    cout<<"\n";
}
    return 0;
}
