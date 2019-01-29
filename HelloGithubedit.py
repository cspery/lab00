print("Hello Github!") #Says Hi to me
file_squestns = open('StudentQuestions.txt', 'r') #Opens a file to read from, questions
file_sanswers = open('StudentAnswers.txt', 'w') #Opens a file to write to, my answers
for line in file_squestns: # Starts a lool of length questions
  ans = input(line) #Changes ans to your answer
  file_sanswers.write(ans + '\n')  #Adds your answer to the output file
print("Goodbye Github!") #Says bye bye
file_squestns.close() #Closes file 
file_sanswers.close() #Closes file



