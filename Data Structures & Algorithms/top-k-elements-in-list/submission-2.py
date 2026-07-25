class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        dict1={}
        for item in nums:
            if item in dict1:
                dict1[item] += 1
            else:
                dict1[item]=1
        # Step 1: Sort dictionary by value (descending)
        sorted_dict = dict(sorted(dict1.items(), key=lambda item: item[1], reverse=True))

        # Step 2: Get the top k keys
        top_k_keys = list(sorted_dict.keys())[:k]
        if top_k_keys:
            return top_k_keys
        else:
            return nums
            
       



