class Node:
    def __init__(self,data,left=None,right=None):
        self.data=data          # addresss of right children
        self.left=left          # address of left children
        self.right=right        # address of Right children          

class BinarySearchTree:
     def __init__(self):
        self.root=None
        self.size=0
    
    