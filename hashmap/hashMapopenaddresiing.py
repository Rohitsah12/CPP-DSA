class Entry:
    def __init__(self,key,value):
        self.key=key
        self.value=value
        self.hash=hash(key)

class HT:
    def __init__(self):
        self.size=0
        self.capacity=12
        self.data=[None for i in range(self.capacity)]
    def prob(self,x):
        return 5*x #p(x)=5x
    def getSize(self):
        return self.size

    
    def insert(self,key,value):
        entry=Entry(key,value)
        index=entry.hash % self.capacity
        i=0
        while(True):
            ind=index+self.prob(i) % self.capacity
            if(self.data[ind]==None):
                self.data[ind]=entry
                break
            i+=1


    def remove(key):
        index =hash(key)% self.capacity
        for i in range(len(self.data[index])):
            if(self.data[index][i].key==key):
                del self.data[index][i]
                self.size-=1
            else:
                print("Not present")

    def get(self, key):
        index= hash(key) % self.capacity
        for i in range(len(self.data[index])):
            if(self.data[index][i].key==key):
                return self.data[index][i].value
            else:
                return None

    def print(self):
        for i in range(self.capacity) :
            print("bucket:"  + str(i) + ":" )
            for e in self.data[i]:
                print(e,sep="->")
ht=HT()
ht.print()