#include<iostream>
#include<algorithm>
#include<vector>

int main(){

	std::vector<int> v = {2, 10, 20, 30, 1, 2, 3, 11, 21, 31, 100, 200, 300};
	make_heap(v.begin(), v.end(), std::greater<int>());
	std::cout<<"Min heap formed is - \n";
	for(int i=0; i<v.size(); i++) {
		std::cout<<v[i]<<" ";
	}
	std::cout<<"\nDeleting element from this min heap - \n";
	pop_heap(v.begin(), v.end());
	v.pop_back();
	make_heap(v.begin(), v.end(), std::greater<int>());
	for(int i=0; i<v.size(); i++) {
		std::cout<<v[i]<<" ";
	}
	return 0;
}
