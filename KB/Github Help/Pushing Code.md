TLDR: MAKE SURE TO PUSH YOUR NEW BRANCH UPSTREAM AND CREATE A PR
==git status==
==git add .  OR git add file-name==
==git commit -m "enter a short description of your changes"==
==git push --set-upstream origin name-of-branch==
OPEN THE PR ON GITHUB & MERGE & HANDLE ANY CONFLICTS ;P

###### **CHECKING THE STATUS OF YOUR REPO**
before doing anything, you can check the status of your repo to see what files are modified, deleted, added, created, etc., and if your branch is currently up to date with the remote branch in the case that you did git fetch earlier, but did not do git merge after for example.

==git status==

importantly, git status shows you the status of all the files you've edited or done recent work on, which makes it a very useful tool for you to cherry pick exactly which files you would like to "stage" & eventually commit

Some sources, add anything useful here if it can help!
https://www.geeksforgeeks.org/git/git-status/

###### **STAGING YOUR CHANGES**
when you're working locally, even if you "save" your files in whatever editor or environment you're using, these changes are not automatically saved to your git repo. The way to make your repo aware of & save these local changes is through git add, which "stages" your changes

if you're very confident and recognize all of the files you've worked on, you can run
==git add .==
this will stage all the local changes you've made

but I would recommend staging your files individually, i.e. going through the files listed after running git status one by one to be sure that these are the files you'd like to save
==git add file-name-1==
==git add file-name-2==

Some sources for git add & git commit
https://stackoverflow.com/questions/7564841/concept-of-git-tracking-and-git-staging
https://stackoverflow.com/questions/19576116/how-to-add-multiple-files-to-git-at-the-same-time


importantly, you can also do git add . OR git add filewhatever, multiples times, think of git add like saving your file or your work, it's good to do every once in a while
###### **COMMITTING YOUR CHANGES**
now that you've worked on your files for a while, and potentially done a few git adds, perhaps even on the same files multiple times, it is time to git commit. 

Git commit is like committing to one overall version of all of the local changes you've saved so far. I.e., all the changes made in your previously git added files will be committed and your branch will now be updated with all the staged changes you've made through all the git adds. 

==git commit -m "updated files 1 & 2"==
This commit will take all the git added changes and update your branch with them!
This is helpful to do often with important changes you know you want to have. 
So in the future if you need to go back to a previous version of your code or you fuck up and ruin everything in the repo, you can easily access a previous commit, kind of like falling back on a previopus "checkpoint" in your work.

Some sources for git add & git commit
https://stackoverflow.com/questions/7564841/concept-of-git-tracking-and-git-staging
https://stackoverflow.com/questions/19576116/how-to-add-multiple-files-to-git-at-the-same-time


###### **PUSHING YOUR CODE**
so now that we've maybe gone through multiple git adds, and perhaps even various git commits to save, describe & document all of our changes, we would like to PUSH our code to a remote repository for others to access!

fyi, there can technically be multiple remote repositories for a project, just called remotes, though for our projects the only remote we are going to be working with is the remote on github. 

to push your code run; this requires you to have committed changes already
==git push==

Sources for git push
https://stackoverflow.com/questions/2765421/how-do-i-push-a-new-local-branch-to-a-remote-git-repository-and-track-it-too

###### **PUSHING UPSTREAM**
you may notice that git push did not work, since if you followed the advice in the [[Read Me | READ ME]] document, you should have created a different local branch to do your work on by using [[Managing Separate Branches|git checkout]].
Pushing your code is like taking your version of the branch and updating the remote version of the branch with it. I.e., you are pushing / imposing your changes from your branch to another branch. 

This means that if there is not a remote branch equivalent for your local branch, something known as tracking, if your local branch is not currently tracking a remote branch, there is nothing in the remote repo for you to be able to push to...

We can work around this by simply creating the remote branch we need to push to, and also push our commit / changes to it at the same time through the command

==git push --set-upstream origin name-of-branch==

Sources for git push upstream
https://stackoverflow.com/questions/2765421/how-do-i-push-a-new-local-branch-to-a-remote-git-repository-and-track-it-too
###### **CREATING A PULL REQUEST**
You may notice that after pushing your code upstream that git automatically offers to create a PR for you. 

This is actually very good, and you should open the link that it shown in your terminal, and proceed to github. This will open a Pull Request / PR, for you!

Once there, you are able to select the branch that you would like to merge your branch & changes into. 
- Choose the corresponding one for your needs.
- Check the commits you've made in the commits tab
- Check all the files you've edited in the files tab
- When you're ready to merge, press merge! 

Sources for PR
https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/creating-a-pull-request
in this example, I think the PR hasn't been created yet, but still useful to see it!

Some sources for git add & git commit
https://stackoverflow.com/questions/7564841/concept-of-git-tracking-and-git-staging
https://stackoverflow.com/questions/19576116/how-to-add-multiple-files-to-git-at-the-same-time

Sources for git push
https://stackoverflow.com/questions/2765421/how-do-i-push-a-new-local-branch-to-a-remote-git-repository-and-track-it-too
