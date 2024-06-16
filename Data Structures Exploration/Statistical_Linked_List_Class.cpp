#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <cctype>

struct Node{
	int value;
	Node* next;
};
typedef Node* NodePtr;

class LinkedList{
private:
	NodePtr head;
	NodePtr tail;
	int sizeOfLinkedList;
public:
	//constructor
	LinkedList(){
		head = NULL;
		tail = NULL;
		sizeOfLinkedList = 0;
	}
	
	//adds item to the beginning of the list
	void prepend(int data){
		if (head == NULL && tail == NULL){
			NodePtr temp = new Node;
			temp->value = data;
			temp->next = tail;
			head = temp;
			sizeOfLinkedList++;
		}
		else if (tail == NULL && head->next == tail){
			NodePtr temp = new Node;
			temp->value = data;
			temp->next = head;
			tail = head;
			head = temp;
			sizeOfLinkedList++;
		}
		else{
			NodePtr temp = new Node;
			temp->value = data;
			temp->next = head;
			head = temp;
			sizeOfLinkedList++;
		}
	}
	
	//adds data to the end of a list
	void append(int data){
		if (head == NULL && tail == NULL){
			NodePtr temp = new Node;
			temp->value = data;
			temp->next = tail;
			head = temp;
			sizeOfLinkedList++;
		}
		else if (tail == NULL && head->next == tail){
			NodePtr temp = new Node;
			temp->value = data;
			temp->next = NULL;
			tail = temp;
			head->next = tail;
			sizeOfLinkedList++;
		}
		else{
			NodePtr temp = new Node;
			temp->value = data;
			temp->next = NULL;
			tail->next = temp;
			tail = temp;
			sizeOfLinkedList++;
		}
	}
	
	//deletes node with target value
	void deleteNode(int num){
		//checks if it is an empty list
		if (head == NULL){
			std::cout << "\nNothing to delete! Add something!\n";
			return;
		}
		/* iterates through linked list, either does not find value
		or finds the node before the node containing the searched number */
		NodePtr iter;
		for (iter = head; iter->next != NULL; iter = iter->next){
			NodePtr oneAhead = iter->next;
			if (oneAhead->value == num)
				break;
		}
		//if value not in list, leaves method
		if (iter == NULL){
			std::cout << "\nValue is not on the list.\n\n";
			return;
		}
		//deletes the node containing the target
		NodePtr discard = iter->next;
		iter->next = discard->next;
		delete discard;
		sizeOfLinkedList--;
	}
	
	//print values of linked list to screen
	void print(){
		if (head == NULL){
			std::cout << "\nNo Data\n";
			return;
		}
		std::cout << "\nValue(s) in Data Set:\n";
		for (NodePtr iter = head; iter != NULL; iter = iter->next){
			std::cout << iter->value << " ";
		}
		std::cout << "\n\n";
	}
	
	//prints value of the head of the list
	void printHead(){
		int headValue = head->value;
		std::cout << "The value of the head is " << headValue << "\n";
	}
	
	//prints value of the tail of the list
	void printTail(){
		int tailValue = tail->value;
		std::cout << "The value of the tail is " << tailValue << "\n";
	}
	
	//gets a vector containing all values of list
	std::vector<int> getList(){
		std::vector<int> list;
		
		//adds all values from linked list to vector
		for (NodePtr iter = head; iter != NULL; iter = iter->next){
			list.push_back(iter->value);
		}
		
		return list;
	}
	
	std::vector<int> getSortedList(){
		
		std::vector<int> list = getList();
		
		for (int i = 0; i < list.size(); i++){
			for (int j = 0; j < list.size() - i - 1; j++){
				if (list[j] > list[j+1]){
					int temp = list[j];
					list[j] = list[j+1];
					list[j+1] = temp;
				}
			}
		}
		
		return list;
		
	}
	
	void reverse(){
		tail = head;
		NodePtr current = head;
		NodePtr next = head;
		NodePtr prev = NULL;
		while (current != NULL){
			next = current->next;
			current->next = prev;
			prev = current;
			current = next;
		}
		head = prev;	
	}
	
	/*  lazy (& inefficent) method of reversing a linked list
	//reverses linked list
	void reverse(int start, int end){
		//checks for empty list
		if (head == NULL){
			std::cout << "\nNothing to reverse. Add someting!\n\n";
		}
		
		//keeps the range within linked list size
		if (start < 0) start = 0;
		if (end > sizeOfLinkedList) end = sizeOfLinkedList;
		
		//gets vector full of linked list values
		std::vector<int> list = getList();
		
		//reverse values of linked list
		std::vector<int> reverse;
		for (int i=list.size()-1; i >= 0; i--){
			reverse.push_back(list[i]);
		}
		
		int i=0; //overwrites linked list values with reversed values from vector
		for (NodePtr iter = head; iter != NULL; iter = iter->next){
			if ((start > i) || (i >= end)){
				i++;
				continue;
			}
			iter->value = reverse[i++];
		}	
	}*/
	
