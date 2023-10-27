#include <iostream>
#include "SimpleGraph.h"
#include "SimpleGraph.cpp"
#include "SimpleNode.h"
#include "SimpleNode.cpp"
#include "AttributedNode2.h"
#include "AttributedNode2.cpp"
#include "AttributedGraph2.h"
#include "AttributedGraph2.cpp"
#include "AttributedWeightedGraph.cpp"
#include "AttributedWeightedGraph.h"
#include "AttributedGraph1.cpp"
#include "AttributedGraph1.h"
#include "AttributedNode1.h"
#include "AttributedNode1.cpp"
using namespace std;

int main() {
    int numNodes, numEdges;
    cout << "Enter the number of nodes: ";
    cin >> numNodes;
    cout << "Enter the number of edges: ";
    cin >> numEdges;

    AttributedWeightedGraph graph(numNodes, numEdges);

    int nodesNum, temp1, temp2;
    char check = 'y';
    cout << "How many nodes do you want to register?" << endl;
    cin >> nodesNum;
    int nodeId[nodesNum];
    for (int i = 0; i < nodesNum; i++) {
        cout << "Give ID of " << i + 1 << " node: " << endl;
        cin >> nodeId[i];
        graph.addNode(nodeId[i]);
    }
    while (check == 'y') 
    {
        cout << "Enter node IDs which you want to be edged together :" << endl;
        cin >> temp1;
        for (int i=0;i<nodesNum;i++)
        {
            if (nodeId[i] == temp1)
            {
                temp1 = i;
                cin >> temp2;
                for (int i=0;i<nodesNum;i++)
                {
                    if (nodeId[i] == temp2)
                    {
                        temp2 = i;
                        graph.addEdge(nodeId[temp1], nodeId[temp2]);
                    }
                }        
            }
        }
        cout << "Do you want to make any other edge?.....(y/n)" << endl;
        cin >> check;
    }
    cout << endl;
    graph.AttributedGraph1::appendAttributes();
    graph.AttributedGraph2::appendAttributes();



    int nodeId1, nodeId2, weight;
    for (int i = 0; i < numEdges; i++) {
        cout << "Enter the ID of nodes on the edge " << i+1 << ": ";
        cin >> nodeId1 >> nodeId2;
        cout << "Enter weight of edge: ";
        cin >> weight;
        graph.appendWeight(nodeId1, nodeId2, weight);
    }
    graph.printNeighbors(nodeId[1]);
    graph.printData();
    cout<<"NUmnodes -----------> "<<numNodes;

    return 0;

}