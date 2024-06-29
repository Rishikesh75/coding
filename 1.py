class Node:
    def __init__(self, number, next=None):
        self.number = number
        self.next = next
        
class SLL:
    def __init__(self):
        self.head = None

    def last_node(self, head):
        while head.next is not None:
            head = head.next
        return head

    def insert_node(self, value):
        temp = Node(value)
        
        if self.head is None:
            self.head = temp
        else:
            insert_position = self.last_node(self.head)
            insert_position.next = temp

    def display(self):
        current = self.head
        print("Elements in the Linked-List:")
        while current is not None:
            print(f"{current.number}", end=" ")
            current = current.next
        print()  # For new line

def main():
    l_1 = SLL()
    l_1.insert_node(1)
    l_1.insert_node(2)
    l_1.insert_node(3)
    l_1.display()
    
if __name__ == "__main__":
    main()
