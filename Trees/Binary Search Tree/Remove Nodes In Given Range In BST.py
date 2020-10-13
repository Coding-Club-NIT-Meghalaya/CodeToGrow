from collections import deque
# Do Inorder Traversal
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

def removeNodeOfGivenRange(root,min,max,parent):
    if root is None:
        return
    if root.data>min and root.data<max:
        removeNodeOfGivenRange(root.left,min,max,root)
        removeNodeOfGivenRange(root.right,min,max,root)
    elif root.data<min:
        if parent:
            if parent.left and parent.left.data==root.data:
                parent.left=root.right
            else:
                parent.right=root.right
        removeNodeOfGivenRange(root.right,min,max,parent)
    elif root.data>max:
        if parent:
            if parent.left and parent.left.data==root.data:
                parent.left=root.left
            else:
                parent.right=root.left
        removeNodeOfGivenRange(root.left,min,max,parent)