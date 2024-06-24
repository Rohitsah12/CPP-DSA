from curses.ascii import isupper


class Entry:
    def __init__(self,key,value):
        self.key=key
        self.value=value
        self.hash=hash(key)

class HT:
    def __init__(self):
        self.size=0
        self.capacity=5
        self.data=[[] for i in range(self.capacity)]

    def getSize(self):
        return self.size

    '''insert(k,v)
    1) find index to store this key[0,cap-1]
    2) check if the key is already present
    int data[index] ---> present or absent
    
    if(present) uodate the value
    else append it in data[index]'''
    
    def insert(key,value):
        entry=Entry(key,value)
        index=entry.hash % self.capacity
        isUpdated=False
        for i in range(self.data[index]) :
            if(self.data[index][i].key==key):
                self.data[index][i]=entry
                isUpdated=True
                break 
        if not isUpdated:
            self.data[index].append(entry)

    def remove(key):

    def get(key):
