#include <iostream>
using namespace std;

struct Graph{
	int V;
	int E;
	int **adj;
};

Graph* adjmatrixOfgraph() {
  int u, i, v;
  Graph *nullptr;
  Graph* adjmatrixOfgraph = new Graph();
  if (!adjmatrixOfgraph) {
    std::cout << "memory error";
    return nullptr;
  }
  std::cout << "enter the number of nodes and number of edges" << std::endl;
  std::cin >> adjmatrixOfgraph->V;
  std::cin >> adjmatrixOfgraph->E;

  // Allocate memory for the adjacency matrix
  adjmatrixOfgraph->adj = new int*[adjmatrixOfgraph->V];
  for (int i = 0; i < adjmatrixOfgraph->V; i++) {
    adjmatrixOfgraph->adj[i] = new int[adjmatrixOfgraph->V];
  }

  // Initialize adjacency matrix to all zeros
  for (u = 0; u < adjmatrixOfgraph->V; u++) {
    for (v = 0; v < adjmatrixOfgraph->V; v++) {
      adjmatrixOfgraph->adj[u][v] = 0;
    }
  }

  std::cout << "Enter the number of edges"<<endl;
  for (i = 0; i < adjmatrixOfgraph->E; i++) {
    std::cin >> u >> v;
    adjmatrixOfgraph->adj[u][v] = 1;
    adjmatrixOfgraph->adj[v][u] = 1;
  }
  return adjmatrixOfgraph;
}


int main() {
  Graph* graph = adjmatrixOfgraph();

  // Print out adjacency matrix
  for (int i = 0; i < graph->V; i++) {
    for (int j = 0; j < graph->V; j++) {
      std::cout << graph->adj[i][j] << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}
