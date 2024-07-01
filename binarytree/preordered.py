def preOreded(node):
    print(node.data)
    preOreded(node.left)
    preOreded(node.right)