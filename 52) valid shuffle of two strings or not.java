import java.util.Arrays;

//main class
class Main {
    //check length of string should be same
    static boolean checkLength(String first, String second, String result) {
        if (first.length() + second.length() != result.length()) {
          return false;
        }
        else {
          return true;
        }
    }

    static String sortString(String str){
    //Convert string to char array
    char[] charArray = str.toCharArray();
    Arrays.sort(charArray); // array sorting

    // convert char array back to string
    str = String.valueOf(charArray);
    return str; // return string 
    }

    //check suffle
    static boolean shuffleCheck(String first, String second, String result) {
        first = sortString(first);
        second = sortString(second);
        result = sortString(result);
        int i = 0, j = 0, k = 0; // k is for charecter, i and j for first and second
        
        while (k != result.length()) {
          if (i < first.length() && first.charAt(i) == result.charAt(k)){
              i++;
          }
          else if (j < second.length() && second.charAt(j) == result.charAt(k)){
              j++;
          }
          // if no matching charecter
          else {
            return false;
          }
          k++; // check next charecter 
        }
    if(i < first.length() || j < second.length()) {
      return false;
    }

    return true;
  }

  public static void main(String[] args) {

    String first = "XY";
    String second = "12";
    String[] results = {"1XY2", "Y1X2", "Y21XX"};
    for (String result : results) {
      if (checkLength(first, second, result) == true && shuffleCheck(first, second, result) == true) {
        System.out.println(result + " is a valid shuffle of " + first + " and " + second);
      }
      else {
        System.out.println(result + " is not a valid shuffle of " + first + " and " + second);
      }
    }
  }
}
