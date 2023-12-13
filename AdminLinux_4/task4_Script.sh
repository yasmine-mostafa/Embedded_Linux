#!/bin/bash

UserName="Yasmine"
GroupName="Mostafa"

#check is user exists
if id -u "$UserName" >/dev/null 2>&1; then
  echo "User $UserName already exists"
else
  sudo useradd $UserName
  echo "User $UserName added"
fi

#check if group exists
if getent group "$GroupName" >/dev/null; then
  echo "Group $GroupName already exists"
else
  sudo groupadd $GroupName
  echo "Group $GroupName added"
fi

#check if user is already in the group
if id -nG "$UserName" | grep -qw "$GroupName"; then
    echo "User $UserName is already in group $GroupName"
else
    sudo usermod -aG "$GroupName" "$UserName"
    echo "User $UserName added to group $GroupName"
fi

