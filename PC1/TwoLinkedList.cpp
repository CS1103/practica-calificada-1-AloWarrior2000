//
// Created by ruben on 4/12/19.
//

#include "TwoLinkedList.h"
#include <string>
#include <iostream>

using namespace std;

using namespace UTEC;

int TwoLinkedList::size(int list) {
    if (list == 1) {
        int count = 0;
        Node *temp = head1;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
    }
    else if(list == 2){
        int count = 0;
        Node *temp = head2;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
    }
    else
        return 0;
}

void TwoLinkedList::push_back1(int Nvalue) {
    Node* temp = new Node(Nvalue);
    if (size(1) == 0){
        tail1 = temp;
        head1 = temp;
    }
    else{
        tail1->next = temp;
        tail1 = temp;
    }
}

void TwoLinkedList::push_back2(int Nvalue) {
    Node* temp = new Node(Nvalue);
    if (size(2) == 0){
        tail2 = temp;
        head2 = temp;
    }
    else{
        tail2->next = temp;
        tail2 = temp;
    }
}

bool TwoLinkedList::is_merged() {
    Node *aux1 = head1;
    Node *aux2 = head2;
    for (int i = 0; i < size(2); i++) {
        for (int j = 0; j < size(1); ++j) {
            if (aux1 == aux2) {
                return true;
            }
            aux1 = aux1->next;
        }
        aux2 = aux2->next;
    }
    return false;
}
string TwoLinkedList::merge(int Nvalue) {
    if (!is_merged()) {
        Node *temp = new Node(Nvalue);
        tail1->next = temp;
        tail2->next = temp;
        tail1 = temp;
        tail2 = temp;
        tail = temp;
        return "Operación exitosa";

    }
    else{return "Operación duplicada";}
}

string TwoLinkedList::getlist(int list) {
    string text = "";
    Node *aux = nullptr;
    if (list == 1) {
        aux = head1;
        for (int i = 0; i < size(1); i++) {
        text = text + to_string(aux->value) + " ";
        aux = aux->next;
    }
    }else if(list == 2){
        aux = head2;
        for (int j = 0; j < size(2);j++) {
            text = text + to_string(aux->value) + " ";
            aux = aux->next;
        }


    }else {
        if(is_merged()){
            Node *aux1 = head1;
            Node *aux2 = head2;
            for (int i = 0; i < size(2); i++) {
                for (int j = 0; j < size(1); ++j) {
                    if (aux1 == aux2) {
                        text = text + to_string(aux1->value) + " ";
                    }
                    aux1 = aux1->next;
                }
                aux2 = aux2->next;
            }
        }
    }
    return text;
}

Node *search() {}

void save(string root) {

}

void load() {}