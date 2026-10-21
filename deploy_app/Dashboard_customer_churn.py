import streamlit as st
import pandas as pd
import joblib
from pathlib import Path

st.set_page_config(page_title="Marvellous Infosystem Dashboard")

st.title("Marvellous Infosystem by Shweta Dhanawade")
st.header("Customer Churn Predection")
st.write("Machine Learning Application Dashboard")

model = joblib.load(Path(__file__).parent / "Marvellous_ML_customer_churn.pkl")

st.subheader("Enter customer details !!")

age = st.number_input("Customer Age: ", min_value=1)
tenure = st.number_input("tenure (Months): ", min_value=0)
charges = st.number_input("Monthly Charges : ", min_value=0)
calls = st.number_input("Support calls: ", min_value=0)

if st.button("Predict Chrun "):
    new_customer = pd.DataFrame({
    "Age":[age],
    "Tenure": [tenure],
    "MonthlyCharges" : [charges],
    "SupportCalls": [calls]
    })

    prediction = model.predict(new_customer)[0]

    if prediction == 1:
        st.error("Customer is likely to churn")
    else:
        st.success("Customer is unlikely to churn")

st.divider()

st.caption("Marvellous Infosystem ")


