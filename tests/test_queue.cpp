#include <gtest/gtest.h>  
#include "../src/queue.h"  

TEST(QueueTest, PushPop) {  
    Queue q;  
    q.push(42);  
    EXPECT_EQ(q.pop(), 42);  
}  

TEST(QueueTest, IsEmpty) {  
    Queue q;  
    EXPECT_TRUE(q.isEmpty());  
}  
