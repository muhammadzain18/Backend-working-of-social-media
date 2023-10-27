#ifndef ATTRIBUTEDWEIGHTEDGRAPH_H
#define ATTRIBUTEDWEIGHTEDGRAPH_H
#include "SimpleGraph.h"
#include "AttributedNode1.h"
#include "AttributedGraph1.h"
#include "AttributedNode2.h"
#include "AttributedGraph2.h"
class AttributedWeightedGraph : public AttributedGraph1 , public AttributedGraph2{
    int **Weights = new int* [3];
    public:
    AttributedWeightedGraph();
    AttributedWeightedGraph(int numNodes , int edgeee);
    ~AttributedWeightedGraph();

    void appendWeight(int nodeId1, int nodeId2, int Weight);
    void printNeighbors(int nodeId);
    void printData();

    
};

#endif