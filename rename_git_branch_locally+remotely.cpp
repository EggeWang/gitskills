#Rename branch locally
$git branch -m old_branch new_branch
#Delete the old branch
$git push origin :old_branch
#Push the new branch, set local branch to track the new branch
$git push --set-upstream origin new_branch
