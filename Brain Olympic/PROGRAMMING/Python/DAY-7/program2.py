

def find(yr):
    if(yr%400==0):
        return True;
    else:
        return False;        

year=int(input());
if 1900<=year<=10**5:
    print(find(year));      