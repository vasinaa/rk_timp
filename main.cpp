#include <iostream>
#include <random>

struct tree {
  int ch=0;
  struct tree *k = nullptr;
  struct tree *left= nullptr;
  struct tree *right= nullptr;
};

void Left (int ch, tree *pp)
{
  pp->left =new tree;
  pp->left->ch =ch;
  pp->left->k= pp;
}

void Right( int ch, tree *pp)
{
  pp->right = new tree;
  pp->right->ch=ch;
  pp->right->k=pp;
}

void show ( tree *pp, std::vector<int> &vec)
{
  if (pp=0) return;
  show(pp->left,vec);
  show (pp->right,vec);
  vec.push_back(pp->ch);
}
  
