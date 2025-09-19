/*
7. Data Manipulation Language (DML)
Lab 1: Insert three records into the courses table using the INSERT command.
Lab 2: Update the course duration of a specific course using the UPDATE command.
Lab 3: Delete a course with a specific course_id from the courses table using the DELETE command.
*/

insert into courses values (101,'Commerce',2);
insert into courses values (102,'Science',4);
insert into courses values (103,'Arts',4);

update courses set course_duration = 2 where course_id = 102;

delete from courses where course_id = 103;