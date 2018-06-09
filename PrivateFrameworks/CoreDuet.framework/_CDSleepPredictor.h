/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDSleepPredictor : NSObject

+ (id)array:(id)arg1 filter:(id /* block */)arg2;
+ (id)array:(id)arg1 map:(id /* block */)arg2;
+ (id)array:(id)arg1 reduce:(id /* block */)arg2 withInitialValue:(id)arg3;
+ (id)arrayWithObject:(id)arg1 repeated:(unsigned long long)arg2;
+ (id)fetchDeviceInUseDateIntervalsFromStore:(id)arg1 whichIntersectInterval:(id)arg2;
+ (id)fetchFirstEventDateIntervalFromStore:(id)arg1 forStream:(id)arg2 sortDateAscending:(bool)arg3 intersectingInterval:(id)arg4;
+ (id)findAllSleepPeriodsInDayStarting:(id)arg1 FromActivityProbabilities:(id)arg2;
+ (id)findSleepPeriodInDayStarting:(id)arg1 FromActivityProbabilities:(id)arg2;
+ (id)gatherBitmapHistoryFromStore:(id)arg1 forPeriod:(id)arg2;
+ (id)generateActivityBitmapFor:(id)arg1 unlockedIntervals:(id)arg2 eventsAvailableInterval:(id)arg3;
+ (id)indexSetFromUnionOf:(id)arg1;
+ (void)mutableArray:(id)arg1 replaceObjectsAtIndexes:(id)arg2 withObjectFromBlock:(id /* block */)arg3;
+ (id)predicateForInUseVaue;

@end
