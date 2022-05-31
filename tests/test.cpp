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
    addr(1, tree);
    show(tree, out);
    EXPECT_EQ(out_expect, out);
}

TEST(Tree, FullTree) {
    vector<int> out;
    vector<int> out_expect = { 150, 545, 41, -25, 125, 11, 12, -3, 81, 412, 56};


    Tree *tree = new Tree{26, nullptr, nullptr};

    addl(10, tree);
    addr(412, tree);

    addl(-3, tree->right);
    addr(81, tree->right);

    addl(41, tree->left);
    addr(11, tree->left);

    addl(-25, tree->left->right);
    addr(125, tree->left->right);

    addl(150, tree->left->left);
    addr(545, tree->left->left);

    show(tree, out);
    EXPECT_EQ(out_expect, out);

}
