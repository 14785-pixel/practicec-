#Inserts in sorted order in a sorted list
def insert(x,arr):
    if len(arr)==0:
        arr.append(x)
        return arr
    if arr[-1]<=x:
         arr.append(x)
         return arr     
    return insert(x,arr[:-1])+[arr[-1]]




    
