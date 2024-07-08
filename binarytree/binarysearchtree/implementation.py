from ast import Not

from numpy import insert


class Node:
    def __init__(self,data,left=None,right=None):
        self.data=data          # addresss of right children
        self.left=left          # address of left children
        self.right=right        # address of Right children          

class BinarySearchTree:
    def __init__(self):
        self.root=None
        self.size=0

    def __insert(self,root,data):
        if root==None:
            return Node(data)
        
        if data==root.data:
            return root
        elif data<root.data:
            root.left=insert(root.left,data)
            return root
        else:
            root.right=insert(root.right,data)
            return root

    def insert(self,data):
        self.root=self.insert(root,data)

    def remove(self,data):
        

    