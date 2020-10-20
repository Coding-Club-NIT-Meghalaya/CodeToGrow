
class Node:
    def __init__(self, data):
        self.data = data
        self.left = self.right = None

def convertBstIntoDll(root,head):
    if root is None:
        return None
    convertBstIntoDll(root.right,head)
    root.right=head[0]
    if head[0]:
        head[0].left=root
    head[0]=root
    convertBstIntoDll(root.left,head)

def mergerSortedDll(head1,head2):
    if head1 is None:
        return head2
    if head2 is None:
        return head1
    if head1.data>head2.data:
        curr=head2
        head=mergerSortedDll(head1,head2.right)
    else:
        curr=head1
        head=mergerSortedDll(head1.right,head2)
    curr.right=head
    head.left=curr
    return curr

def convertDllIntoBst(head,n):
    if  n==0 or  head is None:
        return None
    lstSize=n//2
    lst=convertDllIntoBst(head,lstSize)
    root=Node(head[0].data)
    head[0]=head[0].right
    root.left=lst
    root.right=convertDllIntoBst(head,n-lstSize-1)
    return root

def findSize(head):
    size=0
    curr=head
    while curr:
        size+=1
        curr=curr.right
    return size

def mergeTwoBst(root1,root2):
    if root1 is None:
        return root2
    if root2 is None:
        return root1
    head1=[None]
    convertBstIntoDll(root1,head1)
    head2=[None]
    convertBstIntoDll(root2,head2)
    head=mergerSortedDll(head1[0],head2[0])
    while head.left:
        head=head.left
    return convertDllIntoBst([head],findSize(head))