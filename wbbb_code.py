def ctw(ch):
    ret=""
    for i in range(8):
        if ord(ch)&(1<<i):
            ret+="比歪"
        else:
            ret+="卜巴"
    return ret[::-1]

def wtc(string):
    ret=0
    for i in range(8):
        ret=ret*2
        if string[i*2] =="歪":
            ret+=1
    return ret
def encode(string):
    ret=""
    for i in string:
        ret+=ctw(i)
    return ret


def decode(string):
    ret=""
    if len(string)%16 != 0:
        return "Error"
    for i in range(int(len(string)/16)):
        ret+=chr(wtc(string[i*16:i*16+15]))
    return ret 