	//sorts in ascending order
	void sort(){
		//gets vector full of linked list values
		std::vector<int> list = getList();
		
		//sorts the vector in a ascending order using bubble sort
		for (int i = 0; i < list.size(); i++){
			for (int j = 0; j < list.size() - i - 1; j++){
				if (list[j] > list[j+1]){
					int temp = list[j];
					list[j] = list[j+1];
					list[j+1] = temp;
				}
			}
		}
		
		int i=0; //overwrites linked list values with sorted values from vector
		for (NodePtr iter = head; iter != NULL; iter = iter->next){
			iter->value = list[i++];
		}
	}
	
	//sorts in descending order
	void desc_sort(){
		//gets vector full of linked list values
		std::vector<int> list = getList();
		
		//sorts vector in descending order
		for (int i = 0; i < list.size(); i++){
			for (int j = 0; j < list.size() - i - 1; j++){
				if (list[j] < list[j+1]){
					int temp = list[j];
					list[j] = list[j+1];
					list[j+1] = temp;
				}
			}
		}
		
		int i=0; //overwrites linked list values with sorted values
		for (NodePtr iter = head; iter != NULL; iter = iter->next){
			iter->value = list[i++];
		}
	}
	
	std::map<int, int> getMap(){
		std::map<int, int> mapOfList;
		std::vector<int> list = getList();
    	// Count occurrences of each element in the list
    	for (std::vector<int>::iterator it = list.begin(); it != list.end(); ++it) {
        	mapOfList[*it]++;
    	}
    	
    	return mapOfList;
    }
    
    int uniqueValues(){
    	std::map<int, int> mapOfList = getMap();
    	int uniqueVals = static_cast<int>(mapOfList.size());
    	return uniqueVals;
	}
    
	std::vector<int> getMedian(){
		std::vector<int> list = getSortedList();
		std::vector<int> medianOfList;
		
		if (sizeOfLinkedList == 0){
			std::vector<int> emptySet;
			emptySet.push_back(0);
			return emptySet;
		}
		else if (sizeOfLinkedList == 1){
			medianOfList.push_back(list[0]);
			return medianOfList;
		}
		int middle;
		middle = sizeOfLinkedList/2;
		if (sizeOfLinkedList%2 == 0){
			medianOfList.push_back(list[middle-1]);
			medianOfList.push_back(list[middle]);
			return medianOfList;
		}
		medianOfList.push_back(middle+1);
		return medianOfList;
	}
	std::vector<int> getMode() {
    	std::vector<int> list = getSortedList();

    	// Check if the list is empty
    	if (list.empty()){
        	std::vector<int> emptySet;
        	emptySet.push_back(0);
        	return emptySet;
    	}

    	std::map<int, int> mapOfList = getMap();

    	// Find the most occurring element
    	std::map<int, int>::iterator mostOccur = mapOfList.begin();
    	for (std::map<int, int>::iterator it = mapOfList.begin(); it != mapOfList.end(); ++it) {
        	if (it->second > mostOccur->second) {
            	mostOccur = it;
        	}	
    	}	

    	int mostValue = mostOccur->second;

    	// Find all elements with the same occurrences as the most occurring element
    	std::vector<int> modeOfList;
    	for (std::map<int, int>::iterator it = mapOfList.begin(); it != mapOfList.end(); ++it) {
        	if (it->second == mostValue) {
            	modeOfList.push_back(it->first);
        	}
    }

    return modeOfList;
}
	/*
	std::vector<int> getMode(){
	if (sizeOfLinkedList == 0){
			std::vector<int> emptySet;
			emptySet.push_back(0);
			return emptySet;
	}
		std::map<int, int> mapOfList;
		
		std::vector<int> list = getSortedList();
		for (int i = 0; i<list.size(); i++){
			std::map<int, int>::iterator it = mapOfList.find(list[i]);
			while (it != mapOfList.end()){
				if (it != mapOfList.end()){
					mapOfList[list[i]]++;
				} else {
					mapOfList[list[i]] = 1;
				}
			}
		}
		std::map<int, int>::iterator mostOccur = mapOfList.begin();
		int mostKey = mostOccur->first;
		int mostValue = mostOccur->second;
		std::vector<int> modeOfList;
		int mapSize = static_cast<int>(mapOfList.size());
		if (mapSize == 0){
			std::vector<int> emptySet;
			emptySet.push_back(0);
			return emptySet;
		} else if (mapSize == 1){
			modeOfList.push_back(mostOccur->first);
			return modeOfList;
		}
		std::map<int, int>::iterator iter = mapOfList.begin();
		std::advance(iter, 1);
		for (std::map<int, int>::iterator it1 = iter; it1 != mapOfList.end(); it1++){
				if (mostValue < it1->second){
					mostKey = it1->first;
					mostValue = it1->second;
					mostOccur = it1;
				}
			}	
		modeOfList.push_back(mostKey);
		for (std::map<int, int>::iterator it = mapOfList.begin(); it != mapOfList.end(); it++){
			if (modeOfList[0] == it->first)	continue;
			if (mostValue == it->second) modeOfList.push_back(it->first);
		}
		return modeOfList;
	}
	*/
	
