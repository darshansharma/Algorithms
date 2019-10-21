#include<iostream>
#include<vector>
#include<iterator>
#include<list>
#include<algorithm>


class Graph{
	public:
	std::list<int> *adj;
	std::vector<int> cost;
	std::edgeNumbers<int> cost;
	std::vector<pair <int, int> > mst;
	int nodes;
	
	Graph(int n){
		this->nodes = n;
		adj = new std::list<int>[n];
		// cost = new std::vector<int>;
	}

	void addEdge(int u, int	v, int c, int n){
		adj[u].push_back(v);
		adj[v].push_back(u);
		cost.push_back(c);
		edgeNumbers.push_back(n);
	}

	bool checkForCycle() {
		
	}

	void getMST() {
	
		make_heap(cost.begin(), cost.end(), std::greater<int>());
		/*for(int i=0; i<cost.size(); i++) {
			std::cout<<cost[i]<<" ";
		}*/
		for(int i=0; i<cost.size(); i++){
			pop_heap(cost.begin(), cost.end());
			cost[cost.size() - 1];
			checkForCycle(mst);
			cost.pop_back();
			make_heap(cost.begin(), cost.end(), std::greater<int>());
			
		}
	}

};


int main(){
	Graph g(5);
	
	g.addEdge(0,1, 10, 0);
	g.addEdge(0,2, 60, 1);
	g.addEdge(0,3, 40, 2);
	g.addEdge(0,4, 70, 3);
	g.addEdge(1,2, 30, 4);
	g.addEdge(1,3, 50, 5);
	g.addEdge(2,3, 20, 6);

	g.getMST();

}
