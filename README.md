To set up GitHub on your Linux OS, follow these steps:
1. Install Git

First, ensure that Git is installed on your Linux system.

Open a terminal and run:

bash

sudo apt update
sudo apt install git

This command installs Git on your system. For Fedora, CentOS, or Arch, use the respective package manager.
2. Configure Git

Once Git is installed, configure it with your GitHub credentials:

bash

git config --global user.name "Your GitHub Username"
git config --global user.email "Your GitHub Email"

This sets up your global Git configuration with your GitHub credentials.
3. Generate SSH Key

You can use SSH to authenticate with GitHub. First, generate an SSH key:

bash

ssh-keygen -t ed25519 -C "your_email@example.com"

When prompted, press Enter to accept the default file location, and set a passphrase if desired.
4. Add SSH Key to GitHub

After generating the SSH key, add it to your GitHub account:

bash

cat ~/.ssh/id_ed25519.pub

Copy the output of the command (your public key).

Now, log in to GitHub:

    Go to Settings > SSH and GPG keys.
    Click New SSH Key, add a title (like "My Linux Machine"), and paste the copied key.

5. Clone a Repository

You can now clone a repository using SSH:

bash

git clone git@github.com:username/repository.git

example: 
git@github.com:bandarikarthik/Linux_system_programming-.git

===============================================================================================================================================




After complete installation sample create file and save in machine 

suppose some thing deleted first need to update using 

git pull

git status

git add . 

git commit -m"changes you made need to write as comment"

git push









