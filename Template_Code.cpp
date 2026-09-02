#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Each node in the Trie
class TrieNode {
public:
    // Each node has up to 26 children (for each letter)
    TrieNode* children[26];
    
    // Marks if this node completes a word
    bool isEndOfWord;
    
    // Constructor
    TrieNode() {
        isEndOfWord = false;
        
        for (int i = 0; i < 26; i++) {
            children[i] = nullptr;
        }
    }
};

// The Trie class
class Trie {
private:
    TrieNode* root;
    
    // Stores the total number of unique words in the Trie
    int wordCount;
    
    // Helper function to find all words from a node
    // Input: current node, current word formed so far, results vector
    // Output: none (modifies results vector by reference)
    // Purpose: Recursively find all complete words starting from the given node
    void findAllWords(
        TrieNode* node,
        string currentWord,
        vector<string>& results
    ) {
        // TODO: Implement this function
    }
    
    // Helper function to delete all nodes recursively
    // Input: current node
    // Output: none
    // Purpose: Free all dynamically allocated Trie nodes
    void deleteNodes(TrieNode* node) {
        // TODO: Implement this function
    }
    
    // Helper function to count words from a specific node
    // Input: current node
    // Output: number of complete words below this node
    // Purpose: Count all words starting from this node
    int countWordsFromNode(TrieNode* node) {
        // TODO: Implement this function
        return 0;
    }
    
    // Helper function to remove a word recursively
    // Input:
    // node       -> current node
    // word       -> word to remove
    // index      -> current character index
    //
    // Output:
    // true if the current node can be deleted
    //
    // Purpose:
    // Remove the word while deleting unnecessary nodes
    bool removeHelper(
        TrieNode* node,
        string word,
        int index
    ) {
        // TODO: Implement this function
        return false;
    }

public:
    // Constructor
    // Input: none
    // Output: none
    // Purpose: Initialize the Trie with a root node
    Trie() {
        // TODO: Implement this function
    }
    
    // Destructor
    // Purpose: Free all dynamically allocated memory
    ~Trie() {
        // TODO: Implement this function
    }
    
    // Insert a word into the Trie
    // Input: word to insert
    // Output: none
    // Purpose: Add a word to the Trie by creating nodes for each character
    void insert(string word) {
        // TODO: Implement this function
    }
    
    // Search for a word in the Trie
    // Input: word to search for
    // Output: boolean indicating if the word exists
    // Purpose: Check if the complete word exists in the Trie
    bool search(string word) {
        // TODO: Implement this function
        return false; // placeholder
    }
    
    // Check if any word starts with the given prefix
    // Input: prefix to check
    // Output: boolean indicating if any word has this prefix
    // Purpose: Verify if the prefix exists in the Trie
    //          (doesn't need to be a complete word)
    bool startsWith(string prefix) {
        // TODO: Implement this function
        return false; // placeholder
    }
    
    // Get all words that start with the given prefix
    // Input: prefix to complete
    // Output: vector of strings that start with the prefix
    // Purpose: Find all complete words that begin with the given prefix
    vector<string> autocomplete(string prefix) {
        vector<string> suggestions;
        
        // TODO: Implement this function
        
        return suggestions;
    }
    
    // Remove a word from the Trie
    // Input: word to remove
    // Output: none
    // Purpose: Delete a complete word from the Trie
    //
    // Example:
    // Insert: "apple", "app"
    // Remove: "apple"
    // "app" should still exist
    void remove(string word) {
        // TODO: Implement this function
    }
    
    // Count the total number of words in the Trie
    // Input: none
    // Output: number of words
    // Purpose: Return how many unique complete words exist in the Trie
    int countWords() {
        // TODO: Implement this function
        return 0;
    }
    
    // Count how many words start with a given prefix
    // Input: prefix
    // Output: number of words
    // Purpose: Count all complete words that begin with the prefix
    int countWordsWithPrefix(string prefix) {
        // TODO: Implement this function
        return 0;
    }
    
    // Get all words stored in the Trie
    // Input: none
    // Output: vector containing all words
    // Purpose: Return every complete word stored in the Trie
    vector<string> getAllWords() {
        vector<string> words;
        
        // TODO: Implement this function
        
        return words;
    }
    
    // Find the longest prefix of a given word that exists in the Trie
    // Input: word
    // Output: longest valid prefix
    //
    // Example:
    // Trie contains:
    // "apple"
    // "application"
    //
    // Input: "appreciate"
    // Output: "app"
    string longestPrefixOf(string word) {
        // TODO: Implement this function
        return "";
    }
    
    // Check whether the Trie contains any words
    // Input: none
    // Output: true if empty, false otherwise
    // Purpose: Check if the Trie has no stored words
    bool isEmpty() {
        // TODO: Implement this function
        return true; // placeholder
    }
    
    // Remove all words from the Trie
    // Input: none
    // Output: none
    // Purpose: Completely clear the Trie
    void clear() {
        // TODO: Implement this function
    }
    
