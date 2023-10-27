// #include "AttributedWeightedGraph.h"
// #include <iostream>
// using namespace std;

// AttributedWeightedGraph::AttributedWeightedGraph() {
//     weights = nullptr;
// }

// AttributedWeightedGraph::AttributedWeightedGraph(int numNodes) : AttributedGraph1() , AttributedGraph2(){
//     weights = new int*[numNodes];
//     for (int i = 0; i < numNodes; i++) {
//         weights[i] = new int[numNodes];
//         for (int j = 0; j < numNodes; j++) {
//             weights[i][j] = 0;
//         }
//     }
// }

// AttributedWeightedGraph::~AttributedWeightedGraph() {
//     if (weights) {
//         for (int i = 0; i < getnode(); i++) {
//             delete[] weights[i];
//         }
//         delete[] weights;
//     }
// }

// void AttributedWeightedGraph::appendWeight(int nodeId1, int nodeId2, int weight) {
//     if (nodeId1 >= 0 && nodeId1 < getnode() && nodeId2 >= 0 && nodeId2 < getnode()) {
//         weights[nodeId1][nodeId2] = weight;
//         weights[nodeId2][nodeId1] = weight;
//     }
// }

// void AttributedWeightedGraph::printNeighbors(int nodeId){
//     AttributedGraph2::printNeighbors(nodeId);

//     cout << "Weights for Node " << nodeId << ":" <<endl;
//     for (int i = 0; i < getnode(); i++) {
//         if (weights[nodeId][i] != 0) {
//             cout << "Neighbor: " << i << ", Weight: " << weights[nodeId][i] <<endl;
//         }
//     }
// }

// void AttributedWeightedGraph::printGraphData(){
//     AttributedGraph1::printGraphData();
//     AttributedGraph2::printGraphData();

//     cout << "Edge Weights:" <<endl;
//     for (int i = 0; i < getnode(); i++) {
//         for (int j = 0; j < getnode(); j++) {
//             cout << weights[i][j] << " ";
//         }
//         cout <<endl;
//     }
// }

// int AttributedWeightedGraph::getWeight(int nodeId1, int nodeId2){
//     if (nodeId1 >= 0 && nodeId1 < getnode() && nodeId2 >= 0 && nodeId2 < getnode()) {
//         return weights[nodeId1][nodeId2];
//     }
//     return 0;
// }

// void AttributedWeightedGraph::setWeight(int nodeId1, int nodeId2, int weight) {
//     if (nodeId1 >= 0 && nodeId1 < getnode() && nodeId2 >= 0 && nodeId2 < getnode()) {
//         weights[nodeId1][nodeId2] = weight;
//         weights[nodeId2][nodeId1] = weight;
//     }
// }
// #include "AttributedWeightedGraph.h"
// #include <iostream>
// using namespace std;
// int count=0;

// AttributedWeightedGraph::AttributedWeightedGraph() : AttributedGraph1(), AttributedGraph2() {
//     weights = nullptr;
// }

// AttributedWeightedGraph::AttributedWeightedGraph(int numNodes, int numEdges)
//     : AttributedGraph1(numNodes, numEdges), AttributedGraph2(numNodes, numEdges)
// {
//     weights = new int*[numNodes];
//     for (int i = 0; i < numNodes; i++) {
//         weights[i] = new int[numNodes];
//     }
// }



// AttributedWeightedGraph::~AttributedWeightedGraph() {
//     if (weights) {
//         for (int i = 0; i < getnode(); i++) {
//             delete[] weights[i];
//         }
//         delete[] weights;
//     }
// }

// void AttributedWeightedGraph::appendWeight(int nodeId1, int nodeId2, int weight) {
//      {
//         weights[nodeId1][nodeId2] = weight;
//         weights[nodeId2][nodeId1] = weight;
//     cout<<weights[nodeId1][nodeId2]<<endl;
//      }
// }

// void AttributedWeightedGraph::printNeighbors(int nodeId) {
//     AttributedGraph2::printNeighbors(nodeId);

//     cout << "Weights for Node " << nodeId << ":" << endl;
//     for (int i = 0; i < getnode(); i++) {
//         if (weights[nodeId][i] != 0) {
//             cout << "Neighbor: " << i << ", Weight: " << weights[nodeId][i] << endl;
//         }
//     }
// }

// void AttributedWeightedGraph::printGraphData() {
//     cout << "Edge Weights:" << endl;
//     for (int i = 0; i < getnode(); i++) {
//         for (int j = 0; j < getnode(); j++) {
//             cout << weights[i][j] << " ";
//         }
//         cout << endl;
//     }
// }


// int AttributedWeightedGraph::getWeight(int nodeId1, int nodeId2) {
//     if (nodeId1 >= 0 && nodeId1 < getnode() && nodeId2 >= 0 && nodeId2 < getnode()) {
//         return weights[nodeId1][nodeId2];
//     }
//     return 0;
// }

// void AttributedWeightedGraph::setWeight(int nodeId1, int nodeId2, int weight) {
//     if (nodeId1 >= 0 && nodeId1 < getnode() && nodeId2 >= 0 && nodeId2 < getnode()) {
//         weights[nodeId1][nodeId2] = weight;
//         weights[nodeId2][nodeId1] = weight;
//     }
// }
// //////////////////////////////////////////////////////////////////////////
// AttributedWeightedGraph::AttributedWeightedGraph() : AttributedGraph1(), AttributedGraph2() {
//     weights = nullptr;
// }

