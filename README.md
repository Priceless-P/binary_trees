# 0x1D. C - Binary trees

This repository contains solutions to various binary tree-related tasks implemented in C.

## Tasks

### [0. New Node](task_0_new_node.c)
Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
- Creates a binary tree node.
- **Returns:** Pointer to the new node, or NULL on failure.

### [1. Insert Left](task_1_insert_left.c)
Prototype: `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`
- Inserts a node as the left child of another node.
- **Returns:** Pointer to the created node, or NULL on failure or if parent is NULL.

### [2. Insert Right](task_2_insert_right.c)
Prototype: `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`
- Inserts a node as the right child of another node.
- **Returns:** Pointer to the created node, or NULL on failure or if parent is NULL.

### [3. Delete](task_3_delete.c)
Prototype: `void binary_tree_delete(binary_tree_t *tree);`
- Deletes an entire binary tree.
- **No Return Value.**

### [4. Is Leaf](task_4_is_leaf.c)
Prototype: `int binary_tree_is_leaf(const binary_tree_t *node);`
- Checks if a node is a leaf.
- **Returns:** 1 if node is a leaf, otherwise 0. Returns 0 if node is NULL.

### [5. Is Root](task_5_is_root.c)
Prototype: `int binary_tree_is_root(const binary_tree_t *node);`
- Checks if a given node is a root.
- **Returns:** 1 if node is a root, otherwise 0. Returns 0 if node is NULL.

### [6. Pre-order Traversal](task_6_preorder_traversal.c)
Prototype: `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`
- Traverses a binary tree using pre-order traversal.
- **No Return Value.**

### [7. In-order Traversal](task_7_inorder_traversal.c)
Prototype: `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`
- Traverses a binary tree using in-order traversal.
- **No Return Value.**

### [8. Post-order Traversal](task_8_postorder_traversal.c)
Prototype: `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`
- Traverses a binary tree using post-order traversal.
- **No Return Value.**

### [9. Height](task_9_height.c)
Prototype: `size_t binary_tree_height(const binary_tree_t *tree);`
- Measures the height of a binary tree.
- **Returns:** Height of the tree. Returns 0 if tree is NULL.

### [10. Depth](task_10_depth.c)
Prototype: `size_t binary_tree_depth(const binary_tree_t *tree);`
- Measures the depth of a node in a binary tree.
- **Returns:** Depth of the node. Returns 0 if tree is NULL.

### [11. Size](task_11_size.c)
Prototype: `size_t binary_tree_size(const binary_tree_t *tree);`
- Measures the size of a binary tree.
- **Returns:** Size of the tree. Returns 0 if tree is NULL.

### [12. Leaves](task_12_leaves.c)
Prototype: `size_t binary_tree_leaves(const binary_tree_t *tree);`
- Counts the leaves in a binary tree.
- **Returns:** Number of leaves. Returns 0 if tree is NULL.

### [13. Nodes](task_13_nodes.c)
Prototype: `size_t binary_tree_nodes(const binary_tree_t *tree);`
- Counts the nodes with at least 1 child in a binary tree.
- **Returns:** Number of nodes. Returns 0 if tree is NULL.

### [14. Balance Factor](task_14_balance_factor.c)
Prototype: `int binary_tree_balance(const binary_tree_t *tree);`
- Measures the balance factor of a binary tree.
- **Returns:** Balance factor. Returns 0 if tree is NULL.

### [15. Is Full](task_15_is_full.c)
Prototype: `int binary_tree_is_full(const binary_tree_t *tree);`
- Checks if a binary tree is full.
- **Returns:** 1 if full, otherwise 0. Returns 0 if tree is NULL.
### [16. Is Perfect](16-binary_tree_is_perfect.c)
Prototype: `int binary_tree_is_perfect(const binary_tree_t *tree);`
- Checks if a binary tree is perfect.
- **Returns:** 1 if perfect, otherwise 0. Returns 0 if tree is NULL.

### [17. Sibling](17-binary_tree_sibling.c)
Prototype: `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`
- Finds the sibling of a node.
- **Returns:** Pointer to the sibling node if it exists and has a parent; otherwise, returns NULL.
- If `node` is NULL or the parent is NULL, the function returns NULL.
- If `node` has no sibling, the function returns NULL.

### [18. Uncle](18-binary_tree_uncle.c)
Prototype: `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`
- Finds the uncle of a node.
- **Returns:** Pointer to the uncle node if it exists and has a grandparent; otherwise, returns NULL.
- If `node` is NULL or has no parent or grandparent, the function returns NULL.
- If `node`'s parent has no sibling, the function returns NULL.