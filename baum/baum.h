//
// Created by Cenk Orhan on 20.12.22.
//

#ifndef BAUM_BAUM_H
#define BAUM_BAUM_H

typedef struct baum
{
    int value;
    struct baum* rightchild;
    struct baum* leftchild;
    int hight;

}baum;

/**
 *
 * @param baum_name,value
 * init a struct baum with a value; pionters are NULL
 * @return 0 if init is paste; return -1 if init failed;
 */
int init_baum(baum* baum_name,int value);
int get_value(baum* baum_name);
void insert_right(baum* baum_name,baum* child);
void insert_left(baum* baum_name,baum* child);
void insert_left_right(baum* baum_name,baum* child,baum*child2);
void printTree(struct baum *root, int height, int level);
struct baum* reverseTree(struct baum *root);
int getTreeHeight(struct baum *root);
int height(baum* node);
int getBalance(baum* node);



#endif //BAUM_BAUM_H
