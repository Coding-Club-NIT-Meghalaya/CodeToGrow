
def findInorderPredecessorSuccessor(root,prev,s,p,key):
    if root is None:
        return
    if key<root.data:
        findInorderPredecessorSuccessor(root.left,prev,s,p,key)
    elif root.data==key:
        p[0]=prev[0]
    if prev[0] and prev[0].data==key:
        s[0]=root
    prev[0]=root
    if key>root.data:
        findInorderPredecessorSuccessor(root.right,prev,s,p,key)