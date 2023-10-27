#ifndef ATTRIBUTEDGRAPH1_H
#define ATTRIBUTEDGRAPH1_H

#include "AttributedNode1.h"
#include "SimpleGraph.h"

class AttributedGraph1: public SimpleGraph
{
    AttributedNode1* AttNodes;
    public:
    AttributedGraph1();
    AttributedGraph1(int nodes, int edges);
    ~AttributedGraph1();
    void appendAttributes();
    void printGraphData();
    int getnode();
    void setNode(int node);
    // void sendMessage();
    // string print();
    AttributedNode1* getAttNodes();
};

#endif