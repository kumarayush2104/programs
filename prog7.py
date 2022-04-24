class university:
    name="Uka Tarsadia University"
    year_of_estd=2012
    city="Bardoli"

class professor(university):
    design = "Professor"
    def __init__(self, name, qualification, interest, YoJ, YoE, name_inst):
        print("\nName:", name, "\nQualification: ", qualification, "\nArea of Interest: ", interest, "\nYear of Joining:", YoJ, "\nYear of Experience:", YoE, "\nName of the Institute:", name_inst, "\nName of University:", university.name, "\nEstablishment Date:", university.year_of_estd, "\nUniversity Location:", university.city)
class lab_assistant(university):
    design = "Lab Assistant"
    def __init__(self, name, qualification, skill, YoJ, name_inst):
        print("\nName:", name, "\nQualification: ", qualification, "\nAdditional Skills:", skill, "\nYear of Joining:", YoJ, "\nName of the Institute:", name_inst, "\nName of University:", university.name, "\nEstablishment Date:", university.year_of_estd, "\nUniversity Location:", university.city)
class office_assistant(university):
    design = "Office Assistant"
    def __init__(self, name, qualification, YoJ, name_inst):
        print("\nName:", name, "\nQualification: ", qualification, "\nYear of Joining:", YoJ, "\nName of the Institute:", name_inst, "\nName of University:", university.name, "\nEstablishment Date:", university.year_of_estd, "\nUniversity Location:", university.city)
class peon(university):
    design = "Peon"
    def __init__(self, name, qualification, YoJ, name_inst):
        print("\nName:", name, "\nQualification: ", qualification, "\nYear of Joining:", YoJ, "\nName of the Institute:", name_inst, "\nName of University:", university.name, "\nEstablishment Date:", university.year_of_estd, "\nUniversity Location:", university.city)

def inpt(opr):
    emp_name = input("Enter name: ")
    qualification = input("Highest Qualification: ")
    YoJ = input("Year of Joining: ")
    name_inst = input("Name of Institute: ")
    if (opr==1):
        interest = input("Area of Interest: ")
        YoE = input("Experience: ")
        professor(emp_name, qualification, interest, YoJ, YoE, name_inst)
    elif (opr==2):
        skill = input("Additional Skils: ")
        lab_assistant(emp_name, qualification, skill, YoJ, name_inst)
    elif (opr==3):
        office_assistant(emp_name, qualification, YoJ, name_inst)
    elif (opr==4):
        peon(emp_name, qualification, YoJ, name_inst)
    

opr = input("Welcome to Database Management System\nPress 1 for Professor's database\nPress 2 for Lab Assistant's database\nPress 3 for Office Assistant's database\nPress 4 for Peon'n database\n: ")
inpt(int(opr))