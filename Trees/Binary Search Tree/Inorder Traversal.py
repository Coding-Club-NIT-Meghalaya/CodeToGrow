from collections import deque

def inOrderUsingStack(root):
    s=deque()
    curr=root
    while True:
        if curr:
            while curr:
                s.append(curr)
                curr=curr.left
        elif s:
            curr=s.pop()
            print(curr.data,end=" ")
            curr=curr.right
        else:
            break