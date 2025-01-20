/*
16. Introduction to PL/SQL
Lab 1: Write a PL/SQL block to print the total number of employees from the employees table.
Lab 2: Create a PL/SQL block that calculates the total sales from an orders table.
*/

DECLARE
    total_employees NUMBER;
BEGIN
    SELECT COUNT(*) INTO total_employees FROM employees;

    DBMS_OUTPUT.PUT_LINE('Total Number of Employees: ' || total_employees);
END;

DECLARE
    total_sales NUMBER;
BEGIN
    SELECT NVL(SUM(sales_amount), 0) INTO total_sales FROM orders;

    DBMS_OUTPUT.PUT_LINE('Total Sales Amount: ' || total_sales);
END;