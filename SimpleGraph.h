#ifndef SimpleGraph_H
#define SimpleGraph_H

#include "SimpleNode.h"

class SimpleGraph
{
    protected:
    int numNodes;
    int numEdges;
    SimpleNode* Nodes;
    // string message;

    public:
    SimpleGraph();
    SimpleGraph(int nodes,int edges);
    ~SimpleGraph();
    void addNode(int NodeId);
    void addEdge(int nodeId1,int nodeId2);
    void printNeighbours(int nodeId);
    void printGraphData();
    // void setMessage(string m);
    // string getMessage();
    //   virtual void sendMessage() = 0;
};

#endif  