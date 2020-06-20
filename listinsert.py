def insert(x,arr):
    if len(arr)==1 and arr[0]>x:
        arr.insert(0,x)
        return arr
    if arr[-1]<=x:
         arr.append(x)
         return arr
     
    return insert(x,arr[:-1])+[arr[-1]]
