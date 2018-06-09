/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPQuickTypeEventCache : NSObject {
    id /* block */  _backfiller;
    NSMutableDictionary * _cachedEventHighlights;
    NSArray * _cachedEvents;
    NSMutableIndexSet * _cachedRanges;
    unsigned long long  _extraSecondsToBackfill;
    NSObject<OS_dispatch_source> * _memoryPressureSource;
    unsigned long long  _memoryPressureStatus;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) unsigned long long extraSecondsToBackfill;

- (void).cxx_destruct;
- (void)_handleMemoryPressureStatus;
- (id)cachedEventHighlightForEKEvent:(id)arg1 rankingOptions:(int)arg2;
- (void)evictAllExceptRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)evictAllExceptRangesInIndexSet:(id)arg1;
- (void)evictEvents:(id)arg1;
- (unsigned long long)extraSecondsToBackfill;
- (id)initWithBackfiller:(id /* block */)arg1;
- (id)objectForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeAllObjects;
- (void)setEventHighlight:(id)arg1;
- (void)setExtraSecondsToBackfill:(unsigned long long)arg1;

@end
