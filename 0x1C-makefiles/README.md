#  0x1C. C - Makefiles 😄
---
- `Make` is a build automation tool that is used to manage dependencies and build targets in a software project. It automates the process of compiling and linking source code to create executable binaries. `Makefiles` are configuration files used by the Make tool to specify how the project should be built.
- Makefiles are used when you have a project with multiple source files, and changes to one file should trigger the recompilation of dependent files. They help automate the build process and ensure that only the necessary files are recompiled, saving time and resources.
- `make` utility comes in handy when you want to run or update a task when certain files are updated.
-  It requires a file `makefile` that defines the task to be executed.
- Example of a makefile
```makefile
say_hello:
	echo "Hello world"
```
_`Say_hello `_  behaves like a function name . This is called the __target__
The _prerequisites_ or _dependencies_ follow the target.
The command _`"echo hello world"`_ is called the __recipe__
The syntax of a typical rule:
```make
Target: prerequisites/dependencies
<TAB>	recipe
```
- Add `@` before `echo` to suppress echoing
- Only the first target in the makefile is the default target. To override the behaviour  we use a phony target __`.DEFAULT_GOAL := `__, it only runs only one target at a time.
- The phony target __`all : `__ runs all included
**Common/Useful Rules ❗❗:** 
- `.PHONY`: Specifies targets that don't represent files (e.g., clean, all).
- `clean`: Removes generated files.
- `all`: The default target that builds the complete project.
- `install`: Installs the built software.
- `test`: Runs automated tests.
