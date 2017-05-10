mylib = require("mylib")  
mylib.printf("Say: %s\n", "hello world")  
msgbox = mylib.messagebox  
  
msgbox("hello from luaopen_mylib")  
print("close gui")
print("end")
os.exit()