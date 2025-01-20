/*
10. Transaction Control Language (TCL)
Lab 1: Insert a few rows into the courses table and use COMMIT to save the changes.
Lab 2: Insert additional rows, then use ROLLBACK to undo the last insert operation.
Lab 3: Create a SAVEPOINT before updating the courses table, and use it to roll back specific changes.
*/

select * from courses;

insert into courses values (103,'Science',3);
insert into courses values (104,'Commerce',4);
insert into courses values (105,'Science',3);

commit;

insert into courses values (106,'Science',3);
insert into courses values (107,'Commerce',4);
insert into courses values (108,'Science',3);

select * from courses;

rollback;

select * from courses;

savepoint p1;
insert into courses values (106,'Science',3);

savepoint p2;
insert into courses values (107,'Commerce',4);

savepoint p3;
insert into courses values (108,'Science',3);

rollback to p1;

rollback;

