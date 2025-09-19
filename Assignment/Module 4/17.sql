/*
17. PL/SQL Control Structures
Lab 1: Write a PL/SQL block using an IF-THEN condition to check the department of an employee.
Lab 2: Use a FOR LOOP to iterate through employee records and display their names.
*/

DECLARE
    a_employee_id   NUMBER := 105;
    a_department_id NUMBER;
BEGIN
    SELECT department_id INTO a_department_id
    FROM employees
    WHERE employees_id = a_employee_id;

    IF a_department_id = 50 THEN
        DBMS_OUTPUT.PUT_LINE('Employee belongs to department 50.');
    ELSIF a_department_id = 60 THEN
        DBMS_OUTPUT.PUT_LINE('Employee belongs to department 60.');
    ELSE
        DBMS_OUTPUT.PUT_LINE('Employee belongs to another department: ' || a_department_id);
    END IF;
END;


BEGIN

    FOR ref IN (SELECT first_name, last_name FROM employees) LOOP
        DBMS_OUTPUT.PUT_LINE('Employee Name: ' || ref.first_name || ' ' || ref.last_name);
    END LOOP;
    
END;