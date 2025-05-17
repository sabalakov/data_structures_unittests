#include <gtest/gtest.h>  
#include "../src/bst.h"  

TEST(BSTTest, SearchExists) {  
    BinarySearchTree bst;  
    bst.push(50);  
    EXPECT_TRUE(bst.search(50));  
}  
