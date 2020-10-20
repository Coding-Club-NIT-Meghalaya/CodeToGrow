def LCA(root,n1,n2):

    if root is None:
        return root
    if root.data is n1 or root.data is n2:
        return root.data
    if root.data >n1 and root.data<n2:
        return root.data
    if root.data>n1:
        return LCA(root.left,n1,n2)
    if root.data<n2:
        return LCA(root.right,n1,n2)

def LCAUtil(root,n1,n2):
    if n1>n2:
        temp=n1
        n1=n2
        n2=temp
    return LCA(root,n1,n2)

    