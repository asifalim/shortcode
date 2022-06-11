#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/trie_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;//for multiset replace less with less_equal
typedef trie<string,null_type,trie_string_access_traits<>,pat_trie_tag,trie_prefix_search_node_update>pref_trie;
signed main()
{
    ordered_set st;        //O(nlogn)
    st.insert(1);
    st.insert(2);
    st.insert(3);
    //find_by_order----->kth smallest number
     cout<<*st.find_by_order(0)<<endl;//Output: 1
     //order_of_key------>total number less than a specific number
     cout<<st.order_of_key(3)<<endl;//Output: 2
     //pref_trie suggest word or something that exist in it with specific starting symbol
     //Problem--->https://acm.timus.ru/problem.aspx?space=1&num=1414
}
