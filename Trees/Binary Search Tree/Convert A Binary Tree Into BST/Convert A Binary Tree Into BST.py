def inOrder(root,arr):
    if root is None:
        return
    inOrder(root.left,arr)
    arr.append(root.data)
    inOrder(root.right,arr)
    return

def convetIntoBST(root,arr,i):
    if root is None or i[0]>=len(arr):
        return
    convetIntoBST(root.left,arr,i)
    root.data=arr[i[0]]
    i[0]+=1
    convetIntoBST(root.right,arr,i)

def convertBinaryTreeIntoBst(root):
    arr=[]
    inOrder(root,arr)
    print(arr)
    i=[0]
    convetIntoBST(root,sorted(arr),i)