	int getMax(){
		std::vector<int> list = getSortedList();
		return list[list.size()-1];
	}
	int getMin(){
		std::vector<int> list = getSortedList();
		return list[1];
	}
	int getSum(){
		if (sizeOfLinkedList == 0){
			return 1;
		}
		int sumOfList = 0;
		//adds all values of list together
		for (NodePtr iter = head; iter != NULL; iter = iter->next){
			sumOfList += iter->value;
		}
		return sumOfList;
	}
	
	double getMean(){
		if (sizeOfLinkedList == 0){
			return 1;
		}
		//gets sum from sum function
		int sumOfList = getSum();
		
		//get mean from dividing sum by size
		double meanOfList = sumOfList/static_cast<double>(sizeOfLinkedList);
		return meanOfList;
	}
	
	std::vector<double> getSpread(){
		if (sizeOfLinkedList == 0){
			std::vector<double> emptySet;
			emptySet.push_back(1);
			return emptySet;
		}
	 	//get the variables to calculate spread
		double meanOfList = getMean();
		std::vector<int> list = getList();
		std::vector<double> spreadOfList;
		
		//calculate spread
		for (int i = 0; i < list.size(); i++){
			double spreadCalc = list[i] - meanOfList;
			if (spreadCalc < 0) spreadCalc *= -1;
			spreadOfList.push_back(spreadCalc);
		}
		
		return spreadOfList;
		
	}
	
	double getVariance(){
		if (sizeOfLinkedList == 0){
			return 1.0;
		}
		//get mean from mean function
		double meanOfList = getMean();
		std::vector<double> spreadOfList = getSpread();
		double calcVarSum = 0;
		
		//calculate variance
		for (int i = 0; i < spreadOfList.size(); i++){
			spreadOfList[i] *= spreadOfList[i];
			calcVarSum += spreadOfList[i];
		}
		double listVariance = calcVarSum/sizeOfLinkedList;
		return listVariance;
	}
	
	//calcuates stanndard Deviation and return it
	double getStandardDeviation(){
		if (sizeOfLinkedList == 0){
			return 1;
		}
		//get variance
		double standDeviation = getVariance();
		
		//calculate standard deviation 
		standDeviation = sqrt(standDeviation);
		return standDeviation;
	}
	
	int getRange(){
		if (sizeOfLinkedList == 0){
			return 1;
		}
		std::vector<int> list = getSortedList();
		int range = list[list.size()-1] - list[0];
		return range;	
	}
	
	int getSizeOf(){
		return sizeOfLinkedList;
	}
	
	std::map<int, double> getProbDistribution(){
		std::map<int, double> probDist;
		if (sizeOfLinkedList == 0){
			probDist[0] = 0;
			return probDist;
		}
		std::map<int, int> mapOfList = getMap();
		for (std::map<int, int>::iterator it = mapOfList.begin(); it != mapOfList.end(); ++it){
			probDist[it->first] = (it->second/static_cast<double>(sizeOfLinkedList));
		}
		
		return probDist;
	}
	
	void getProbDistribution(bool print){
		if (sizeOfLinkedList == 0){
			std::cout << "Probability Distribution:\n"
					  << " No Data\n\n";
			return;
		}
		std::map<int, int> mapOfList = getMap();
		std::map<int, double> probDist;
		std::cout << "Probability Distribution:\n"
				  << "Data:\tProbability:\tPercentage:\n";
		for (std::map<int, int>::iterator it = mapOfList.begin(); it != mapOfList.end(); ++it){
			probDist[it->first] = (it->second/static_cast<double>(sizeOfLinkedList));
			std::cout << it->first << "\t    " << it->second << "/" 
					  << sizeOfLinkedList << "\t\t   " << probDist[it->first] << "\n";
		}
		std::cout << "\n";
	}
	