// AttributedWeightedGraph::AttributedWeightedGraph(int numNodes , int edgeee) : AttributedGraph1(numNodes , edgeee ), AttributedGraph2(numNodes , edgeee) {
//     weights = new int*[numNodes];
//     for (int i = 0; i < numNodes; i++) {
//         weights[i] = new int[numNodes];
//         for (int j = 0; j < numNodes; j++) {
//             weights[i][j] = 0;
//         }
//     }
// }

// AttributedWeightedGraph::~AttributedWeightedGraph() {
//     if (weights) {
//         for (int i = 0; i < getnode(); i++) {
//             delete[] weights[i];
//         }
//         delete[] weights;
//     }
// }
// void AttributedWeightedGraph::appendWeight(int nodeId1, int nodeId2, int weight) {
//     if (nodeId1 >= 0 && nodeId1 < numNodes && nodeId2 >= 0 && nodeId2 < numNodes) {
//         if (!weights[nodeId1])
//             weights[nodeId1] = new int[numNodes];
//         if (!weights[nodeId2])
//             weights[nodeId2] = new int[numNodes];

//         weights[nodeId1][nodeId2] = weight;
//         weights[nodeId2][nodeId1] = weight;
//         cout<<weights[nodeId2][nodeId1]<<endl;
//     }
// }


// void AttributedWeightedGraph::printNeighbors(int nodeId) {
//     AttributedGraph2::printNeighbors(nodeId);

//     cout << "Weights for Node " << nodeId << ":" << endl;
//     for (int i = 0; i < getnode(); i++) {
//         if (weights[nodeId][i] != 0) {
//             cout << "Neighbor: " << i << ", Weight: " << weights[nodeId][i] << endl;
//         }
//     }
// }

// void AttributedWeightedGraph::printGraphData() {
//     AttributedGraph1::printGraphData();
//     AttributedGraph2::printGraphData();

//     cout << "Edge Weights:" << endl;
//     for (int i = 0; i < getnode(); i++) {
//         for (int j = 0; j < getnode(); j++) {
//             cout << weights[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int AttributedWeightedGraph::getWeight(int nodeId1, int nodeId2) {
//     if (nodeId1 >= 0 && nodeId1 < getnode() && nodeId2 >= 0 && nodeId2 < getnode()) {
//         return weights[nodeId1][nodeId2];
//     }
//     return 0;
// }

// void AttributedWeightedGraph::setWeight(int nodeId1, int nodeId2, int weight) {
//     if (nodeId1 >= 0 && nodeId1 < getnode() && nodeId2 >= 0 && nodeId2 < getnode()) {
//         weights[nodeId1][nodeId2] = weight;
//         weights[nodeId2][nodeId1] = weight;
//     }
// }

#include <iostream>
#include "AttributedWeightedGraph.h"

using namespace std;

AttributedWeightedGraph::AttributedWeightedGraph()
{
    for (int i=0;i<3;i++)
    {
        Weights[i] = new int[3];
        for (int j=0;j<3;j++)
        {
            Weights[i][j] = 0;
        }
    }       
}

AttributedWeightedGraph::AttributedWeightedGraph(int nodes,int edges):AttributedGraph2(nodes,edges)
{
    
}

AttributedWeightedGraph::~AttributedWeightedGraph()
{

}

void AttributedWeightedGraph::appendWeight(int nodeId1,int nodeId2,int Weight)
{
    for (int i=0;i<3;i++)
        {
            if (Nodes[i].getNodeId() == nodeId1)
            {
                for (int j=0;j<3;j++)
                {
                    if (Nodes[j].getNodeId() == nodeId2)
                    {
                        int count = 0;
                        for (int k=0;k<Nodes[i].getNeighborCount();k++)
                        {
                            if (Nodes[i].getNeighbor()[k]->getNodeId() == nodeId2)
                            {
                                count++;
                            }
                        }
                        if (count !=0)
                        {
                            Weights[i][j] = Weight;
                            Weights[j][i] = Weight;
                        }

                    }
                }
            }
        }    

}

void AttributedWeightedGraph::printNeighbors(int NodeId)
{
    for (int i = 0;i<numNodes; i++)
    {
        if (NodeId == Nodes[i].getNodeId())
        {
            cout << "The node IDs of the neighbors of this node are:" << endl;
            for (int j = 0; j < Nodes[i].getNeighborCount(); j++)
            {
                int a;
                a = Nodes[i].getNeighbor()[j]->getNodeId();
                for (int j=0;j<3;j++)
                {
                    if (Nodes[j].getNodeId() == a)
                    {
                        cout<<a<<" with weight: "<<Weights[i][j]<<endl;
                    }
                }
            }
            if (Nodes[i].getNeighborCount() == 0)
            {
                cout<<"No neighbours found"<<endl;
            }
        }
    }        
}

void AttributedWeightedGraph::printData()
{
    for (int i=0;i<3;i++)
        {
            cout<<endl;
            cout<<"Node "<<i+1<<": "<<Nodes[i].getNodeId()<<endl;
            cout<<"City Name: "<<getAttNode2()[i].getCityName()<<endl;
            cout<<"Profession: "<<getAttNode2()[i].getProfession()<<endl;
            cout<<"Age: "<<getAttNodes()[i].getAge()<<endl;
            cout<<"Gender: "<<getAttNodes()[i].getGender()<<endl;
            printNeighbors(Nodes[i].getNodeId());
            cout<<endl;
        }
}