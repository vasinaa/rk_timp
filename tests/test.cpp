#include "../reverse.cpp"
#include "gtest/gtest.h"

using namespace std;

TEST(Tree, Empty) {
    vector<int> out_expect = {0};
    vector<int> out;
    Tree *tree = new Tree{};
    show(tree, out);
    EXPECT_EQ(out_expect, out);
}


TEST(Tree, element_right) {
    vector<int> out_expect = {1, 0};
    vector<int> out;
    Tree *tree = new Tree{};
    pRight(1, tree);
    show(tree, out);
    EXPECT_EQ(out_expect, out);
}

TEST(Tree, FullTree) {
    vector<int> out;
    vector<int> out_expect = { 125,538, 2, 115, 10, 18, 3, 56, 17, 45, 26};


    Tree *tree = new Tree{26, nullptr, nullptr};

    pLeft(17, tree);
    pRight(45, tree);

    pLeft(3, tree->right);
    pRight(56, tree->right);

    pLeft(10, tree->left);
    pRight(18, tree->left);

    pLeft(2, tree->left->right);
    pRight(115, tree->left->right);

    pLeft(125, tree->left->left);
    pRight(538, tree->left->left);

    show(tree, out);
    EXPECT_EQ(out_expect, out);

}
