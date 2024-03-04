#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

class Graph{
    public:
        vector<Node> nodes;
        Graph(int numNodes){
            nodes.resize(numNodes);
        }
        void add_edge(int src, int dst){
            Node* new_node = new Node{dst, nullptr};
            new_node->next = nodes[src].next;
            nodes[src].next = new_node;

            new_node = new Node{src, nullptr};
            new_node -> next = nodes[dst].next;
            nodes[dst].next = new_node;
        }
};

void dfs(Graph& graph, int node){
    stack<int> s;
    vector<bool> visited (graph.nodes.size(), false);
    s.push(node);
    visited[node] = true;

    while(!s.empty()){
        int curr = s.top();
        s.pop();
    
        for(Node* next = graph.nodes[curr].next; next != nullptr; next = next -> next){
            if(!visited[next -> data]){
                visited[next->data] = true;
                s.push(next->data);
            }
        }
    }
}

void bfs(Graph& graph, int start){
    queue<int> q;
    vector<bool> visited(graph.nodes.size(), false);
    q.push(start);

    while(!q.empty()){
        int curr = q.front();
        for(Node* next = graph.nodes[curr].next; next != nullptr; next = next -> next){
            if(!visited[next -> data]){
                q.push(next -> data);
                visited[next -> data] = true;
            }
        }
    }
}

int main(){

    Graph graph(4);

    graph.add_edge(0, 1);
    graph.add_edge(0, 2);
    graph.add_edge(1, 3);
    graph.add_edge(2, 3);

    bfs(graph, 0);

    return 0;
}