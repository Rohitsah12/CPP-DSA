class Node:
    def __init__(self,value):
        self.value=value
        self.height=0
        self.balanceFactor=0
        self.left=None
        self.right=None
    
class AvlTree:
    def __init__(self):
        self.__nodesCount=0
        self.__root=0
    #returns True if the value is present in BST else returns False
    def find(self,value):
        return self.__contains(self.__root,value)
    #private method to check if the target is present in the subtree 
    def __contains(self,node,target):
        if node is None:
            return False
        if node.value==True:
            return True
        if target>node.value:
            return self.__contains(node.right,target)
        else:
            return self.__contains(node.right,target)
        
        
