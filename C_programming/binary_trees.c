#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    // at this point parent is NULL
    /* This is how the above statement looks now we have a root node 98 is the key
                                          98
                                         /  \
                                       NULL NULL
    */

    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    /* here we are inserting 12 to the left and 402 to the right
       98
      /  \
    12   402
   */

    root->left->left = binary_tree_node(root->left, 6);
    /* here we are inserting 6 as a child of 12 to the left
      98
     /  \
   12   402
   / \
  6   NULL
  */
    root->left->right = binary_tree_node(root->left, 16);
    /* here we are inserting 16 as a child 12 to the right
        98
       /  \
     12   402
     / \
    6   16
    */

    root->right->left = binary_tree_node(root->right, 256);
    /* here we are inserting 256 as its child to the left
        98
       /  \
     12    402
     / \   /
    6  16 256
    */
    root->right->right = binary_tree_node(root->right, 512);
    /* here we are inserting 512 as its child to the right
       98
      /  \
    12    402
    / \   /  \
   6  16 256 512
   */

    // challenge insert the necessary lines of code that will give the following result
    /*
        98
       /  \
     12    402
     / \   /  \
    6  16 256 512
     \      \    \
      7     300  650
    */
    root->left->left->right = binary_tree_node(root->right, 7);
    root->right->left->right = binary_tree_node(root->right, 300);
    root->right->right->right = binary_tree_node(root->right, 650);

    binary_tree_print(root);

    printf("\n");
    printf("Address of the root(98): %p\n",(void*)&root); //address of root which is 98
    printf("Address of 12: %p\n",(void*)&root->left); //address of 12's parent which is 98
    printf("Address of 6's parent : %p\n",(void*)&root->left->left); //address of 402's parent which is 98
    return (0);
}

