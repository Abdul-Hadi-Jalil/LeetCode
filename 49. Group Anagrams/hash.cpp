class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramMap;

        // Iterate over each string in the input vector
        for (const string& str : strs) {
            string sortedStr = str; // Create a copy of the original string
            sort(sortedStr.begin(), sortedStr.end()); // Sort the string
            
            // Use the sorted string as the key to group anagrams
            anagramMap[sortedStr].push_back(str); // Add the original string to the appropriate group
        }

        // Prepare the output vector
        vector<vector<string>> anagrams;
        for (const auto& entry : anagramMap) {
            anagrams.push_back(entry.second); // Add each group of anagrams to the output
        }

        return anagrams; // Return the grouped anagrams
    }
};

