/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface RangeDataManager : NSObject

+ (id)collapseRanges:(id)arg1;
+ (id)intersectionOfRangeLists:(id)arg1;
+ (id)intersectionOfRanges1:(id)arg1 ranges2:(id)arg2;
+ (id)invertedRanges:(id)arg1 duration:(long long)arg2;
+ (bool)location:(long long)arg1 isInRanges:(id)arg2 foundRange:(struct { long long x1; long long x2; }*)arg3;
+ (void)ranges:(id)arg1 addRange:(struct { long long x1; long long x2; })arg2 forKey:(id)arg3;
+ (id)stringForRanges:(id)arg1;
+ (id)unionOfRangeLists:(id)arg1;
+ (void)unionOfRangeLists:(id)arg1 interleavedIntoList1:(id*)arg2 andList2:(id*)arg3;
+ (id)unionOfRanges1:(id)arg1 ranges2:(id)arg2;

@end