	std::vector<double> getZScore(){
		std::vector<double> zScoreOfList;
		if (sizeOfLinkedList == 0){
			zScoreOfList.push_back(0);
			return zScoreOfList;
		}
		std::vector<int> list = getList();
		double s_Dev = getStandardDeviation();
		double meanOfList = getMean();
		
		for (int i = 0; i < list.size(); i++){
			double zScoreOfData = (list[i] - meanOfList)/s_Dev;
			zScoreOfList.push_back(zScoreOfData);
		}
		return zScoreOfList;
	}
	
	void getZScore(bool print){
		std::cout << "Z-Score of Each Value in Data Set: ";
		if (sizeOfLinkedList == 0){
			std::cout << "No Data\n";
			return;
		}
		std::vector<double> zScoreOfList = getZScore();
		for (int i = 0; i < zScoreOfList.size(); i++){
			std::cout << zScoreOfList[i] << " ";
		}
		std::cout << "\n";
	}
	
	void print_stats(){
		std::cout << "Statistics on Data Set:\n";
		if (sizeOfLinkedList == 0){
			std::cout << "No Data Available\n\n";
			return;
		}
		int max = getMax();
		int min = getMin();
		int range = getRange();
		double mean = getMean();
		std::vector<double> spread = getSpread();
		std::vector<int> mode = getMode();
		int sum = getSum();
		double variance = getVariance();
		double standard_deviation = getStandardDeviation();
		std::vector<int> median = getMedian();
		std::map<int, int> mapOfList = getMap();
		
		std::cout << "\nNumber of Data Values: " << sizeOfLinkedList << "\n"
				  << "Number of Unique Values: " << uniqueValues() << "\n"
				  << "Max: " << max << "\n"
				  << "Min: " << min << "\n"
				  << "Sum: " << sum << "\n"
				  << "Range: " << range << "\n"
				  << "Mean: " << mean << "\n"
				  << "Median: ";
		for (int i=0; i < median.size(); i++){
			std::cout << median[i] << " ";
		}		  
		std::cout << "\nMode: ";
		for	(int i=0; i < mode.size(); i++){
			std::cout << mode[i] << " ";
		}
		std::cout << "\nSpread: ";
		for (int i=0; i < spread.size(); i++){
			std::cout << spread[i] << " ";
		}				  
		std::cout << "\nVariance: " << variance << "\n"
				  << "Standard Deviation: " << standard_deviation << "\n";
		getProbDistribution(true);
	}
	
	void histogram(){
		std::map<int, int> mapOfList = getMap();
		std::cout << "Histogram of Data Set\n\n"
				  << "Data:   Frequency\n";
    	for (std::map<int, int>::iterator it = mapOfList.begin(); it != mapOfList.end(); ++it) {
        	std::cout << it->first << ":\t";
        	for (int i=0; i < it->second; i++)
        		std::cout << "*";
        	std::cout << "\n";
    	}
    	std::cout << "\n";
	}
	
	//needs to be finished
	void pareto(){
		std::map<int, int> mapOfList = getMap();
		std::map<int, int> switchedMap;
		for (std::map<int, int>::iterator it = mapOfList.begin(); it != mapOfList.end(); ++it) {
        	switchedMap[it->second] = it->first;
    	}
    	for (std::map<int, int>::iterator it = mapOfList.begin(); it != mapOfList.end(); ++it) {
        	std::cout << it->second << ":\t";
        	for (int i=0; i < it->first; i++)
        		std::cout << "*";
        	std::cout << "\n";
    	}
    	std::cout << "\n";	
	}
	
	void clear(){
		tail = NULL;
		while (head != NULL){
			NodePtr destroy = head;
			head = head->next;
			delete destroy;
		}
	}
	
	~LinkedList(){
		tail = NULL;
		while (head != NULL){
			NodePtr destroy = head;
			head = head->next;
			delete destroy;
		}
	}
};



int main(){
	LinkedList list1;
	int num;
	int ans;
	while (true){
		ans = 0;
		std::cout << "Enter numbers to add to list, enter 0 to stop: ";
		std::cin >> num;
	
		while (num != 0){
			list1.append(num);
			std::cin >> num;
		}
		/*
		std::cout << "\nNumber of data in data set: " << list1.getSizeOf() << "\n";
		*/list1.print();/*
		list1.histogram();
		list1.getZScore(true);
		std::cout << "Range: " << list1.getRange() << "\n";
		*/
		list1.reverse();
		std::cout << "\nReversed Linked List:\n";
		list1.print();
		list1.printHead();
		list1.printTail();
		list1.clear();	
		std::cout << "Try Again? (0 for Yes, Anything for No)\n";
		std::cin >> ans;
		if (ans != 0  && isdigit(ans)) break;
		std::cout << "\n";
	}
	
	return 0;
}
