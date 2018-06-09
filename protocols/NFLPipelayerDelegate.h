/* made by EzioChiu.
 */

@protocol NFLPipelayerDelegate <NSObject>

@required

- (NSString *)pipelayer:(NFLPipelayer *)arg1 descriptionForSegmentType:(unsigned long long)arg2;
- (bool)pipelayer:(NFLPipelayer *)arg1 maySegmentType:(unsigned long long)arg2 usePipeUnits:(NSArray *)arg3;
- (NSArray *)pipelayer:(NFLPipelayer *)arg1 nextSegmentTypeCandidatesForSegmentType:(unsigned long long)arg2;
- (unsigned long long)pipelayer:(NFLPipelayer *)arg1 numberOfUnitsUsedBySegmentType:(unsigned long long)arg2;
- (double)pipelayer:(NFLPipelayer *)arg1 secondaryScoreOfPath:(NSArray *)arg2 units:(NSArray *)arg3;
- (void)pipelayer:(void *)arg1 segmentForUnits:(void *)arg2 segmentType:(void *)arg3 qualityOfService:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NFLPipelayer *, NSArray *, unsigned long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<NFLPipeSegment> *, void*
- (double)pipelayer:(NFLPipelayer *)arg1 transitionRankFromSegmentType:(unsigned long long)arg2 toSegmentType:(unsigned long long)arg3;

@end
