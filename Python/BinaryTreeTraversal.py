class Node:
    def __init__(self, info): 
        self.info = info  
        self.left = None  
        self.right = None 
        self.level = None 

    def __str__(self):
        return str(self.info) 

class BinarySearchTree:
    def __init__(self): 
        self.root = None

    def create(self, val):  
        if self.root == None:
            self.root = Node(val)
        else:
            current = self.root
            while True:
                if val < current.info:
                    if current.left:
                        current = current.left
                    else:
                        current.left = Node(val)
                        break
                elif val > current.info:
                    if current.right:
                        current = current.right
                    else:
                        current.right = Node(val)
                        break
                else:
                    break

def PreOrder(root):
    if root:
        print(str(root.info)+" ", end="") #print on same line
        PreOrder(root.left)
        PreOrder(root.right)

def InOrder(root):
    if root:
        InOrder(root.left)
        print(str(root.info)+" ", end="") #print on same line
        InOrder(root.right)

def PostOrder(root):
    if root:
        PostOrder(root.left)
        PostOrder(root.right)
        print(str(root.info)+" ", end="") #print on same line

        
#driver Code
tree = BinarySearchTree()
n = int(input("Enter number of leaf/root in the tree: "))
arr = []
for i in range(n):
    element = int(input("Enter element " + str(i+1) + " : "))
    arr.append(element)
    
for i in range(n):
    tree.create(arr[i])
    
print("")
print("  Mansi Mistry - TE E&TC A - 42")   
print("")
print("  Preorder Traversal")
PreOrder(tree.root)
print("")
print("  Inorder Traversal")
InOrder(tree.root)
print("")
print("  Postorder Traversal")
PostOrder(tree.root)
