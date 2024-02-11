# Deepti was to select a slip in a lottery game. On each slip a number N is written. 
# She will win the amount according to number written on slip chosen. Help her find the amount.
T=int(input());
if 1<=T<=50:
    for i in range(T):
      N=int(input());
      if 1<=N<=500:
        amount=N*5;
        print(amount);