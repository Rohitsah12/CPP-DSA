class Node:
    def __init__(self,data,left,right,parent):
        self.data=data
        self.left=left
        self.right=right
        self.parent=parent


root=Node(1,None,None,None)
node1=Node(2,None,None,root)
root.left=node1
node2=Node(3,None,None,node1)
node1.left=node2
node3=Node(4,None,None,node1)
node1.right=node3
node4=Node(5,None,None,root)
root.right=node4