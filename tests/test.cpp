#include "../show.cpp"
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
    addr(1, tree);
    show(tree, out);
    EXPECT_EQ(out_expect, out);
}

TEST(Tree, FullTree) {
    vector<int> out;
    vector<int> out_expect = { 250, 42, 1226, 35,-87, 18,171, 56,-35, 48, 69};


    Tree *tree = new Tree{26, nullptr, nullptr};

    addl(35, tree);
    addr(38, tree);

    addl(-35, tree->right);
    addr(69, tree->right);

    addl(42, tree->left);
    addr(18, tree->left);

    addl(-87, tree->left->right);
    addr(171, tree->left->right);

    addl(250, tree->left->left);
    addr(1226, tree->left->left);

    show(tree, out);
    EXPECT_EQ(out_expect, out);

}
