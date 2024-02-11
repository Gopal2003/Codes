# A company XYZ Pvt Ltd, handles the parking of four wheelers at PVR. They charge Rs 50 for the 10 hours and after those 
# 10 rupees per hour.

# Help the company to make a bill system for H hours.

T=int(input("Enter the test cases= "));
if 1<=T<=200:
    for i in range(T):
      H=int(input());
      if 1<=H<=168:
        if H>10:
         bill=(H-10)*5+500;
         print(bill);
        else:
         bill2=H*50; 
         print(bill2);  
