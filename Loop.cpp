
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

class ListNode<t> {
	public t data;
	public ListNode<t> next;
	public ListNode(t data)
	{
		this.data=data;
	}
}

public class runner {

	static Scanner s = new Scanner(System.in);

	public static void main(String[] args) {
		int data = s.nextInt();
		ListNode<Integer> head = null, temp = null;
		//enter -1 to end
		while(data != -1){
			if(head == null){
				head = new ListNode<Integer>(data);
				temp = head;
			}else{
				temp.next = new ListNode<Integer>(data);
				temp = temp.next;
			}
			data = s.nextInt();
		}
		int n = s.nextInt();
		ListNode<Integer> tail = temp;
		temp = head;
		//connecting last element to nth node
		while(n != 1){
			n--;git 
			temp = temp.next;
		}
		tail.next = temp;
		print(solution.NewLoop(head));
	}
	
	public static void print(ListNode<Integer> head){
		Set<ListNode<Integer>> hs = new HashSet<>();
		while(head != null && !hs.contains(head)){
			System.out.print(head.data+" ");
			hs.add(head);
			head = head.next;
		}
		System.out.println((head!=null)?head.data:head);
	}
}
