::goto命令类似于多行注释，跳过
dir
goto start

echo "---------------当前目录-----------------"
dir
echo "--------------------------------"
ls
rm -r *
echo "--------------清空------------------"
ls
echo "--------------编译&&运行------------------"
cm ..\std_algorithm\ \
&& mk \
&& .\std_algorithm.exe
:start
::powershell -and cd build -and ls
::-and命令感觉不能用
::(cd build) -and (rm -r *) -and (cm ..\std_algorithm\)  -and (mk) -and (.\std_algorithm.exe)
cd build; 
rm -r *; cm ..\Chapter3\Section2\;mk;
echo "*********************-----------------开始执行程序-----------------*********************";
./string
