We sort the given input to arrange them based on their arrival.

We iterate from first day till the last day and among all the trainers that are already present at the camp or have come on the i<sup>th</sup> day, we choose to conduct the trainers lecture whose sadness level is the highest.

We maintain a priority queue to store the highest sadness level among the trainers who have arrived till i<sup>th</sup> day and take out the maximum.

After d days if any trainers were not able to complete their lectures we add their sadness level to our answer for each lecture.