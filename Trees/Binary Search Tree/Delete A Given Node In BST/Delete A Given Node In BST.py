# Return the root of the modified BST after deleting the node with value X
def inorderSuccessor(root,ans,key,parent,node):
    if root is None:
        return False
    currParent=parent[0]
    parent[0]=root
    if root.data == key :
        node[0]=root
        if root.right:
            curr=root.right
            while curr.left:
                parent[0]=curr
                curr=curr.left
            ans[0]=curr.data
        return True
    lst=inorderSuccessor(root.left,ans,key,parent,node)
    if lst is True:
        if ans[0] is None:
            parent[0]=currParent
            ans[0]=root.data
        return True
    else:
        parent[0]=root
        return inorderSuccessor(root.right,ans,key,parent,node)

def deleteNode(root,key):
    if root.data==key and root.right is None and root.left is None:
        return None

    ans=[None]
    node=[None]
    parent=[None]
    inorderSuccessor(root,ans,key,parent,node)
    if node[0] is not None:
        node[0].data=ans[0]
        if parent[0].left and parent[0].left.data==ans:
            parent[0].left=None
        else:
            parent[0].right=None
    return root