#include <iostream>
#include <vector>

//sorts vector using bubble sort
void sort(std::vector<int>& vect);

std::vector<int> uniqueValues(std::vector<int> vect);

void printList(std::vector<int> vect);

int binarySearch(std::vector<int>& vect, int target, int start, int end);

int main(){
	std::vector<int> list;
	int number;
	
	
	std::cout << "Enter numbers, enter -1 to stop: ";
	std::cin>> number;
	while (number != -1){
		list.push_back(number);
		std::cin >> number;
	}
	
	int target;
	sort(list);
	list = uniqueValues(list);
	printList(list);
	std::cout << "Enter number to search for: ";
	std::cin >> target;
	
	int result = binarySearch(list, target, 0, list.size()-1);
	if (result < 0 || result >= list.size())
		std::cout << target << " is not in the data set.\n";
	else 
		std::cout << target << " found at index " << result << "\n";
	
	return 0; 
}
void sort(std::vector<int>& vect){
	for (int i = 0; i< vect.size(); i++){
		for (int j = 0; j < vect.size()-1-i; j++){
			if (vect[j] > vect[j+1]){
				int temp = vect[j];
				vect[j] = vect[j+1];
				vect[j+1] = temp;
			}
		}
	}	
}

int binarySearch(std::vector<int>& vect, int target, int start, int end){
	if (start > end){
		return -1;
	}
	
	int half = start + (end - start)/2;
	
	if (vect[half] == target){
		return half;
	} else if ( vect[half] > target){
		return (binarySearch(vect, target, start, half-1));
	} else {
		return (binarySearch(vect, target, half+1, end));
	}
}

std::vector<int> uniqueValues(std::vector<int> vect){
	std::vector<int> newVect;
	newVect.push_back(vect[0]);
	for (int i=0; i< vect.size() -1; i++){
		if (vect[i] != vect[i+1])
			newVect.push_back(vect[i+1]);
	}	
	return newVect;
}

void printList(std::vector<int> vect){
	for (int i = 0; i < vect.size(); i++)
		std::cout << vect[i] << " ";
	std::cout << "\n";
}
