here are our general github guidelines, please do not delete everything lmao

###### **guideline for pulling & pushing code**
1. [[Read Me#**Cloning the repo**|Clone the Repo]]
	1. Clone the repository already if you haven't
2. [[Pulling Code|Always Pull Latest Code]]
	1. Generally, it's good practice to always be up to date with the latest code from remote! So before you make any changes/start smth new make sure you [[Pulling Code|pull]] the remote branches and are up to date!
3. [[Managing Separate Branches|Always Work On Separate Branches]]
	1. After you pull the latest code from remote, and want to work on a specific branch, let's call it "main" (main is the only current branch for our obsidian documentation lol), you should create a new local branch for all of your changes & updates using [[Managing Separate Branches#SWITCHING BRANCHES|checkout.]]
	2. This prevents any unnecessary merge conflicts that may arise from pulling in the latest code form the remote main to your local main, since if you aren't changing your local main, there will be no local changes that could lead to conflicts
4. [[Pushing Code|Pushing your code!]]
	1. Similarly to step 2, when you are ready to push your code you should first [[Pushing Code#**STAGING YOUR CHANGES**|add & commit]] all the files you'd like to update.
	2. Secondly, you should [[Pushing Code#**PUSHING YOUR CODE**|git push]]!
		1. When prompted, given that you did your work on a new local branch, since a remote branch does not currently exist, you'll be asked to [[Pushing Code#**PUSHING UPSTREAM**|push upstream]] instead
	3. Once you [[Pushing Code#**PUSHING UPSTREAM**|push upstream]] , you may also be prompted to create a [[Pushing Code#**CREATING A PULL REQUEST**|pull request]]. If you open/click on the link to the [[Pushing Code#**CREATING A PULL REQUEST**|PR]] in your terminal, it will take you to github and automatically create the  [[Pushing Code#**CREATING A PULL REQUEST**|PR]]  for you. 
		1. You should select the branch that you would like to merge into. 
		2. You can check your commits so far, and all the files you've changed to make sure you didn't miss anything.
		3. And then you can merge!
5. Handling merge conflicts!
	1. You may not be able to automatically merge your PR if someone else has recently worked on the same files that you have.
	2. In this instance, you will have to use a text editor of your choice to handle the merge conflicts. 
		1. This could be done in VS Code, another IDE, or even Github itself.
6. Avoiding merge conflicts!
	1. If you are experiencing a lot of merge conflicts it may be because you are working on a lot of things at once. 
	2. Generally you should be working on / pushing smaller segmented files at a time, and only using [[Pushing Code#**STAGING YOUR CHANGES**|git add]], & [[Pushing Code#**COMMITTING YOUR CHANGES**|git commit]] selectively on those files you are actually interested in. 
	3. This helps avoid unintended changes and also makes you more mindful about what it is that you are committing.
	4. [[Pushing Code#**COMMITTING YOUR CHANGES**|Committing]] frequently is also good practice to ensure that important changes you've made are firmly committed and ready to push. 
		1. This is beneficial in the event that something happens to your unstaged or unsaved local changes so that you have a commit to fall back on, and to avoid accidentally losing your changes to merge conflicts or git restores. 
7. Tips & Tricks
	1. If anyone else has any other helpful or useful advice for using github and wants to share their practices or what works best for them, feel free to add so anywhere you'd like!

###### **Cloning the repo**
how to [[Cloning a repo|clone a repo]]

how to create & add [[SSH KEYS|SSH Keys]]
- note: creating an SSH Key for cloning a repo isn't mandatory; there's no preference actually, you could clone with http instead if you'd like

how to [[Pulling Code|pull]] code


Some sources, add anything useful here if it can help, I tried to add some sources or websites throughout for reference, but if you're confused there is always a simple stack overflow solution or a way to configure your changes through PRs, adding, committing, and checkout, so you never really need to do crazy reverts, or rebases, but if you do, just be careful about how it affects remote!

Popular Git Questions on Stack
https://mammadyahya.medium.com/3-most-popular-git-questions-on-stackoverflow-1555bb30993c