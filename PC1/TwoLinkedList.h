//
// Created by ruben on 4/12/19.
//

#ifndef PC1_TWOLINKEDLIST_H
#define PC1_TWOLINKEDLIST_H

#include <string>
#include <iostream>

struct Node{
    int value;
    Node* next;

    Node(int val) : value(val), next(nullptr){}




};


namespace UTEC {

    class TwoLinkedList {
        Node *head1;
        Node *head2;
        Node *tail1;
        Node *tail2;
        Node *tail;

    public:
        TwoLinkedList() {
            head1 = nullptr;
            head2 = nullptr;
            tail1 = nullptr;
            tail2 = nullptr;
            tail = nullptr;
        }

        void push_back1(int Nvalue);
        void push_back2(int Nvalue);
        std::string merge(int Nvalue);
        bool is_merged();
        std::string getlist(int list);
        Node *search();
        int size(int list);
        void save(std::string root);
        void load();


    };


}

#endif //PC1_TWOLINKEDLIST_H
