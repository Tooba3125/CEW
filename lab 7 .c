Write a command to:
• • List all files (and subdirectories) in the home directory.
➢ ls -a ~/
• • List all files named chapter1 in the /work directory.
➢ find work/ -name ‘chapter1.*’ -type f
• • List all files beginning with memo owned by ann.
 ➢ find -name ‘memo*.*’ -type f -user ann 
• • Display the content of /etc/passwd file with as many lines at a time as the last digit of your roll number.
 ➢ more -n 3 /etc/passwd
 • • Search the current directory, look for filenames that don’t begin with a capital letter.
 ➢ find . -name ‘[a-z]*.*’ -type f
 • • Search the system for files that were modified within the last two days. 
➢ find / -mtime -2 -type f 
• • Recursively grep for your-name down a directory tree. 
➢ grep -r “Tooba Aftab”
 • • List all file names containing your roll number in the end.
➢ find / -name “*CS22020.*” -type f
 • • List files in your home folder in human readable format.
 ➢ ls ~ -h -l -s 
• • List the contents of directories /bin and /etc. 
➢ ls /bin /etc 
• • List C source files in the current directory, showing larger file first. 
➢ ls -S *.c
 • • Count all files in the current directory. 
➢ ls –l | grep “^-” | wc –l
 • • Use the pipe (|) operator to combine the output of the ls command with the grep command to filter and display only the files that contain the pattern "hello" in the current directory. 
➢ ls -l | grep “hello” *.* 
• • Create a file named sample.txt and write the output of the echo command, containing the text "Hello, Linux!" into this file 
➢ echo “Hello, Linux!” > sample.tx
