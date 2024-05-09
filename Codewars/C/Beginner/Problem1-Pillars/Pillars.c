// https://www.codewars.com/kata/5bb0c58f484fcd170700063d
long pillars(int num_of_pillars, int distance, int width) {
  long result;
  if (num_of_pillars < 2) return 0;
  result =( (num_of_pillars - 1) * (distance * 100) ) + (num_of_pillars - 2) * width;
  return result;
}
