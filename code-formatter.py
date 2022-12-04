import os
cpp_extensions = (".cpp",".hpp")
for root, dirs, files in os.walk(os.getcwd()):
	for file in files:
		if file.endswith(cpp_extensions):
			os.system("clang-format.exe -i --style=Chromium " + root + "/" + file)
