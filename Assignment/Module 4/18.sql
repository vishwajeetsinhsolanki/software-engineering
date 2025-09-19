/*
18. SQL Cursors
Lab 1: Write a PL/SQL block using an explicit cursor to retrieve and display employee details.
Lab 2: Create a cursor to retrieve all courses and display them one by one.
*/
DECLARE

    CURSOR emp_cursor IS
        SELECT employees_id, first_name, last_name, department_id, salary FROM employees;
        
    a_employee_id   NUMBER;
    a_first_name    VARCHAR2(25);
    a_last_name     VARCHAR2(25);
    a_department_id NUMBER;
    a_salary        NUMBER;
BEGIN

    OPEN emp_cursor;
    LOOP
        FETCH emp_cursor INTO a_employee_id, a_first_name, a_last_name, a_department_id, a_salary;
        EXIT WHEN emp_cursor%NOTFOUND; 

        DBMS_OUTPUT.PUT_LINE('employee id: ' || a_employee_id || 
                             ', Name: ' || a_first_name || ' ' || a_last_name || 
                             ', Department: ' || a_department_id || 
                             ', Salary: ' || a_salary);
    END LOOP;
    CLOSE emp_cursor;
END;


DECLARE

    CURSOR course_cursor IS
        SELECT course_id, course_name FROM courses;
        
    a_course_id   NUMBER;
    a_course_name VARCHAR2(50);
BEGIN
    OPEN course_cursor;
    LOOP
        FETCH course_cursor INTO a_course_id, a_course_name;
        EXIT WHEN course_cursor%NOTFOUND;

        DBMS_OUTPUT.PUT_LINE('Course ID: ' || a_course_id || ', Course Name: ' || a_course_name);
    END LOOP;
    CLOSE course_cursor;
END;