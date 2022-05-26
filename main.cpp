#include <iostream>
#include <random>

struct Tree {
  int ch=0;
  struct Tree *k = nullptr;
  struct Tree *left= nullptr;
  struct Tree *right= nullptr;
};

void Left (int ch, Tree *pp)
{
  pp->left =new Tree;
  pp->left->ch =ch;
  pp->left->k= pp;
}

void Right( int ch, Tree *pp)
{
  pp->right = new Tree;
  pp->right->ch=ch;
  pp->right->k=pp;
}

void show ( Tree *pp, std::vector<int> &vec)
{
  if (pp=0) return;
  show(pp->left,vec);
  show (pp->right,vec);
  vec.push_back(pp->ch);
}
  
