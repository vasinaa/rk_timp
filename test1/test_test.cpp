#include "../main.cpp"
#include "gtest/gtest.h"

TEST( Tree, Empty){
  std::vector<int> vec_0 ={0};
  std::vector<int> vec;
  Tree *pp = new Tree{};
  show(tree, vec);
  EXPECT_EQ(vec_0, vec);
}

TEST(Tree, element_right){
  std::vector<int> vec_0 ={0,1}
  std::vector<int> vec;
  Tree *pp =new Tree{};
  pushRight(1,tree);
  show(tree,vec);
  EXPECT_EQ(vec_0, vec);
}

TEST (Tree ,FullTree){
  std::vector<int> vec;
  std::vector<int> vec_0={4,12,2,5,9,14,3,7,10,15};
  srandom(time(nullptr));
  Tree *tree = new Tree{ 8,nullptr,nullptr};
  
  Left(4,tree);
  Right(12,tree);
  Left(2,tree);
  Right(5,tree));
  Left(9,tree));
  Right(14,tree));
  Left(3,tree);
  Right(7,tree);
  Left(10,tree);
  Right(15,tree);
  
  show(tree,vec);
  EXPECT_EQ(vec_0,vec);
}
  
