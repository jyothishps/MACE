import React from 'react'

function StudentList() {
  const students = [
    { id: 1, name: "Tony Stark" },
    { id: 2, name: "Bruce Banner" },
    { id: 3, name: "Steve Rogers" },
    { id: 4, name: "Peter Parker" },

  ];
  return (
    <div>
      <h2>Student List</h2>
      <ul>
        {students.map((student) => (
          <li key={student.id}>{student.id} - {student.name}</li>
        ))}
      </ul>
    </div>
  )
}

export default StudentList