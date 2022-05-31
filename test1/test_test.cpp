#include "../main.cpp"
#include "gtest/gtest.h"

TEST( Tree, Empty){
  std::vector<int> vec_0 ={0};
  std::vector<int> vec;
  Tree *tree = new Tree{};
  show(tree, vec);
  EXPECT_EQ(vec_0, vec);
}

TEST(Tree, element_right){
  std::vector<int> vec_0 ={1,0};
  std::vector<int> vec;
  Tree *tree =new Tree{};
  Right(1,tree);
  show(tree,vec);
  EXPECT_EQ(vec_0, vec);
}


TEST (Tree ,FullTree){
  std::vector<int> vec;
  std::vector<int> vec_0={26,18,20,2,30,25,3,37,45,63,125};
  srandom(time(nullptr));
  Tree *tree = new Tree{ 26,nullptr,nullptr};
  
  Left(18,tree);
  Right(20,tree);
  
  Left(2,tree->right);
  Right(30,tree->right);
  
  Left(25,tree->left);
  Right(37,tree->left);
  
  Left(3,tree->left->right);
  Right(45,tree->left->right);
  
  Left(63,tree->left->left);
  Right(125,tree->left->left);
  
  show(tree,vec);
  EXPECT_EQ(vec_0,vec);
}
  
