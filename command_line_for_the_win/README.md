# Moving Screenshots to Sandbox Environment

To move my local screenshots to the sandbox environment, I  used the SFTP (Secure File Transfer Protocol) command-line tool. With these steps:

## Step 1: Connect to the Sandbox Environment using SFTP
on my PowerShell:

1- sftp my_username_on_sandbox@my_host_on_sandbox
2- enter my password


## Step 2: Navigate to the directory where I  upload the screenshots


1- lcd "C:\users\occ\pictures\


## Step 3: Upload the screenshots

put "C:\users\occ\pictures\0-first_9_tasks.png" "/root/alx-system_engineering-devops/command_line_for_the_win/0-first_9_tasks.png"
put "C:\users\occ\pictures\1-next_9_tasks.png" "/root/alx-system_engineering-devops/command_line_for_the_win/1-next_9_tasks.png"
put "C:\users\occ\pictures\2-next_9_tasks.png" "/root/alx-system_engineering-devops/command_line_for_the_win/2-next_9_tasks.png"

## Step 4: Push the screenshots to GitHub

1- exit sftp session
2- go to sandbox
3- Navigate to my local Git repository:
4- Add, commit, and push my changes
