#include "resource.hpp"
template <class T>
struct Node
{
    T Word;
    T Description;
    Node* pNext;
};

template <class T>
class List
{
public:

void add(T word,T description); //function to add a command and its descriptions
void remove (T word); // function to remove a word from the word bank
//int search(T found); // function to search for a word
void Display(int num); // function to display all the commands


private:
Node<T>* pHead;
};

template <class T>
void List<T>::add(T word, T description)
{
    Node<T>* pNode = new Node<T>;
    pNode->wordCommand = word;
    pNode->wordDescription = description;
    pNode->next = pHead;
    pHead = pNode;
}

template <class T>
void List<T>::remove(T word)
{
    Node<T>* pCur = pHead;
    Node<T>* pPrev = NULL;
    while (pCur != NULL)
    {
        if (pCur->Word == word)
        {
            if(pCur == pHead)
            {
                pHead = pCur->pNext;
            }
            eles
            {
                pPrev->pNext = pCur->pNext;
            }
            free(pCur);
            return 0;
        }
        pPrev = pCur;
        pCur = pCur->pNext;
    }
}

template <class T>
void List<T>::Display(int num)
{
    int counter = 1;
    Node<T>* pCur = pHead;
while(counter != num)
{
    cout << counter << ")" << pCur->word << endl;
    cout << pCur->Description << endl;
    ++counter;
    pCur->pNext
}
}
