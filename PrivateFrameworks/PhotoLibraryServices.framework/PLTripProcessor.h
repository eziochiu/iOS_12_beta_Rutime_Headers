/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLTripProcessor : NSObject

+ (id)_filterFrequentLocations:(id)arg1 forDateInterval:(id)arg2;
+ (double)_minimumDistanceBetweenFrequentLocations:(id)arg1 andItem:(id)arg2;
+ (unsigned long long)_numberOfAssetsInItems:(id)arg1;
+ (double)_timeIntervalBetweenItem:(id)arg1 andItem:(id)arg2;
+ (id)processTripsWithItems:(id)arg1 frequentLocations:(id)arg2 progressBlock:(id /* block */)arg3;

@end
