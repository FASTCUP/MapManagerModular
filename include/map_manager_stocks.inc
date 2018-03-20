#if defined _map_manager_stocks_included
  #endinput
#endif
#define _map_manager_stocks_included

stock valid_map(map[])
{
	if(is_map_valid(map)) return true;
	
	new len = strlen(map) - 4;
	
	if(len < 0) return false;
	
	if(equali(map[len], ".bsp")) {
		map[len] = '^0';
		if(is_map_valid(map)) return true;
	}
	
	return false;
}