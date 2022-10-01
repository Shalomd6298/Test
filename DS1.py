import pandas as pd

gdata=pd.read_csv("/Users/shalomdaniel/Dev/DataScience/Admission_Predict_Ver1.1.csv")
col_names=gdata.columns.tolist()
# print("Column names:")
# print(col_names)
# print("\nSample Data:")
# print(gdata.head())

gdata=gdata.rename(columns={'Serial No.':'no','GRE Score':'gre','TOEFL Score':'toefl','University Rating':'rating','SOP':'sop','LOR ':'lor',
                           'CGPA':'gpa','Research':'research','Chance of Admit ':'chance'})

# print(gdata.dtypes)


print(gdata[gdata['chance']>0.82].groupby('chance').mean())