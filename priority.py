class Node:
    def __init__(self, value, priority):
        self.value = value
        self.priority = priority

class PQueue:
    def __init__(self):
        self.head = 0
        self.tail = 0
        self.li = []

    def find_location(self, head, tail, priority):
        while head <= tail:
            if self.li[head].priority > priority:
                return head
            if head == tail and self.li[head].priority < priority:
                return tail + 1
            head += 1

    def insert_node(self, value, priority):
        node = Node(value, priority)
        if self.head == 0 and self.tail == 0:
            self.li.append(node)
            self.tail += 1
        else:
            pos = self.find_location(self.head, self.tail-1, node.priority)
            self.li.insert(pos, node)
            self.tail += 1
    
    def display(self):
        for node in self.li:
            print(f"Value: {node.value}, Priority: {node.priority}")

# Example usage
pq = PQueue()
pq.insert_node(5, 1)
pq.insert_node(10, 2)
pq.insert_node(1, 0)
pq.display()
