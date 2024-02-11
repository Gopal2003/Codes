#A person opened a bakery shop. He wants a computer program who generate the bill for his shop including. 
# The price of pastry is Rs 45 per piece. When it comes to GST on bakery items, GST on pastries is taxed at 18%.

T=int(input("Enter the test cases= "));
if 1<=T<=500:
    for i in range(T):
      Q=int(input());
      if 1<=Q<=200:
        totalAmount=Q*45+Q*(45*18)/100;
        print(totalAmount);

