class Solution:
    def maximumUnits(self, boxTypes: List[List[int]], truckSize: int) -> int:
        # number of boxes limited so want to put in boxes with max units first
        
        boxes, total_units, count = 0, 0, collections.Counter()
        
        boxTypes.sort(key = lambda x: x[1], reverse=True)
        
        for boxNum, units in boxTypes: 
            if boxes+boxNum >= truckSize: 
                total_units += (truckSize - boxes)*units
                break
            else: 
                boxes += boxNum
                total_units += boxNum*units
                
        
        return total_units
            