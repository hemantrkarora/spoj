    #include <iostream>
        using namespace std;
	     
	         int a[100];
		     int b[100];
		          
			      int main()
			          {
				      int m,n, last_found=0;
				          cin>>n;
					      for(int i =0; i<n; i++)
					          cin>>a[i];
						      cin>>m;
						          for(int i=0; i<m; i++)
							      cin>>b[i];
							           
								       for(int i=0; i< n; i++)
								           {
									       int j;
									           //start from the last found
										       for(j = last_found; j<m;j++)
										           {
											       //If found in the second array
											           if(a[i] == b[j])
												       {
												           //update last found
													       last_found = j+1;
													           break;
														       }
														           }
															       //found in the second array print
															           if(j<m)
																       cout<<a[i]<<" ";
																           }
																	       } 
