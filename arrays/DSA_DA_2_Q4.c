#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct BST
{
    char key[20];
    struct BST *ptroleftchild;
    struct BST *ptrtorightchild;
};
struct BST *maketree(char nwkey[])
{
    struct BST *prtonwnode = malloc(sizeof(struct BST));
    strcpy(prtonwnode->key, nwkey);
    prtonwnode->ptroleftchild = NULL;
    prtonwnode->ptrtorightchild = NULL;
    return prtonwnode;
}
 struct BST *insertionofnode(struct BST *nodeoriginal, char key[20])
{
    if (nodeoriginal == NULL)
        return maketree(key);
    if (strcmp(key, nodeoriginal->key) < 0)
        nodeoriginal->ptroleftchild = insertionofnode(nodeoriginal->ptroleftchild, key);
    else if (strcmp(key, nodeoriginal->key) > 0)
        nodeoriginal->ptrtorightchild = insertionofnode(nodeoriginal->ptrtorightchild, key);
    return nodeoriginal;
}
int search(struct BST *nodeoriginal, char key[20])
{
    if (nodeoriginal == NULL)
        return 0;
    else if (strcmp(nodeoriginal->key, key) == 0)
        return 1;
    else if (strcmp(key, nodeoriginal->key) < 0)
        return search(nodeoriginal->ptroleftchild, key);
    else
        return search(nodeoriginal->ptrtorightchild, key);
}
void inordertrav(struct BST *nodeoriginal)
{
    if (nodeoriginal == NULL)
        return;
    inordertrav(nodeoriginal->ptroleftchild);
    printf("%s ", nodeoriginal->key);
    inordertrav(nodeoriginal->ptrtorightchild);
}
void printPreorder(struct BST *nodeoriginal)
{
    if (nodeoriginal == NULL)
        return;
    printf("%s ", nodeoriginal->key);
    printPreorder(nodeoriginal->ptroleftchild);
    printPreorder(nodeoriginal->ptrtorightchild);
}
void printPostorder(struct BST *nodeoriginal)
{
    if (nodeoriginal == NULL)
        return;
    printPostorder(nodeoriginal->ptroleftchild);
    printPostorder(nodeoriginal->ptrtorightchild);
    printf("%s ", nodeoriginal->key);
}
struct BST *minValueNode(struct BST *node)
{
    struct BST *current = node;
    while (current && current->ptroleftchild != NULL)
        current = current->ptroleftchild;
    return current;
}
struct BST *deleteNode(struct BST *nodeoriginal, char key[20])
{
    if (nodeoriginal == NULL)
        return nodeoriginal;
    if (strcmp(key, nodeoriginal->key) < 0)
        nodeoriginal->ptroleftchild = deleteNode(nodeoriginal->ptroleftchild, key);
    else if (strcmp(key, nodeoriginal->key) > 0)
        nodeoriginal->ptrtorightchild = deleteNode(nodeoriginal->ptrtorightchild, key);
    else
    {
        if (nodeoriginal->ptroleftchild == NULL)
        {
            struct BST *temp = nodeoriginal->ptrtorightchild;
            free(nodeoriginal);
            return temp;
        }
        else if (nodeoriginal->ptrtorightchild == NULL)
        {
            struct BST *temp = nodeoriginal->ptroleftchild;
            free(nodeoriginal);
            return temp;
        }
        struct BST *temp = minValueNode(nodeoriginal->ptrtorightchild);
        strcpy(nodeoriginal->key, temp->key);
        nodeoriginal->ptrtorightchild = deleteNode(nodeoriginal->ptrtorightchild, temp -> key);
    }
    return nodeoriginal;
}
int main()
{
    struct BST *nodeoriginal = NULL;
    nodeoriginal = insertionofnode(nodeoriginal, "Dhanush");
    insertionofnode(nodeoriginal, "Bala");
    insertionofnode(nodeoriginal, "Elumalai");
    insertionofnode(nodeoriginal, "Arun");
    insertionofnode(nodeoriginal, "Bhuvanesh");
    insertionofnode(nodeoriginal, "Himanshu");
    insertionofnode(nodeoriginal, "Garima");
    insertionofnode(nodeoriginal, "Indrajit");
    insertionofnode(nodeoriginal, "Faisal");
    insertionofnode(nodeoriginal, "James");
    printf("Inorder traversal: ");
    inordertrav(nodeoriginal);
    insertionofnode(nodeoriginal, "Harish");
    insertionofnode(nodeoriginal, "Ajay");
    printf("\nInorder traversal: ");
    inordertrav(nodeoriginal);
    deleteNode(nodeoriginal, "Bhuvanesh");
    deleteNode(nodeoriginal, "Arun");
    deleteNode(nodeoriginal, "Indrajit");
    deleteNode(nodeoriginal, "Himanshu");
    printf("\nInorder traversal: ");
    inordertrav(nodeoriginal);
    search(nodeoriginal, "Ajay");
    if (search(nodeoriginal, "Ajay") == 0)
        printf("\nAjay not found");
    else
        printf("\nAjay found");
    search(nodeoriginal, "Harish");
    if (search(nodeoriginal, "Harish") == 0)
        printf("\nHarish not found");
    else
        printf("\nHarish found");
}
