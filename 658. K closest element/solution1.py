from typing import List

class Solution:
    def findClosestElements(self, arr: List[int], k: int, x: int) -> List[int]:
        distances = list()
        for i in range(len(arr)):
            dist = abs(arr[i] - x)
            distances.append((arr[i], dist))
        distances.sort(key=lambda x:x[1])
        result = [dist[0] for dist in distances[:k]]

        return sorted(result)
