import java.io.*; 
public class Main {	
	public static void main(String[] args) throws Exception{		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));		
		while(true) {
			String str = br.readLine();			
			if(str.equals("#"))				
				break;			
			str = str.toLowerCase();			
			int ans=0, i=0;			
			for(;i<str.length();i++) {				
				char t=str.charAt(i);				
				if(t=='a' || t=='e' || t=='i' || t=='o' || t=='u'|| t == 'A' || t == 'E' || t == 'I' || t == 'O' || t == 'U')					
					ans++;			
				}			
			System.out.println(ans);				
		}	
	}
}