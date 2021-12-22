import calendar
y = int(input("Enter the year: "))
print("\ncalendar")
cal = calendar.TextCalendar(calendar.MONDAY)
i = 1
while i <= 12 :
    cal.prmonth(y,i)
    i+=1
