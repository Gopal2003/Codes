T=int(input("enter test cases= "));
if 1<=T<=1000:
    for i in range(T):
        x1=int(input("for x1= "));
        x2=int(input("for x2= "));
        y1=int(input("for y1= "));
        y2=int(input("for y2= "));
    if 1<=x1<=50 and 1<=x2<=50 and 1<=y1<=50 and 1<=y2<=50:
         if x1>x2 and x1>y1 and x1>y2:
            print(1);
         elif x2>x1 and x2>y1 and x2>y1:
            print(1);
         elif y1>x1 and y1>x2 and y1>y2:
            print(1);     
         elif y2>x1 and y2>x2 and y2>y1:
            print(1);
    elif 1<=x1<=50 and 1<=x2<=50 and 1<=y1<=50 and 1<=y2<=50:
            if x1<x2 and x1<y1 and x1<y2:
              print(-1)
            elif x2<x1 and x2<y1 and x2<y1:
             print(-1);
            elif y1<x1 and y1<x2 and y1<y2:
             print(-1);     
            elif y2<x1 and y2<x2 and y2<y1:
             print(-1);

            
                   
