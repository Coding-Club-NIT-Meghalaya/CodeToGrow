
def morriseTraversalKthSmallest(root,k):
    curr=root
    count=1
    while curr:
        if curr.left is None:
            if count==k:
                print(curr.data)
                break
            else:
                count+=1
                curr=curr.right
        else:
            prev=curr.left
            while prev.right and prev.right !=curr:
                prev=prev.right
            if prev.right:
                if k==count:
                    print(curr.data)
                    break
                else:
                    count+=1
                    prev.right=None
                    curr=curr.right
            else:
                prev.right=curr
                curr=curr.left