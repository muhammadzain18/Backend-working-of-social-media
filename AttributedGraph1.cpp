#include <iostream>
#include "AttributedGraph1.h"
using namespace std;

AttributedGraph1::AttributedGraph1()
{
    AttNodes = new AttributedNode1[numNodes];
}
AttributedGraph1::AttributedGraph1(int nodes, int edges):SimpleGraph(nodes,edges)
{
    AttNodes = new AttributedNode1[numNodes];
}
AttributedGraph1::~AttributedGraph1()
{
    delete[] AttNodes;
}
void AttributedGraph1::appendAttributes()
{
    int temp0;
        char temp1;
        cout<<"Give following attributes :"<<endl;
        for (int i=0;i<numNodes;i++)
        {
            cout<<"Node ID: "<<Nodes[i].getNodeId()<<endl;
            cout<<"Gender (Male (m) / Female (f)) : ";
            cin>>temp1;
            AttNodes[i].setGender(temp1);
            cout<<"Age :";
            cin>>temp0;
            AttNodes[i].setAge(temp0);
        }    
}
void AttributedGraph1::printGraphData()
{
    for (int i = 0; i < numNodes; i++) 
    {
        cout<<endl;
        cout<<"Node "<<i+1<<": "<<Nodes[i].getNodeId()<<endl;
        cout<<"Gender: "<<AttNodes[i].getGender()<<endl;
        cout<<"Age: "<<AttNodes[i].getAge()<<endl;
        printNeighbours(Nodes[i].getNodeId());
        cout<<endl;
    }        
}
void AttributedGraph1::setNode(int node)
{
    numNodes=node;
}
int AttributedGraph1:: getnode(){
    return numNodes;
}
AttributedNode1* AttributedGraph1::getAttNodes()
{
    return AttNodes;
}
//  void AttributedGraph1:: sendMessage()
// {
//     getline(cin>>ws,message);
// }
