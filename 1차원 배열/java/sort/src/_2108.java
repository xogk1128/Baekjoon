import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.Collections;

public class _2108 {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		//BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringBuilder sb = new StringBuilder();
		int N = Integer.parseInt(br.readLine());
		ArrayList<Integer> num = new ArrayList<>();
		for(int i=0; i<N; i++)
			num.add(Integer.parseInt(br.readLine()));
		
		int avr = 0;
		for(int val : num)
			avr += val;
		avr = Math.round((float)avr/N);
		
		Collections.sort(num);
		
		
		int[] cnt = new int[num.get(num.size()-1)+1];
		int[] minus = new int[Math.abs(num.get(0))+1];
		for(int val : num) {
			if(val >= 0)
				++cnt[val];
			else
				++minus[Math.abs(val)];
		}
		
		// 최대 개수
		int max = 1;
		// 두번째 최빈값 체크
		boolean flag = false;
		
		// 최빈값
		int res = num.get(0);
		for(int i=0; i<cnt.length; i++) {
			if(max < cnt[i]) {
				max = cnt[i];
				res = i;
				flag = true;
			}
			else if(max == cnt[i] && flag == true) {
				res = i;
				flag = false;
			}
		}
		for(int i=1; i<minus.length; i++) {
			if(max < minus[i]) {
				max = minus[i];
				res = i * -1;
			}
			else if(max == cnt[i] && flag == true) {
				res = i;
				flag = false;
			}
		}
		
		
		sb.append(avr).append("\n");
		sb.append(num.get(num.size()/2)).append("\n");
		
		sb.append(res).append("\n");
		
		sb.append((num.get(num.size()-1)-num.get(0))).append("\n");
		System.out.print(sb);
	}

}

