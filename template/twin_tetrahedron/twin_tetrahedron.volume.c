double twin_tetrahedron_volume(double ** v)
{
	return ((v[1][0] - v[0][0])*(v[3][1] - v[0][1])*(v[4][2] - v[0][2])
		+ (v[1][1] - v[0][1])*(v[3][2] - v[0][2])*(v[4][0] - v[0][0])
		+ (v[1][2] - v[0][2])*(v[3][0] - v[0][0])*(v[4][1] - v[0][1])
		- (v[1][0] - v[0][0])*(v[3][2] - v[0][2])*(v[4][1] - v[0][1])
		- (v[1][1] - v[0][1])*(v[3][0] - v[0][0])*(v[4][2] - v[0][2])
		- (v[1][2] - v[0][2])*(v[3][1] - v[0][1])*(v[4][0] - v[0][0]))/6.;
};
