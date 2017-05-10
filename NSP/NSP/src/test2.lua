pf = package.loadlib("mylib.dll","MyMessageBox")  
  
print(pf)  
pf("hello", "again")  
print("close gui")
print("end")
os.exit()