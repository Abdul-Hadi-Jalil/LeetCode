#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <utility>

using std::unordered_map;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

vector<int> topKFrequent(vector<int>& nums, int k) {
    // create unordered_map to store the frequency of each element
    unordered_map<int, int> freq;
    for(const auto& n: nums){
        freq[n]++;
    }

    // creating a vector of pairs to store the element with its frequency
    vector<std::pair<int, int>> pairs;
    for(const auto& f: freq){
        pairs.push_back({f.first, f.second});
    }

    // sorting the pairs on the basis of frequency (highest frequency comes first) using a lambda function.
    std::sort(pairs.begin(), pairs.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b){
        return a.second > b.second;
    });

    // creating a vector to store the top k elements and return them
    vector<int> firstK;
    for(int i = 0; i < k; i++){
        firstK.push_back(pairs[i].first);
    }

    return firstK;
}

int main(){
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;

    // Get the top k frequent elements
    vector<int> topkElements = topKFrequent(nums, k);

    // Print the top k frequent elements
    cout << "The top " << k << " frequent elements in the array are: ";
    for(const auto& n: topkElements){
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
