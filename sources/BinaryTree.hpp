#pragma once
#include <iostream>
#include <cassert>
#include <cstdlib>

namespace ariel { 
    template <typename T> 
    class BinaryTree 
    {
        T _buf[100];
        public:
            BinaryTree(){}
            ~BinaryTree(){
                std::cout <<"disactor\n";
            }
            BinaryTree<T>& add_root(T val){
                return *this;
            }
            BinaryTree<T>& add_left(T dad, T child){
                return *this;
            }
            BinaryTree<T>& add_right(T dad, T child){
                return *this;
            }
            using iterator = T*; 
            iterator begin() {
                return _buf;
            }
            iterator end() {
                return _buf+3;
            }
            iterator begin_preorder() {
                return _buf;
            }
            iterator end_preorder() {
                return _buf+3;
            }

            iterator begin_inorder() {
                return _buf;
            }
            iterator end_inorder() {
                return _buf+3;
            }

            iterator begin_postorder() {
                return _buf;
            }
            iterator end_postorder() {
                return _buf+3;
            }

            // const_iterator begin() const {
            //     return _buf;
            // }
            // const_iterator end() const {
            //     return _buf+_size;
            // }

            // friend std::ostream& operator<< (std::ostream& os, const BinaryTree& c);



    };
    template <typename T> 
    std::ostream& operator<< (std::ostream& out, const BinaryTree<T>& BinaryTree) {
        // for (int i=0; i<n; ++i)
        //     out << thearray[i] << " ";
        return out;
    }
}