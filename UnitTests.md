# Unit tests

- The user should receive points based on their roll
- The game should keep running no matter what until either 0 health is reached, or the user chooses to exit the game with '-1' when in the main menu
- No infinite loops
- <Adding more + additional unit tests for each issue>

### Issue: Edits to rolling
- When the user chooses option 1 to roll, the program should add both the roll + bonus points from buffs to the users points total
- When the user chooses option 1 to roll, the program should also explicitely label how much of the total points they got was from the bonus
  - Ex: User rolls a 3 and has lvl 2 points buff, the user should see something like: "+5 points! 3 from roll, 2 from buffs"

### Issue: End the game!
- When the users health reaches 0, the game should end
- The user should also be notified of certain stats like: How many times they rolled, what level perks they had, etc.
