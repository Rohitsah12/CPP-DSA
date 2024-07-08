from ast import Not
from logging import root
from tempfile import tempdir
from turtle import right

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
    def remove2(self,data):
        if root==None:
            return root
        if data<root.data:
            root.left=remove(root.left,data)
            return root
        else:
            root.right=remove(root.right,data)
            return right
        if root.data==data:
            if root.left==None and root.right==None:
                del root
                return None
            if root.right==None:
                temp=root.left
                del root
                return temp
            if root.left==None:
                temp=root.right
                del root 
                return temp
            

            

    def remove(self,data):
        self.root=remove2(self.root,data)

    