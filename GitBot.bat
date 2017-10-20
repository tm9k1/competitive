@echo off
echo 1.codes
echo 2.DotC repositories
echo 3.games
echo 4.PyJAMAx64
echo 5.scripts
choice /C abcde /N /M "-> "
if %errorlevel% ==1 (call :one)
if %errorlevel% ==2 (call :two) 
if %errorlevel% ==3 (call :three) 
if %errorlevel% == 4 (call :four) 
if %errorlevel% == 5 (call :five)
sleep 10s
goto :eof

:one
cd codes 
call :treeProcess

:two
cd DotCTheProgrammingClub
call :treeProcess

:three
cd games
call :treeProcess
:four
cd PyJAMAx64
call :treeProcess

:five
cd scripts
call :treeProcess

:treeProcess
rem Do whatever you want here over the files of this subdir, for example:
echo yo man ! i'm here !!!!
for /D %%d in (*) do (
    cd %%d
    call :treeProcess    
	cd ..
)