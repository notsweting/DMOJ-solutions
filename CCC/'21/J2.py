#this is a terrible solution, but this was one of the first problems i solved

class Bidder():
    def __init__(self, name, bid, position):
        self.name = name
        self.bid = bid
        self.position = position

bidders = []

lines = input()
for i in range(int(lines)):
    name = input()
    bid = input()
    position = i
    bidder = Bidder(name, int(bid), position)
    bidders.append(bidder)

winner = ''
winningamount = 0
for i in bidders:
    if i.bid > winningamount:
        winner = i.name
        winningamount = i.bid

print(winner)