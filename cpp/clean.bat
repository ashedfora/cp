@echo off
del *.exe
del *.o
set /p name="Files to be resetted: "
if %name%==all (
copy mT.cpp a.cpp
copy mT.cpp b.cpp
copy mT.cpp c.cpp
copy mT.cpp d.cpp
copy mT.cpp e.cpp
copy mT.cpp f.cpp
copy mT.cpp brute.cpp
copy mT.cpp input_generator.cpp
copy mT.cpp test.cpp
) else copy mT.cpp %name%.cpp
pause