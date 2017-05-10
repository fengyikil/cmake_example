mylib = require("elua_hello")  
mylib.printf("Say: %s\n", "hello world")  
msgbox = mylib.messagebox  
  
msgbox("hello from luaopen_elua_hello")  
print("close gui")
print("end")
os.exit()