if __name__=="__main__":
    n = int(input())
    num = str(n)
    res = [int(x) for x in str(num)]
    ls = list(res)
    print("Sum: "+str(sum(ls)))
