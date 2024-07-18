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
        
    def insert(self,value):
        if value==None:
            return False
        if self.find(value):
            return False
        else:
            self.__root=self.__insert(self.__root,value)
            self.__nodesCount+=1
            return True
        
    def __insert(self,node,target):
        if node is None:
            return Node(target)
        if target > node.value:
            node.right=self.__insert(node.right,target)
        else:
            node.left=self.__insert(node.left,target)
        
        self.__update(node)
        return self.__balance(node)
    
    def __update(self,node):
        leftHeight,rightHeight=-1,-1
        if node.left is not None:
            leftHeight=node.left.height
         
        if node.right is not None:
            rightHeight=node.right.height

        node.height=1+max(leftHeight,rightHeight)
        node.balanceFactor=rightHeight-leftHeight
        
    def __balance(self,node):
        if node.balanceFactor == +2:
            if node.right.balanceFactor>0:
                return self.__rightRightCase(node)
            else:
                return self.__rightLeftCase(node)
        
        elif node.balanceFactor == -2:
            if node.left.balanceFactor<0:
                return self.__leftLeftCase
