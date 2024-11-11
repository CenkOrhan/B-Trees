//
// Created by Cenk Orhan on 20.12.22.
//

#include "baum.h"
#include <stdio.h>
#include <stdlib.h>


int init_baum(baum* baum_name,int value)
{
    baum_name->value = value;
    baum_name->leftchild = NULL;
    baum_name->rightchild = NULL;
    baum_name->hight = 0;

    return 0;
}

int get_value(baum* baum_name)
{
    return baum_name->value;
}

void insert_right(baum* baum_name,baum* child)
{
    baum_name->rightchild = child;
    child->hight = baum_name->hight+1;
}

void insert_left(baum* baum_name,baum* child){
    baum_name->leftchild = child;
    child->hight = baum_name->hight+1;
}

void insert_left_right(baum* baum_name,baum* child_right,baum*child_left)
{
    baum_name->rightchild = child_right;
    baum_name->leftchild = child_left;
    child_right->hight = baum_name->hight+1;
    child_left->hight = baum_name->hight+1;
}

void printTree(struct baum *root, int height, int level) {
    if (root == NULL) {
        return;
    }
    // Rekursive Aufrufe für das rechte Kind des Knotens
    printTree(root->rightchild, height, level + 1);

    // Ausgabe von Leerzeichen vor der Zeile
    for (int i = 0; i < height - level; i++) {
        printf("   ");
    }

    // Ausgabe des Werts des Knotens
    printf("%d\n", root->value);

    // Rekursive Aufrufe für das linke Kind des Knotens
    printTree(root->leftchild, height, level + 1);

}

struct baum* reverseTree(struct baum *root) {
    if (root == NULL) {
        return NULL;
    }

    struct baum *left = root->leftchild;
    struct baum *right = root->rightchild;

    root->leftchild = reverseTree(right);
    root->rightchild = reverseTree(left);

    return root;
}

int getTreeHeight(struct baum *root) {
    if (root == NULL) {
        return 0;
    }

    int leftHeight = getTreeHeight(root->leftchild);
    int rightHeight = getTreeHeight(root->rightchild);

    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}

int height(baum* node)
{
    if(node == NULL)
    {
        return 0;
    }
    else
        return node->hight;
}

int getBalance(baum* node)
{
    if(node == NULL)
    {
        return 0;
    }
    else
        return height(node->leftchild)- height(node->rightchild);

}



