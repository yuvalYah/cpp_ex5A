#include "doctest.h"
#include "BinaryTree.hpp"
using namespace ariel;


#include <string>
#include <algorithm>
using namespace std;


TEST_CASE("check int tree"){
    BinaryTree<int> tree_of_ints;
    tree_of_ints.add_root(1)
    .add_left(1, 9)   
    .add_left(9, 3)     
    .add_right(9, 4)     
    .add_right(1, 5)    
    .add_left(1, 2);     

    int i =0;
    int arr[]={1,2,4,5,3};
    for (auto it=tree_of_ints.begin_preorder(); it!=tree_of_ints.end_preorder(); ++it) {
        CHECK((*it) == arr[i++]);
    }  
    i =0;
    int arr2[]={4,2,5,1,3};
    for (auto it=tree_of_ints.begin_inorder(); it!=tree_of_ints.end_inorder(); ++it) {
        CHECK((*it) == arr2[i++]);

    }  
    i=0;
    int arr3[]={4,5,2,3,1};
    for (auto it=tree_of_ints.begin_postorder(); it!=tree_of_ints.end_postorder(); ++it) {
        CHECK((*it) == arr3[i++]);
    }  
    i=0;

    for (int tree: tree_of_ints) {  
        CHECK(tree == arr2[i++]);

    }

}
TEST_CASE("string check"){
    BinaryTree<string> tree_of_strings;
    tree_of_strings.add_root("1")     
    .add_left("1", "9")      
    .add_left("9", "4")      
    .add_right("9", "5")    
    .add_right("1", "3")     
    .add_left("1", "2");     
    int ind =0;
    std::string s []= {"1","2","4","5","3"};
    for (auto it=tree_of_strings.begin_preorder(); it!=tree_of_strings.end_preorder(); ++it) {
       CHECK((*it) == s[ind++]);
    }  
    string s1 [] = {"4","2","5","1","3"};
    ind =0;
    for (auto it=tree_of_strings.begin_inorder(); it!=tree_of_strings.end_inorder(); ++it) {
        CHECK((*it) == s1[ind++]);

    }  
    ind =0;
    string s2 [] = {"4","5","2","3","1"};
    for (auto it=tree_of_strings.begin_postorder(); it!=tree_of_strings.end_postorder(); ++it) {
       CHECK((*it) == s2[ind++]);
    }  
    
    ind =0;
    string str="1";
    for (auto it=tree_of_strings.begin_postorder(); it!=tree_of_strings.end_postorder(); ++it) {
        CHECK((*it) == str);
    }  
    ind =0;
    string s3 [] = {"4","2","5","1","3"};
    for (const string& tree: tree_of_strings) {  
        CHECK(tree == s3[ind++]);
    }   

}