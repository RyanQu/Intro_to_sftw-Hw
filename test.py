"""
Input:
2015-02, 2016-03

2015-04-22, impressions, 238
2016-12-23, impressions, 492
2015-04-23, follows, 898
2015-08-01, retweets, 938
2016-01-01, {-truncated-}

"""
import datetime
import calendar

period = raw_input()
period = period.split(", ")
start = period[0].split("-")
start.append("01")
end = period[1].split("-")
end.append(str(calendar.monthrange(int(end[0]), int(end[1]))[1]))
start_date = datetime.date(int(start[0]), int(start[1]), int(start[2]))
end_date = datetime.date(int(end[0]), int(end[1]), int(end[2]))

raw_input()
test_case = []
raw=raw_input()
while raw:
    item=raw.split(", ")
    if len(item)==3: 
        item_date = datetime.datetime.strptime(item[0],'%Y-%m-%d')
        item[0]=item[0][:7]
        if end_date>=item_date.date()>=start_date: test_case.append(item)
    raw=raw_input()

months=[]
for i in test_case:
    if i[0] not in months:
        months.append(i[0])

months.sort()

for i in months:
    result_m=[]
    for j in test_case:
        if j[0]==i:
            result_m.append([j[1],j[2]])
    result_m.sort()
    str_out=i+", "
    for i in result_m:
        for j in i:
            str_out=str_out+j+", "
    print str_out[:-2]

