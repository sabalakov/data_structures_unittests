#include <gtest/gtest.h>  
#include "../src/heap.h"  

TEST(HeapTest, PushPopMax) {  
    Heap h;  
    h.push(10);  
    h.push(30);  
    EXPECT_EQ(h.pop(), 30);  
}  
