##Rename branch name in GitHub both locally and remotely

###Step 1:
Rename branch locally
```
git branch -m old_branch new_branch
git branch -M old_branch new_branch #If <newbranch> exists, -M must be used to force the rename to happen
```
###Step 2:
Delete the old branch remotely
```
git push origin :old_branch
```
###Step 3:
Push the new branch to remote repository, set local branch to track the new remote
```
git push --set-upstream origin new_branch
```
