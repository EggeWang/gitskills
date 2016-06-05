#Solution1:
#if just want to undo one commit on github
$git reset --soft HEAD^
#HEAD^ means the last commit, the last but two commit should be HEAD^^ or HEAD~2, corresponding last n commit should be HEAD~n

#Solution2:
#firstly, remove the commit on local repository.
$git rebase -i HEAD~2
#delete the second line within the editor window that pops up.
$git push origin +branchName


#Solution3:
$git push -f origin HEAD^:master
#This just undo the push, but leaves local repository intact.
