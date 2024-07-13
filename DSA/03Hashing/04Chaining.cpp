//Array of Linked List Headers
/*
    Performance
    m=no.of slots in hash table
    n=no of keys to be inserted

    load factor alpha = n/m
    Expected chain length=aplha (uniformly distributed)
    Expected time to search/insert/delete=O(1+alpha)
*/

#include <iostream>
#include <list>
using namespace std;


struct MyHash {
    int BUCKET;
    list<int>* table;

    MyHash(int b) {
        BUCKET = b;
        table = new list<int>[BUCKET];
    }

    void insert(int key) {
        int i = key % BUCKET;
        table[i].push_back(key);
    }

    bool search(int key) {
        int i = key % BUCKET;
        for (auto x : table[i]) {
            if (x == key) {
                cout << key << " is found" << endl;
                return true;
            }
        }
        cout << key << " is not found" << endl;
        return false;
    }

    void remove(int key) {
        int i = key % BUCKET;
        table[i].remove(key);
    }

    ~MyHash() {
        delete[] table;
    }
};

int main() {
    MyHash mh(7);  // Creating a hash table with 7 buckets

    mh.insert(10);
    mh.insert(20);
    mh.insert(15);
    mh.insert(7);

    mh.search(10); // Output: 10 is found
    mh.search(20); // Output: 20 is found
    mh.search(5);  // Output: 5 is not found

    mh.remove(15);
    mh.search(15); // Output: 15 is not found

    return 0;
}
