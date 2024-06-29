class node:
    def __init__(self, value, left=None, right=None):
        self.left = left
        self.right = right
        self.value = value

    def display(self):
        print(f"Element is: {self.value}")

class bst:
    def __init__(self):
        self.root = None

    def insert_node(self, value):
        if self.root is None:
            self.root = node(value)
        else:
            current = self.root
            while True:
                if value < current.value:
                    if current.left is None:
                        current.left = node(value)
                        print('L')
                        break
                    current = current.left
                else:
                    if current.right is None:
                        current.right = node(value)
                        print('R')
                        break
                    current = current.right

    def preorder_traversal(self, root):
        if root is not None:
            root.display()
            if root.left is not None:
                self.preorder_traversal(root.left)
            if root.right is not None:
                self.preorder_traversal(root.right)

    def node_search(self, root, value):
        if root is None:
            return None
        if root.left is not None and root.left.value == value:
            return root
        if root.right is not None and root.right.value == value:
            return root
        found = self.node_search(root.left, value)
        if found is None:
            found = self.node_search(root.right, value)
        return found

    def delete_node(self, value):
        self.root = self._delete_node(self.root, value)

    def _delete_node(self, root, value):
        if root is None:
            return root

        if value < root.value:
            root.left = self._delete_node(root.left, value)
        elif value > root.value:
            root.right = self._delete_node(root.right, value)
        else:
            # Node with only one child or no child
            if root.left is None:
                temp = root.right
                root = None
                return temp
            elif root.right is None:
                temp = root.left
                root = None
                return temp

            # Node with two children: Get the in-order successor
            temp = self.min_value_node(root.right)
            root.value = temp.value
            root.right = self._delete_node(root.right, temp.value)

        return root

    def min_value_node(self, node):
        current = node
        while current.left is not None:
            current = current.left
        return current

def main():
    tree = bst()
    tree.insert_node(1)
    tree.insert_node(2)
    tree.insert_node(0)
    tree.insert_node(3)
    tree.preorder_traversal(tree.root)
    print("Deleting node with value 2")
    tree.delete_node(2)
    tree.preorder_traversal(tree.root)
    print("Deleting node with value 1")
    tree.delete_node(1)
    tree.preorder_traversal(tree.root)
    print("Deleting node with value 0")
    tree.delete_node(0)
    tree.preorder_traversal(tree.root)

if __name__ == "__main__":
    main()
