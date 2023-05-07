from bs4 import BeautifulSoup


class HTMLTableToList():
    def __init__(self, tableHtml):
        self.tableHtml = tableHtml

    def getList(self):
        listOfList = []
        soup = BeautifulSoup(self.tableHtml, "lxml")
        table = soup.find('table')
        allTr = table.findAll('tr')
        for tr in allTr:
            currRow = []
            allTh = tr.findAll('th')
            allTd = tr.findAll('td')
            for th in allTh:
                currRow.append(th.text)
            for td in allTd:
                currRow.append(td.text)
            listOfList.append(currRow)
        return listOfList
