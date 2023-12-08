#!/bin/bash

if [ -f "$HOME/.bashrc" ]; then
echo "export HELLO=$HOSTNAME" >> "$HOME/.bashrc"
echo "LOCAL=$(whoami)" >> "$HOME/.bashrc"
echo "Environment variables appended to .bashrc"
gnome-terminal
else
echo ".bashrc not found"
fi






