#include <iostream>
#include <list>
#include <stack>
#include <queue>
#include <set>
using namespace std;

class Graph {
    int V;              // Number of vertices
    list<int>* adj;     // Pointer to an array containing adjacency lists
public:
    Graph(int V);       // Constructor
    void addEdge(int v, int w);  // Function to add an edge to the graph
    void DFS(int startVertex);   // DFS traversal of the vertices
    void BFS(int startVertex);   // BFS traversal of the vertices
};

Graph::Graph(int V) {
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w); // Add w to v's list.
}

void Graph::DFS(int startVertex) {
    stack<int> S;             // Stack for DFS
    set<int> visited;         // Set to keep track of visited vertices
    S.push(startVertex);

    cout << "DFS: ";
    while (!S.empty()) {
        int vertex = S.top();
        S.pop();

        if (visited.find(vertex) == visited.end()) {
            cout << vertex << " ";
            visited.insert(vertex);
        }

        for (auto i = adj[vertex].rbegin(); i != adj[vertex].rend(); ++i) {
            if (visited.find(*i) == visited.end()) {
                S.push(*i);
            }
        }
    }
    cout << endl;
}

void Graph::BFS(int startVertex) {
    queue<int> Q;            // Queue for BFS
    set<int> visited;        // Set to keep track of visited vertices
    Q.push(startVertex);

    cout << "BFS: ";
    while (!Q.empty()) {
        int vertex = Q.front();
        Q.pop();

        if (visited.find(vertex) == visited.end()) {
            cout << vertex << " ";
            visited.insert(vertex);
        }

        for (auto i = adj[vertex].begin(); i != adj[vertex].end(); ++i) {
            if (visited.find(*i) == visited.end()) {
                Q.push(*i);
            }
        }
    }
    cout << endl;
}

int main() {
    Graph g(8); // Considering vertices from 1 to 7

    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(2, 5);
    g.addEdge(3, 6);
    g.addEdge(3, 7);
    g.DFS(1);
    g.BFS(1);
    return 0;
}
