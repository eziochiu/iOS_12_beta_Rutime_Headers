/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKLocationHistoryCache : NSObject {
    double  _earliestTime;
    unsigned long long  _index;
    double  _latestTime;
    bool  _needsSorting;
    NSMutableSet * _visitSet;
    NSMutableArray * _visits;
}

@property (readonly) unsigned long long count;
@property (readonly) NSDate *newestExitDate;
@property (readonly) NSDate *oldestEntryDate;

- (void).cxx_destruct;
- (void)addVisitWithEntryDate:(id)arg1 exitDate:(id)arg2 locationId:(id)arg3;
- (void)clear;
- (void)clearOldest:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)init;
- (id)lookupLocationIdforDate:(id)arg1;
- (id)newestExitDate;
- (id)oldestEntryDate;
- (void)sortIfNecessary;

@end
