// Following is the node structure
/**************
class ListNode{
	public:
	int data;
	ListNode* next;
};

ListNode* newListNode(int data){
	ListNode *temp = new ListNode;
    	temp->data = data;
    	temp->next = NULL;
    	return temp;
}
***************/
import java.util.*;
public class solution {

	public static ListNode<Integer> NewLoop(ListNode<Integer> head) {
		/*Your class should be named solution. 
		*Don't write main().
		*Don't take input, it is passed as function argument.
		*Don't print output.
		*Taking input and printing output is handled automatically.
		*/ 
        HashMap<ListNode<Integer>,Integer> map = new HashMap<>();
        ListNode<Integer> temp = head;
        ListNode<Integer> tail = head;
        int value = -1;
        
        while(true){
            if(map.containsKey(temp)){
                value = temp.data;
                break;
            }
            map.put(temp,0);
            tail = temp;
            temp = temp.next;
        }
        
        ListNode<Integer> itr = head;
        tail.next = null;
        ArrayList<Integer> arr = new ArrayList<Integer>();
        while(itr!=null){
            if(itr.data>value){
                arr.add(itr.data);
            }
            itr = itr.next;
        }
        Collections.sort(arr);
        if(!arr.isEmpty()){
            value = arr.get(0);
            itr = head;
            while(itr!=null){
                if(itr.data==value){
                    tail.next = itr;
                    break;
                }
                itr = itr.next;
            }
        }
        return head;
        
	}

}