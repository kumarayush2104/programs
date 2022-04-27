<<<<<<< HEAD
import os
=======
>>>>>>> d7d037c9f56c6e7da260f26ceb10ad9d3f4e42ff
class university:
    def __init__(self, name, year_of_estd, city):
        self.name = name
        self.year_of_estd = year_of_estd
        self.city = city

class professor(university):
    designation = "Professor" 
    def __init__(self, name, year_of_estd, city, highest_qualification, area_of_research, year_of_joining, year_of_experience, name_of_institute):
        self.highest_qualification = highest_qualification
        self.area_of_research = area_of_research
        self.year_of_joining = year_of_joining
        self.year_of_experience = year_of_experience
        self.name_of_institute = name_of_institute
        super().__init__(name, year_of_estd, city)
    def display(self):
<<<<<<< HEAD
        os.system("clear")
        print("Name:", self.name, "\nYear of Establishment:", self.year_of_estd, "\nCity:", self.city, "\nHighest Qualification:", self.highest_qualification, "\nArea of Research:", self.area_of_research, "\nYear of Experience:", self.year_of_experience, "\nYear of Joining:", self.year_of_joining, "\nName of Institute:", self.name_of_institute)
=======
        print("\n\n\n\n\n\n\n\n\n\n\n\n\n\nName:", self.name, "\nYear of Establishment:", self.year_of_estd, "\nCity:", self.city, "\nHighest Qualification:", self.highest_qualification, "\nArea of Research:", self.area_of_research, "\nYear of Experience:", self.year_of_experience, "\nYear of Joining:", self.year_of_joining, "\nName of Institute:", self.name_of_institute)
>>>>>>> d7d037c9f56c6e7da260f26ceb10ad9d3f4e42ff
class lab_assistant(university):
    designation = "Lab Assistant"
    def __init__(self, name, year_of_estd, city, highest_qualification, additional_skills, year_of_joining, name_of_institute):
        self.highest_qualification = highest_qualification
        self.additional_skills = additional_skills
        self.year_of_joining = year_of_joining
        self.name_of_institute = name_of_institute
        super().__init__(name, year_of_estd, city)
    def display(self):
<<<<<<< HEAD
        os.system("clear")
        print("Name:", self.name, "\nYear of Establishment:", self.year_of_estd, "\nCity:", self.city,  "\nHighest Qualification:", self.highest_qualification, "\nAdditional Skills:", self.additional_skills, "\nYear of Joining:", self.year_of_joining, "\nName of Institute:", self.name_of_institute)
=======
        print("\n\n\n\n\n\n\n\n\n\n\n\n\n\nName:", self.name, "\nYear of Establishment:", self.year_of_estd, "\nCity:", self.city,  "\nHighest Qualification:", self.highest_qualification, "\nAdditional Skills:", self.additional_skills, "\nYear of Joining:", self.year_of_joining, "\nName of Institute:", self.name_of_institute)
>>>>>>> d7d037c9f56c6e7da260f26ceb10ad9d3f4e42ff
class office_assistant(university):
    designation = "Office Assistant"
    def __init__(self, name, year_of_estd, city, highest_qualification, year_of_joining, name_of_institute):
        self.highest_qualification = highest_qualification
        self.year_of_joining = year_of_joining
        self.name_of_institute = name_of_institute
        super().__init__(name, year_of_estd, city)
    def display(self):
<<<<<<< HEAD
        os.system("clear")
        print("Name:", self.name, "\nYear of Establishment:", self.year_of_estd, "\nCity:", self.city, "\nHighest Qualification:", self.highest_qualification, "\nYear of Joining:", self.year_of_joining, "\nName of Institute:", self.name_of_institute)
=======
        print("\n\n\n\n\n\n\n\n\n\n\n\n\n\nName:", self.name, "\nYear of Establishment:", self.year_of_estd, "\nCity:", self.city, "\nHighest Qualification:", self.highest_qualification, "\nYear of Joining:", self.year_of_joining, "\nName of Institute:", self.name_of_institute)
>>>>>>> d7d037c9f56c6e7da260f26ceb10ad9d3f4e42ff
class peon(university):
    designation = "Peon"
    def __init__(self, name, year_of_estd, city, highest_qualification, year_of_joining, name_of_institute):
        self.highest_qualification = highest_qualification
        self.year_of_joining = year_of_joining
        self.name_of_institute = name_of_institute
        super().__init__(name, year_of_estd, city)
    def display(self):
<<<<<<< HEAD
        os.system("clear")
        print("Name:", self.name, "\nYear of Establishment:", self.year_of_estd, "\nCity:", self.city, "\nHighest Qualification:", self.highest_qualification, "\nYear of Joining:", self.year_of_joining, "\nName of Institute:", self.name_of_institute)
=======
        print("\n\n\n\n\n\n\n\n\n\n\n\n\n\nName:", self.name, "\nYear of Establishment:", self.year_of_estd, "\nCity:", self.city, "\nHighest Qualification:", self.highest_qualification, "\nYear of Joining:", self.year_of_joining, "\nName of Institute:", self.name_of_institute)
>>>>>>> d7d037c9f56c6e7da260f26ceb10ad9d3f4e42ff


opr = int(input("Welcome to Database System\nPress 1 to check Professor Database\nPress 2 to check Lab Assistant's Database\nPress 3 to check Office Assistant's Database\nPress 4 to check Peon's Database\n: "))
def inn(opr):
    name = input("Name: ")
    year_of_estd = input("Year of Establishment: ")
    city = input("City: ")
    highest_qualification = input("Highest Qualification: ")
    year_of_joining = input("Year of Joining: ")
    name_of_institute = input("Name of the Institute: ")
    if(opr==1):
        area_of_research = input("Area of Research: ")
        year_of_experience = input("Year of Experience: ")
        pro1 = professor(name, year_of_estd, city, highest_qualification, area_of_research, year_of_joining, year_of_experience, name_of_institute)
        pro1.display()
    elif(opr==2):
        additional_skill = input("Additional Skills: ")
        la1 = lab_assistant(name, year_of_estd, city, highest_qualification, additional_skill, year_of_joining, name_of_institute)
        la1.display()
    elif(opr==3):
        oa1 = office_assistant(name, year_of_estd, city, highest_qualification, year_of_joining, name_of_institute)
        oa1.display()
    elif(opr==4):
        pe1 = peon(name, year_of_estd, city, highest_qualification, year_of_joining, name_of_institute)
        pe1.display()

inn(opr)