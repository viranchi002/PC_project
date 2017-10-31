		for(int i = 0; i < K; i++)
			{
					double dist,min2=99999.0;
					int total_points_cluster = clusters[i].getTotalPoints();
					int cent;
					if(total_points_cluster > 0)
					{
						for(int p = 0; p < total_points_cluster; p++)
						{
							dist=0.0;
							for(int q = 0; q < total_points_cluster; q++)
							{
								if(p!=q)
								{
									for(int j=0;j<total_values;j++)
									{
										dist+=abs(clusters[i].getPoint(p).getValue(j) - clusters[i].getPoint(q).getValue(j));
									}
								}
							}
							if(dist<min2)
							{
								min2=dist;
								cent=p;
							}
						}
						for(j=0;j<total_values;j++)
						clusters[i].setCentralValue(j, clusters[i].getPoint(c).getValue(j));
					}
			}
			