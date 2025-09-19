/*
19. Rollback and Commit Savepoint
Lab 1: Perform a transaction where you create a savepoint, insert records, then rollback to the savepoint.
Lab 2: Commit part of a transaction after using a savepoint and then rollback the remaining changes.
*/
BEGIN

    INSERT INTO employees (employees_id, first_name, last_name, hire_date, salary, department_id)
    VALUES (201, 'raj', 'patel', '2022-01-14', 66000, 55);

    SAVEPOINT savepoint_i;

    INSERT INTO employees (employees_id, first_name, last_name, hire_date, salary, department_id)
    VALUES (301, 'khush', 'ahir','2022-05-25', 57000, 50);

    ROLLBACK TO savepoint_i;
    DBMS_OUTPUT.PUT_LINE('Rolled back to savepoint. Only the first data remain.');
    
    SELECT COUNT(*) INTO NULL FROM employees WHERE employees_id IN (201, 301);
END;

BEGIN

    INSERT INTO employees (employees_id, first_name, last_name, hire_date, salary, department_id)
    VALUES (202, 'smit', 'taylor','2020-04-10', 48000, 45);
    
    SAVEPOINT savepoint_s;

    INSERT INTO employees (employees_id, first_name, last_name, hire_date, salary, department_id)
    VALUES (202, 'Brijesh', 'vaghela','2019-07-17', 49000, 52);

    COMMIT;
    DBMS_OUTPUT.PUT_LINE('Committed changes before the savepoint.');
    
    ROLLBACK TO savepoint_s;
    DBMS_OUTPUT.PUT_LINE('Rolled back changes after the savepoint.');
END;