from HTMLTableToList import HTMLTableToList
from pprint import pprint

htmlTableString = """<table class="table table-condensed">
                        <tr>
                            <th>RGB</th>
                            <td>53</td><td>72</td><td>35</td>
                        </tr>
                        <tr>
                            <th>HSL</th><td>0.25</td><td>0.35</td><td>0.21</td>
                        </tr>
                        <tr>
                            <th>HSV</th><td>91&deg;</td><td>51&deg;</td><td>28&deg;</td>
                        </tr>
                        <tr>
                            <th>CMYK</th>
                            <td>0.26</td><td>0.00</td><td>0.51 &nbsp; 0.72</td>
                        </tr>
                        <tr>
                            <th>XYZ</th><td>4.0889</td><td>5.5130</td><td>2.4387</td>
                        </tr>
                        <tr>
                            <th>Yxy</th><td>5.5130</td><td>0.3396</td><td>0.4579</td>
                        </tr>
                        <tr>
                            <th>Hunter Lab</th><td>23.4798</td><td>-10.0046</td><td>10.2778</td>
                        </tr>
                        <tr>
                            <th>CIE-Lab</th><td>28.1490</td><td>-15.1006</td><td>19.7427</td>
                        </tr>
                    </table>"""

htmlTableToList = HTMLTableToList(htmlTableString)
listOfList = htmlTableToList.getList()
pprint(listOfList)

'''
[['RGB', '53', '72', '35'],
 ['HSL', '0.25', '0.35', '0.21'],
 ['HSV', '91°', '51°', '28°'],
 ['CMYK', '0.26', '0.00', '0.51 \xa0 0.72'],      
 ['XYZ', '4.0889', '5.5130', '2.4387'],
 ['Yxy', '5.5130', '0.3396', '0.4579'],
 ['Hunter Lab', '23.4798', '-10.0046', '10.2778'],
 ['CIE-Lab', '28.1490', '-15.1006', '19.7427']]   
'''
