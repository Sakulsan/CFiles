std::cout << "In renew state controller" << "\n";

if (current_state == idle && i_current_point < sizeof(points_x)) {
  xg = points_x[i_current_point]*100;
  yg = points_y[i_current_point]*100;
  std::cout << "New goals: (" << xg << "," << yg << ")\n";
  if(i_current_point == 4)   i_current_point -= 1;
  else   i_current_point += 1;
  current_state = rotational;
 }
