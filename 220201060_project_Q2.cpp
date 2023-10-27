#include <iostream>
#include "SimpleGraph.h"
#include "SimpleGraph.cpp"
#include "SimpleNode.h"
#include "SimpleNode.cpp"
#include "AttributedNode1.h"
#include "AttributedNode1.cpp"
#include "AttributedGraph1.h"
#include "AttributedGraph1.cpp"

using namespace std;

int main() {
    AttributedGraph1 attribute_1;
    int nodesNum;
    cout << "How many nodes do you want to register ?" << endl;
    cin >> nodesNum;
    int nodeId[nodesNum];
    for (int i = 0; i < nodesNum; i++) {
        cout << "Give ID of " << i + 1 << " node: " << endl;
        cin >> nodeId[i];
        attribute_1.addNode(nodeId[i]);
    }
    char check = 'y';
    int n1,n2;
    while (check == 'y') {
        cout << "Enter node IDs which you want to be edged together :" << endl;
        cin >> n1;
        for (int i=0;i<nodesNum;i++)
        {
            if (nodeId[i] == n1)
            {
                n1 = i;
                cin >> n2;
                for (int i=0;i<nodesNum;i++)
                {
                    if (nodeId[i] == n2)
                    {
                        n2 = i;
                        attribute_1.addEdge(nodeId[n1], nodeId[n2]);
                    }
                }        
            }
        }
       
        cout << "Do you want to make any other edge?.....(y/n)" << endl;
        cin >> check;
    }
    attribute_1.appendAttributes();
    attribute_1.printGraphData();
    return 0;
}
