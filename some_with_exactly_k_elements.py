class Solution:
    def maximizeSum(self, nums, k) -> int:
                import queue
                pq=queue.PriorityQueue()
                for x in nums:
                  pq.put(-x)
                ans=0
                while k:
                    k-=1
                    item=pq.get()
                    pq.put(-((-1)*item+1))
                    ans+=(-1)*item
                return ans

s=Solution()
print(s.maximizeSum([1,2,3,4,5],3))                           