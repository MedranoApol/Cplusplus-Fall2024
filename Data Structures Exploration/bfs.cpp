#include <iostream>
#include <queue>

struct Node{
	int data;
	Node* next;
	Node(int value) : data(value), next(NULL) {}
};

class Graph{
private:
	int V;
	Node** adjList;
public:
	Graph(int amountOfVertices){
		V = amountOfVertices;
		adjList = new Node*[V];
		for (int i=0; i < V; i++)
			adjList[i] = NULL;
	}	
	
	~Graph(){
		for (int i=0; i<V; i++){
			Node* current = adjList[i];
			while (current != NULL){
				Node* temp = current;
				current = current->next;
				delete temp;
			} 
		}
		delete[] adjList;
	}
	
	void addGraph(int destination, int newVert){
		Node* newNode = new Node(newVert);
		newNode->next = adjList[destination];
		adjList[destination] = newNode;
	}
	
	void BFS(int startingVert){
		bool* visited = new bool[V];
		for (int i=0; i<V; i++){
			visited[i] = false;
		}
		
		std::queue<int> q;
		
		visited[startingVert] = true;
		q.push(startingVert);
		
		while (!q.empty()){
			int currentVert = q.front();
			std::cout << currentVert << " ";
			q.pop();
			
			Node* temp = adjList[currentVert];
			while (temp != NULL){
				int tempData = temp->data;
				if (!visited[tempData]){
					visited[tempData] = true;
					q.push(tempData);
				}
				temp = temp->next;
			}
		}
		delete[] visited;
	}
};

int main(){
	Graph g(9);
	
	g.addGraph(0, 1);
	g.addGraph(8, 3);
	g.addGraph(4, 5);
	g.addGraph(5, 0);
	g.addGraph(2, 6);
	g.addGraph(6, 7);
	g.addGraph(0, 8);
	g.addGraph(1, 3);
	g.addGraph(3, 2);
	g.addGraph(2, 4); 
	
	g.BFS(0); 
	
	return 0;
}
