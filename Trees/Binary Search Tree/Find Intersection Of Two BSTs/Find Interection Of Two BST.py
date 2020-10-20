
def intersectionOfll(l1,l2):
    ans=[]
    while l1 and l2:
        if l1.data==l2.data:
            ans.append(l1.data)
            l1=l1.right
            l2=l2.right
        elif l1.data<l2.data:
            l1=l1.right
        elif l2.data<l1.data:
            l2=l2.right
    return ans

def  BstIntoll(root,head):
    if root is None:
        return None
    BstIntoll(root.right,head)
    root.right=head[0]
    if head[0]:
        head[0].left=None
    head[0]=root
    BstIntoll(root.left,head)

def intersectionUtil(r1,r2):
    head1=[None]
    head2=[None]
    r1=BstIntoll(r1,head1)
    r2=BstIntoll(r2,head2)
    return intersectionOfll(head1[0],head2[0])