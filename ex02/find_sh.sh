#!/bin/zsh
find . -name "*.sh" | sed -E 's/(\.sh)*$//'
