#include <iostream>
using namespace std;
class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;
    TrieNode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};
class Trie
{
public:
    TrieNode *root;
    Trie()
    {
        root = new TrieNode('\0');
    }
    void insertUtil(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }
        int index = word[0] - 'A';
        TrieNode *child;

        // present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            // absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        // calling recursion
        insertUtil(child, word.substr(1));
    }
    void insertWord(string word)
    {
        insertUtil(root, word);
    }
    bool searchUtil(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            return root->isTerminal;
        }
        int index = word[0] - 'A';
        TrieNode *child;
        if (root->children[index] != NULL)
        {

            child = root->children[index];
        }
        else
        {
            return false;
        }
        // recuresion
        return searchUtil(child, word.substr(1));
    }
    bool searchWord(string word)
    {
        return searchUtil(root, word);
    }
    bool removeWord(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            root->isTerminal = false;
        }
    }
    void deleteWord(string word)
    {
        if (searchWord(word))
        {
            removeWord(root, word);
        }
    }
};
int main()
{
    Trie *t = new Trie();
    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("TIME");
    cout << " Present or Not: " << t->searchWord("TIM") << endl;
    cout << " Present or Not: " << t->searchWord("DO") << endl;
    t->deleteWord("DO");
    cout << " Present or Not: " << t->searchWord("DO") << endl;
    return 0;
}