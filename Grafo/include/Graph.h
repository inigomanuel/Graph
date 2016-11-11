#ifndef GRAPH_H
#define GRAPH_H
#include <vector>
#include <map>
using namespace std;

class Graph
{
    map <int, vector <int> > node;
    public:
        Graph(vector<int> &comienzo, vector <int &finall>);
        int ady(const int ID);
        const vector <int> &ady(const int ID);
};
#endif
