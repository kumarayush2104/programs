class bankAccount:
	accNum=0
	accOwner=0
	accBal=0
	def __init__(self, num, name, bal):
		self.accNum = num
		self.accOwner = name
		self.accBal = bal
	def deposit(self, bal):
		self.accBal += bal
	def display(self):
		print("------------")
		print("| ", self.accNum, " |")
		print("| ", self.accOwner, "  |")
		print("| ", self.accBal, "  |")
		print("------------")
	def withdraw(self, bal):
		if(bal>self.accBal):
			print("Sorry you dont have sufficient balance.")
		else:
			self.accBal -= bal

use1 = bankAccount(202030, "user1", 50000)
use2 = bankAccount(202031, "user2", 60000)
use3 = bankAccount(202032, "user3", 10000)

use1.display()
use2.display()
use3.display()

use1.deposit(3000)
use2.withdraw(50000)
use3.withdraw(20000)

use1.display()
use2.display()
use3.display()






