#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include "treecontainer.h"

class TreeElement;

class BinaryTree : public TreeContainer {
private:
  TreeElement *anchor;
  int sizeCounter;
public:
  BinaryTree();
  virtual ~BinaryTree();
  virtual bool add(int v);
  virtual bool add(TreeContainer *c);
  virtual bool search(int v);
  virtual void remove(int v);
  virtual void clear();
  virtual int getSize();
  virtual void postOrder();
  virtual void preOrder();
  virtual void inOrder();
private:
  virtual void inOrder(TreeElement *node);
  virtual void preOrder(TreeElement *node);
  virtual void postOrder(TreeElement *node);
  virtual void getSize(TreeElement *node);
  virtual void internalRemove(TreeElement* node, TreeElement* parent, int v);
};

#endif
