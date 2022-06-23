#! /bin/bash

source /workspace/libft/aux/cheatsheet
# /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
# brew install libbsd
# sudo apt install manpages-posix
sudo apt install libbsd-dev
sudo apt install valgrind
ssh-keygen
cat ~/.ssh/id_rsa.pub
read -p "Copy key above to github.com/settings/keys"