    // Get autocomplete suggestions with a maximum limit
    // Input:
    // prefix -> prefix to search for
    // limit  -> maximum number of suggestions
    //
    // Output:
    // vector containing at most 'limit' suggestions
    //
    // Example:
    // autocomplete("app", 2)
    // could return:
    // apple
    // application
    vector<string> autocomplete(string prefix, int limit) {
        vector<string> suggestions;
        
        // TODO: Implement this function
        
        return suggestions;
    }
};

// Main function
// Input: none
// Output: integer return code
// Purpose: Program entry point, run tests and interactive demo
int main() {
    cout << "=== TRIE DATA STRUCTURE IMPLEMENTATION ===" << endl;
    cout << "Testing all Trie functionalities..." << endl;
    
    Trie trie;
    
    // ============================================================
    // TEST 1: BASIC INSERTION AND SEARCH
    // ============================================================
    
    cout << "\n1. Testing basic insertion and search:" << endl;
    cout << "======================================" << endl;
    
    vector<string> words = {
        "apple",
        "banana",
        "orange",
        "grape",
        "kiwi"
    };
    
    for (const string& word : words) {
        trie.insert(word);
        cout << "Inserted: " << word << endl;
    }
    
    // Test search for existing words
    for (const string& word : words) {
        bool found = trie.search(word);
        
        cout << "Search '" << word << "': "
             << (found ? "FOUND" : "NOT FOUND")
             << endl;
    }
    
    // Test search for non-existing words
    vector<string> nonExisting = {
        "app",
        "ban",
        "ora",
        "graph",
        "kiwis"
    };
    
    for (const string& word : nonExisting) {
        bool found = trie.search(word);
        
        cout << "Search '" << word << "': "
             << (found ? "FOUND" : "NOT FOUND")
             << " (expected: NOT FOUND)"
             << endl;
    }
    
    // ============================================================
    // TEST 2: PREFIX CHECKING
    // ============================================================
    
    cout << "\n2. Testing prefix checking:" << endl;
    cout << "==========================" << endl;
    
    vector<string> prefixes = {
        "app",
        "ban",
        "ora",
        "grap",
        "k"
    };
    
    for (const string& prefix : prefixes) {
        bool hasPrefix = trie.startsWith(prefix);
        
        cout << "Prefix '" << prefix << "': "
             << (hasPrefix ? "EXISTS" : "DOESN'T EXIST")
             << endl;
    }
    
    vector<string> nonPrefixes = {
        "x",
        "yield",
        "zed",
        "micro",
        "nano"
    };
    
    for (const string& prefix : nonPrefixes) {
        bool hasPrefix = trie.startsWith(prefix);
        
        cout << "Prefix '" << prefix << "': "
             << (hasPrefix ? "EXISTS" : "DOESN'T EXIST")
             << " (expected: DOESN'T EXIST)"
             << endl;
    }
    
    // ============================================================
    // TEST 3: AUTOCOMPLETE
    // ============================================================
    
    cout << "\n3. Testing autocomplete functionality:" << endl;
    cout << "======================================" << endl;
    
    vector<string> testPrefixes = {
        "a",
        "b",
        "o",
        "g",
        "k",
        "ap",
        "ban",
        "ora",
        "gr",
        "ki"
    };
    
    for (const string& prefix : testPrefixes) {
        vector<string> suggestions = trie.autocomplete(prefix);
        
        cout << "Autocomplete for '" << prefix << "': ";
        
        if (suggestions.empty()) {
            cout << "No suggestions found";
        }
        else {
            for (size_t i = 0; i < suggestions.size(); i++) {
                if (i > 0)
                    cout << ", ";
                
                cout << suggestions[i];
            }
        }
        
        cout << endl;
    }
    
    // ============================================================
    // TEST 4: EDGE CASES
    // ============================================================
    
    cout << "\n4. Testing edge cases:" << endl;
    cout << "======================" << endl;
    
    // Empty string tests
    bool emptySearch = trie.search("");
    
    cout << "Search empty string: "
         << (emptySearch ? "FOUND" : "NOT FOUND")
         << " (expected: NOT FOUND)"
         << endl;
    
    bool emptyPrefix = trie.startsWith("");
    
    cout << "Starts with empty prefix: "
         << (emptyPrefix ? "EXISTS" : "DOESN'T EXIST")
         << " (expected: EXISTS)"
         << endl;
    
    vector<string> emptySuggestions = trie.autocomplete("");
    
    cout << "Autocomplete for empty string: ";
    
    if (emptySuggestions.empty()) {
        cout << "No suggestions found";
    }
    else {
        for (size_t i = 0; i < emptySuggestions.size(); i++) {
            if (i > 0)
                cout << ", ";
            
            cout << emptySuggestions[i];
        }
    }
    
    cout << " (expected: all words)" << endl;
    
    // ============================================================
    // TEST 5: ADDITIONAL WORDS
    // ============================================================
    
    cout << "\n5. Testing with additional words:" << endl;
    cout << "================================" << endl;
    
    vector<string> additionalWords = {
        "application",
        "appetizer",
        "banister",
        "bandana",
        "oracle",
        "grapefruit"
    };
    
    for (const string& word : additionalWords) {
        trie.insert(word);
        
        cout << "Inserted: "
             << word
             << endl;
    }
    
    // Test search for new words
    for (const string& word : additionalWords) {
        bool found = trie.search(word);
        
        cout << "Search '" << word << "': "
             << (found ? "FOUND" : "NOT FOUND")
             << endl;
    }
    
    // Test autocomplete with new words
    vector<string> newPrefixes = {
        "app",
        "ban",
        "ora",
        "gra"
    };
    
    for (const string& prefix : newPrefixes) {
        vector<string> suggestions = trie.autocomplete(prefix);
        
        cout << "Autocomplete for '"
             << prefix
             << "': ";
        
        if (suggestions.empty()) {
            cout << "No suggestions found";
        }
        else {
            for (size_t i = 0; i < suggestions.size(); i++) {
                if (i > 0)
                    cout << ", ";
                
                cout << suggestions[i];
            }
        }
        
        cout << endl;
    }
    
    // ============================================================
    // TEST 6: CASE SENSITIVITY
    // ============================================================
    
    cout << "\n6. Testing case sensitivity:" << endl;
    cout << "============================" << endl;
    
    trie.insert("Hello");
    trie.insert("WORLD");
    
    vector<string> caseWords = {
        "hello",
        "Hello",
        "WORLD",
        "world"
    };
    
    for (const string& word : caseWords) {
        bool found = trie.search(word);
        
        cout << "Search '" << word << "': "
             << (found ? "FOUND" : "NOT FOUND")
             << endl;
    }
    
    // ============================================================
    // TEST 7: COUNT WORDS
    // ============================================================
    
    cout << "\n7. Testing word counting:" << endl;
    cout << "=========================" << endl;
    
    cout << "Total words: "
         << trie.countWords()
         << endl;
    
    cout << "Words starting with 'app': "
         << trie.countWordsWithPrefix("app")
         << endl;
    
    cout << "Words starting with 'ban': "
         << trie.countWordsWithPrefix("ban")
         << endl;
    
    cout << "Words starting with 'xyz': "
         << trie.countWordsWithPrefix("xyz")
         << endl;
    
    // ============================================================
    // TEST 8: GET ALL WORDS
    // ============================================================
    
    cout << "\n8. Testing getAllWords:" << endl;
    cout << "======================" << endl;
    
    vector<string> allWords = trie.getAllWords();
    
    cout << "All words in Trie:" << endl;
    
    for (const string& word : allWords) {
        cout << "- " << word << endl;
    }
    
    // ============================================================
    // TEST 9: LONGEST PREFIX
    // ============================================================
    
    cout << "\n9. Testing longestPrefixOf:" << endl;
    cout << "==========================" << endl;
    
    vector<string> testWords = {
        "application",
        "appreciate",
        "banana",
        "band",
        "grapefruit",
        "unknown"
    };
    
    for (const string& word : testWords) {
        cout << "Longest prefix of '"
             << word
             << "': "
             << trie.longestPrefixOf(word)
             << endl;
    }
    
    // ============================================================
    // TEST 10: REMOVE WORDS
    // ============================================================
    
    cout << "\n10. Testing remove:" << endl;
    cout << "==================" << endl;
    
    cout << "Before removing 'apple': "
         << (trie.search("apple") ? "FOUND" : "NOT FOUND")
         << endl;
    
    trie.remove("apple");
    
    cout << "After removing 'apple': "
         << (trie.search("apple") ? "FOUND" : "NOT FOUND")
         << endl;
    
    // Make sure other words still exist
    cout << "Checking 'application': "
         << (trie.search("application") ? "FOUND" : "NOT FOUND")
         << endl;
    
    cout << "Checking 'appetizer': "
         << (trie.search("appetizer") ? "FOUND" : "NOT FOUND")
         << endl;
    
    // ============================================================
    // TEST 11: AUTOCOMPLETE WITH LIMIT
    // ============================================================
    
    cout << "\n11. Testing autocomplete with limit:" << endl;
    cout << "======================================" << endl;
    
    vector<string> limitedSuggestions =
        trie.autocomplete("app", 2);
    
    cout << "Maximum 2 suggestions for 'app': ";
    
    for (size_t i = 0; i < limitedSuggestions.size(); i++) {
        if (i > 0)
            cout << ", ";
        
        cout << limitedSuggestions[i];
    }
    
    cout << endl;
    
    // ============================================================
    // TEST 12: EMPTY CHECK
    // ============================================================
    
    cout << "\n12. Testing isEmpty:" << endl;
    cout << "===================" << endl;
    
    cout << "Is Trie empty? "
         << (trie.isEmpty() ? "YES" : "NO")
         << endl;
    
    // ============================================================
    // TEST 13: CLEAR
    // ============================================================
    
    cout << "\n13. Testing clear:" << endl;
    cout << "=================" << endl;
    
    cout << "Words before clear: "
         << trie.countWords()
         << endl;
    
    trie.clear();
    
    cout << "Words after clear: "
         << trie.countWords()
         << endl;
    
    cout << "Is Trie empty after clear? "
         << (trie.isEmpty() ? "YES" : "NO")
         << endl;
    
    cout << "\n=== ALL TESTS COMPLETED ===" << endl;
    
    return 0;
}