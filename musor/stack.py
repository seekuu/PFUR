import random as rd
class Stack:
     def __init__(self):
         self.items = []

     def push(self, item):
         self.items.append(item)

     def pop(self):
         return self.items.pop()

     def min_element(self):
         return min(self.items)

s=Stack()
        
for i in range(10):
    s.push(rd.randint(0,100))
print(s.items)
for i in range(5):
    s.pop()
print(s.items)
print(s.min_element())
