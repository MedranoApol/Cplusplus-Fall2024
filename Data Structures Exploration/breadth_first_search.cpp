#include <iostream>
#include <list>
#include <vector>

class Graph{
private:
	//number of vertices on the graph
	int numOfVertex;
	
	//simulates the graph
	//vertor index represents each vectex
	//each list index represents its children
	std::vector<std::list<int> > vertices;
	
public:
	//constructor intializes size of graph
	Graph(int size){
		numOfVertex = size;
		vertices.resize(size);
	}
	
	//add value at vertex
	void addEdge(int vertexNum, int value){
		vertices[vertexNum].push_back(value);
	}
	
	//breadth-first search algorithm
	void BFS(int startingVertex){
		std::vector<bool> visted;
		visted.resize(numOfVertex, false);
		
		std::list<int> queue;
		
		
		visted[startingVertex] = true;
		queue.push_back(startingVertex);
		
		while (!queue.empty()) {
			int currentVertex = queue.front();
			std::cout << currentVertex << " ";
			queue.pop_front();
			
			
			for (int i = 0; i < vertices[currentVertex].size(); i++){
				if (!visted[i]) {
					visted[i] = true;
					std::list<int> currentList = vertices[currentVertex];
					int j = 0;
					for (std::list<int>::iterator it = currentList.begin(); it != currentList.end(); it++){	
						if (j == i){
							int value = *it;
							queue.push_back(value);
						}
						j++;
					} 
				}
			}
		}
	}
};

int main(){
	Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    std::cout << "Following is Breadth First Traversal (starting from vertex 2) \n";
    g.BFS(0);
    
    return 0;
}

