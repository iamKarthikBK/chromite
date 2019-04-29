#!/usr/bin/env bash

# Setup the git hooks
echo "Setting up git-hooks"
echo "===================="

echo "Launched from" $(pwd)
echo ""

echo "Setting up post-commit"
ln -s -f ../../.git_hooks/post-commit ./.git/hooks/post-commit
chmod a+x ./.git/hooks/post-commit
