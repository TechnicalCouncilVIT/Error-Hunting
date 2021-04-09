#Age Detector
#Here There is a Hybrid Inheritence
#Age Detector
'''
Output:
Sam is my Name
Harvey is my Father
Mike is my Grandfather
Doanna is my Mother
20 is my Age
50 is my Father's Age
80 is my grandfather's age
45 is my mother's Age
'''
class Grandfather:
    def __init__(self,name='',age=''):
        self.name=name
        self.g_age=age+30
    def relation(self):
        print(self.name,"is my Grandfather")
    def age_detect(self):
        print(self.g_age,"is my grandfather's age")
    def gotowork(self):
        print(self.name,"is a retired army officer!")
        pass
class Father(Grandfather):
    def __init__(self,name='',age=''):
        self.name=name
        self.f_age=age+30
        gname='Mike'
        Grandfather.__init__(self,gname,age)
        pass
    def relation(self):
        print(self.name,"is my Father")
        Grandfather.relation(self)
    def age_detect(self):
        print(self.age,"is my Father's Age")
        Grandfather.age_detect(self)
    def gotowork(self):
        print(self.name,"is an Engineer!")
        Grandfather.gotowork(self)
    pass
class Mother(Grandfather):
    def __init__(self,name='',age=''):
        self.name=name
        self.age=age+25
        pass
    def relation(self):
        print(self.name,"is my Mother")
    def age_detect(self):
        print(self.age,"is my mother's Age")
    def gotowork(self):
        print(self.name,"is a Teacher!")
    pass
class Child(Father,Mother):
    def __init__(self,name='',age=''):
        self.name=name
        self.age=int(age)
        fname='Harry'
        mname='Doanna'
        Father.__init__(self,fname,age)
        Mother.__init__(self,mname,age)
        pass
    def relation(self):
        print(self.name,"is my Name")
        Father.relation(self)
        Mother.relation(self)
    def age_detect(self):
        print(self.age,"is my Age")
        Father.age_detect(self)
        Mother.age_detect(self)
    def gotowork(self):
        print("I am a Student")
        Father.gotowork(self)
        Mother.gotowork(self)
a=Child('Sam',20)
a.relation()
a.age_detect()