#include <iostream>

std::string box(int width, int height){
  std::string row = "";
  std::string box = "";
  for(int i = 0; i<width; i++){
    row = row+ "*";
  }
  for(int i = 0; i<height; i++){
    box = box + row + "\n";
  }
  return box;
}

std::string checkerboard(int width, int height){
  std::string templateRow="";
  std::string board = "";
  for(int i = 0; i<width; i++){
    templateRow = templateRow+  "* ";
  }
  for(int i = 0; i < height; i++){
    board = board + templateRow.substr(i%2, width) + "\n";
  }
  return board;
}

std::string cross(int height){
  std::string templateRow = "";
  std::string cross = "";
  //makes string of the same length as one of the lines
  //in finished print out.
  for(int i = 0; i < height; i++){
    templateRow = templateRow + " ";
  }

  for(int i = 0; i < height; i++){
    //replaces ith and height - ith space with *
    templateRow.replace(i , 1 , "*");
    templateRow.replace(height-i-1, 1, "*");
    //adds it to the string that will be returned
    cross = cross + templateRow + "\n";
    //replaces them with ' ' again
    templateRow.replace(i , 1 , " ");
    templateRow.replace(height-i-1, 1, " ");
  }
  return cross;
}

std::string lower(int length){
  std::string low = "";
  std::string prevLine = "";
  int counter = 0;
  for(int i = 0; i<length; i++){
    prevLine += "*";
    low+=prevLine;
    low = low + "\n";
  }
  return low;
}

std::string upper(int length){
  std::string prevLine = "";
  std::string upp = "";
  for(int i =0; i<length; i++){
    prevLine+="*";
  }
  for(int i =0; i<length; i++){
    upp+=prevLine + "\n";
    prevLine.replace(i,1," ");
  }
  return upp;
}

std::string trapeziod(int base, int height){
  if(height-1 > base/2){
    return "Impossible shape!";
  }
  std::string prevLine = "";
  std::string upp = "";
  for(int i =0; i<base; i++){
    prevLine+="*";
  }
  for(int i =0; i<height; i++){
    upp+=prevLine + "\n";
    prevLine.replace(i,1," ");
    prevLine.replace(base-i-1,1," ");
  }
  return upp;
}

std::string checkerboard3x3(int width, int height){
  std::string templateRow="";
  std::string board = "";
  for(int i = 0; i<(width/6)+2; i++){
    templateRow = templateRow+  "***   ";
  }
  for(int i = 0; i<height; i++){
    if(i%6==0||i%6==1||i%6==2){
      board+=templateRow.substr(0,width)+"\n";
    }
    else{
      board+=templateRow.substr(3,width)+"\n";
    }
  }
  return board;
}
