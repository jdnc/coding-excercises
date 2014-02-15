class PackingBallsDiv2{
public:
	int minPacks(int r, int g, int b){
		int num = 0;
		while(r && g && b){
			num++;
			r--;
			g--;
			b--;
		}
		num += r/3 + r%3 + g/3 + g%3 + b/3 + b%3;
		return num;
	}

};