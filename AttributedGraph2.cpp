#include <iostream>
#include "AttributedGraph2.h"

using namespace std;

AttributedGraph2::AttributedGraph2()
{
    AttNode2 = new AttributedNode2*[numNodes];
}
AttributedGraph2::AttributedGraph2(int nodes, int edges):SimpleGraph(nodes,edges)
{
    AttNode2 = new AttributedNode2*[numNodes];
}
AttributedGraph2::~AttributedGraph2()
{
    delete Nodes;
}
void AttributedGraph2::appendAttributes(int nodeid,string profession, string location)
{
    for (int i=0;i<numNodes;i++)
        {
            if(Nodes[i].getNodeId() == nodeid)
            {
                AttNode2[i] = new AttributedNode2();
                AttNode2[i]->setCityName(location);
                AttNode2[i]->setProfession(profession);
            }
        }
}
void AttributedGraph2::appendAttributes()
    {

        string temp0;
        string temp1;
        cout<<"Please give attributes for these Nodes:"<<endl;
        for (int i=0;i<numNodes;i++)
        {
            AttNode2[i] = new AttributedNode2();
            cout<<"Node ID: "<<Nodes[i].getNodeId()<<endl;
            cout<<"City Name: ";
            // cin>>temp1;
            getline(cin>>ws,temp1);
            AttNode2[i]->setCityName(temp1);
            cout<<"Profession :";
            // cin>>temp0;
            getline(cin>>ws,temp0);
            AttNode2[i]->setProfession(temp0);
        }   
    }
    

void AttributedGraph2::printNeighbors(int nodeId)
{
        printNeighbours(nodeId);
        for(int i=0;i<numNodes;i++)
        {
            if (Nodes[i].getNodeId()==nodeId)
            {
                cout<<endl<<"Node ID: "<<nodeId<<endl;
                cout<<"City Name: "<<AttNode2[i]->getCityName();
                cout<<"Profession: "<<AttNode2[i]->getProfession();
            }
        }
}

void AttributedGraph2::printData()
{
     
    for (int i = 0; i < numNodes; i++) 
    {
        cout<<endl;
        cout<<"Node "<<i+1<<": "<<Nodes[i].getNodeId()<<endl;
        cout<<"City Name: "<<AttNode2[i]->getCityName()<<endl;
        cout<<"Profession: "<<AttNode2[i]->getProfession()<<endl;
        printNeighbours(Nodes[i].getNodeId());
        cout<<endl;
    }          
    

}
