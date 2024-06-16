#include <set>
#include <iostream>

int main(){
	std::set<int> nums;
	
	nums.insert(1);
	nums.insert(2); 
	nums.insert(7);
	nums.insert(8);
	
	for (std::set<int>::iterator it = nums.begin(); it != nums.end(); it++){
		std::cout << *it << "\n";
	}
	return 0;
}
