**Delete Local Branch**
```
$git branch -d <branch_name>
$git branch -D <branch_name>
```
The ```-d``` option is an alias for ```--delete```, Which only deletes the branch if it has already bean fully merged in its upstream branch. You could also use ```-D```, which is an alias for ```--delete --force```, which deletes the branch "irrespective of its merged status."

**Delete Remote Branch**
```
$git push origin --delete <branch_name>
$git push origin :<branch_name>
```

**After delete branch**
Don't forget to do below command on other machine after deleting the remote branch on the server:
```
$git fetch --all --prune
```
```
