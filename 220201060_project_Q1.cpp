#include <iostream>
#include "SimpleGraph.h"
#include "SimpleGraph.cpp"
#include "SimpleNode.h"
#include "SimpleNode.cpp"
using namespace std;

int main() 
{
    SimpleGraph smp;
    int nodesNum, temp1, temp2;
    char check = 'y';
    cout << "How many nodes do you want to register?" << endl;
    cin >> nodesNum;
    int nodeId[nodesNum];
    for (int i = 0; i < nodesNum; i++) {
        cout << "Give ID of " << i + 1 << " node: " << endl;
        cin >> nodeId[i];
        smp.addNode(nodeId[i]);
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
                        smp.addEdge(nodeId[temp1], nodeId[temp2]);
                    }
                }        
            }
        }
        cout << "Do you want to make any other edge?.....(y/n)" << endl;
        cin >> check;
    }
    cout << endl;
    smp.printGraphData();
    return 0;
}