pf = package.loadlib("elua_hello.dll","MyMessageBox")  
  
print(pf)  
pf("hello", "again")  
print("close gui")
print("end")
os.exit()