/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKCacheBackedChartSeriesDataSource : HKGraphSeriesDataSource <HKChartDataCacheObserver> {
    HKChartCache * _chartCache;
    struct { 
        long long index; 
        long long zoom; 
    }  _lastEndPath;
    struct { 
        long long index; 
        long long zoom; 
    }  _lastStartPath;
}

@property (nonatomic, retain) HKChartCache *chartCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_resetCachedPaths;
- (void)blocksRequestedFromPath:(struct { long long x1; long long x2; })arg1 toPath:(struct { long long x1; long long x2; })arg2;
- (id)cachedBlockForPath:(struct { long long x1; long long x2; })arg1 context:(id)arg2;
- (id)chartCache;
- (void)chartCacheDidUpdate:(id)arg1;
- (bool)hasAvailableBlocksBetweenStartPath:(struct { long long x1; long long x2; })arg1 endPath:(struct { long long x1; long long x2; })arg2;
- (bool)hasPendingQueriesBetweenStartPath:(struct { long long x1; long long x2; })arg1 endPath:(struct { long long x1; long long x2; })arg2;
- (id)init;
- (void)invalidateCache;
- (void)setChartCache:(id)arg1;

@end
