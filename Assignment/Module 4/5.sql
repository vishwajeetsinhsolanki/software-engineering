/*
5. ALTER Command
Lab 1: Modify the courses table by adding a column course_duration using the ALTER command.
 Lab 2: Drop the course_credits column from the courses table.
*/

alter table courses add column course_duration int not null;

describe courses;

alter table courses drop column course_credits;

describe courses; 
