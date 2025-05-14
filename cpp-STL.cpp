#include<bits/stdc++.h> /*includes all libraries*/

using namespace std;

//Pairs

void pairs() {
    pair<int,int> p = {3,4};
    pair<int,pair<int,int>> p2 = {1,{2,3}};

    cout << p2.first <<" "<< p2.second.first << '\n';

    pair<int,int> arr[] = {{1,2}, {2,3}, {3,4}};
    cout << arr[1].second << '\n';
}

int main()
{
    pairs();
    return 0;
}




//Vectors
//Maintained as Single Linked List
void vectors() {
    vector<int> v(5,10);
    vector<pair<int,int>>pv;

    v.push_back(15); //creats copy of object
    v.emplace_back(20); //faster than push_back(), sends object directly to the constructor

    pv.push_back({1,2});
    pv.emplace_back(1,2); // considers it a pair as it is sent directly as an arguement to the constructor

    vector<int>v2(v); //create a new vector v2 and copy the elements from v into it

    
    // Iterators


    //Syntax: DataStructure<data type>::iterator

    vector<int>::iterator it = v.begin(); // v.begin() represents the memory address of first element of v
    it++; //shifts to the next element's memory address
    cout << *(it) << '\n'; // '*' is used to access the element present at a memory addresss

    vector<int>::iterator it = v.end(); //v.end() represents the memory address right after the last element

    v.back(); //access the last element directly

    
    // how to print a vector

    // Method 1 (iterator)

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    // Method 2 (for each)

    for(auto it:v) { // auto assigns data type based on the expression
        cout << it << " ";
    }


    // Erase Function
    v.erase(v.begin()+1, v.begin()+3); // [start,end), Reallocates Memory Address

    // Insert
    v.insert(v.begin()+1, 3, 10); // Insert 3 instances of 10 starting from index 1

    //Size of Vector
    v.size();

    //delete last element
    v.pop_back();

    //swap 2 vectors
    v.swap(v2);

    // Erase all elements of the vector
    v.clear();

    //Check if vector is empty
    v.empty(); //returns true or false

}

//Lists
//Maintained as Double Linked List
void lists() {
    list<int>ls;
    ls.push_back(2);
    ls.push_front(5);

    ls.emplace_back(3);
    ls.emplace_front(6);

    //rest all same functions as vector
    //begin, end, swap, clear, insert, size

}

//Deque

void explain_deque() {
    deque<int>dq;

    dq.push_back(2);
    dq.push_front(3);
    dq.emplace_back(2);
    dq.emplace_front(2);

    dq.pop_back();
    dq.pop_front();

    dq.back();
    dq.front();

    //rest functions same as vector
}

//Stacks 
//Last in First Go
void explain_stack() {
    stack<int>st;

    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(4); //{4,2,1}
    st.push(6); //{6,4,2,1}

    st.top(); // 6
    st.pop(); // {4,2,1}

    st.size();
    st.empty();

    stack<int>s1,s2;
    s1.swap(s2); 
}

//Queue
//First come first serve

void explain_queue() {
    queue<int>q;

    q.push(1); //{1}
    q.push(2); //{1,2}
    q.emplace(3); //{1,2,3}

    q.back(); // 3
    q.front(); // 1
    q.pop (); //{2,3}
}

//Priority Queue - Largest element at top
//Maintained as Trees
void priorityQueue() { 
    priority_queue<int>pq; 

    pq.push(2); //{2}
    pq.push(4); //{4,2}
    pq.push(6); //{6,4,2}
    pq.emplace(5); //{6,5,4,2}

    pq.top(); // 6
    pq.pop(); //{5,4,2}

    //Minimum Heap - store minimum at top
    priority_queue<int, vector<int>, greater<int>>pq;
    pq.push(2);
    pq.push(5);
    pq.push(3);

    pq.top(); // 2
}

//Sets
//Elements are Sorted and Unique

void Sets() {
    set<int>s;

    s.insert(2);
    s.emplace(4);
    s.insert(4);
    s.insert(5);
    s.insert(3); //{2,3,4,5}

    auto it = s.find(3); //return address of 3
    auto it = s.find(6); //return address next to 5, as 6 is not present

    auto it1 = s.find(2);
    auto it2 = s.find(5);

    s.erase(it1,it2); // [start,end)

    auto it = s.upper_bound(2);
    auto it = s.lower_bound(5);

}

//Multisets
//Only Sorted, not unique

void MultiSets() {
    multiset<int>ms;

    ms.insert(2);
    ms.insert(2);
    ms.insert(2); // {2,2,2}
    ms.insert(3); // {2,2,2,3}

    ms.erase(2); //erase all 2
    ms.erase(ms.find(2)); //erase the first 2
    ms.erase(ms.find(2),next(ms.find(2),2)); //erase first and second 2
    //next moves 2 places ahead of first 2

}

//Unordered Sets
//time complexity = o(1)
void UnorderedSet() {
    unordered_set<int>un;
    //lower_bound and upper_bound do no work
    //rest all functions work same as sets
}

//Maps
//store key value pairs
//unique key in sorted order
void maps() {
    //map<key,value>name;
    map<int,int>mp;
    map<pair<int,int>,int>mpp;

    mp[1] = 2; //{1,2}
    mp[3] = 4; //{3,4}
    mpp[{1,2}] = 5; //{{1,2},5}

    mp.insert({4,5});

    for(auto it:mp) {
        cout << it.first << " " << it.second << "\n";
    }

    auto it = mp.find(3);
    cout << (*it).second;

    auto it = mp.upper_bound(2);
    auto it = mp.lower_bound(3);
}

//Multimap
//same as map expect it can store duplicate keys

void multimaps() {
    multimap<int,int>mmp;
}

//Unordered Maps
//Unique but not sorted
void unorderedMap() {
    unordered_map<int,int>;
}

//ALGORITHMS

void algo() {
    vector<int>v;
    sort(v.begin(),v.end()); //sort in ascending
    sort(v.begin(),v.end(), greater<int>()); //sort in decending
    
    bool comp();
    sort(v.begin(),v.end(), comp); //sort in decending

    int num = 7;
    cout << __builtin_popcount(num); //count no. of 1 in binary form of 7

    string s = "123";

    do{
        cout<<s<<endl;
    } while (next_permutation(s.begin(),s.end()));
    
    int max = *max_element(v.begin(),v.end());

}