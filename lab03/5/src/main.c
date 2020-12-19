
int main() {
	int  a=398;
	float r1 = ((a-(a%100))/100)/(float) ((a%100)%10);
	int r2 = r1 * 100;
	float r3 = r2/100.0;
	
	return 0;
}
