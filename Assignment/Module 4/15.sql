/*
15. SQL Triggers
Lab 1: Create a trigger to automatically log changes to the employees table when a new employee is added.
Lab 2: Create a trigger to update the last_modified timestamp whenever an employee record is updated.
*/

create trigger add_data
before insert on school_db.employees
for each row
insert into new_data values (n.id,n.name,n.salary);
