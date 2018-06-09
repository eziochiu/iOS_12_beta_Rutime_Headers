/* made by EzioChiu.
 */

@protocol NFLFeedLayoutSearchConfiguration <NSObject, NFCopying>

@required

- (NSArray *)allRowTypes;
- (NSString *)descriptionForRowType:(unsigned long long)arg1;
- (bool)isShowingAccessoryText;
- (NSArray *)nextRowTypeCandidatesForRowType:(unsigned long long)arg1;
- (unsigned long long)numberOfTileInfosUsedByRowType:(unsigned long long)arg1;
- (unsigned long long)preferredTileInfoBatchSize;
- (Class)rankedLayoutGenerationOperationClassForRequest:(NFLRankedLayoutRequest *)arg1;
- (void)setShowAccessoryText:(bool)arg1;
- (struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; })subBatchLayoutSeedForRowType:(unsigned long long)arg1 withTileInfos:(NSArray *)arg2;
- (Class)subBatchLayoutTilingOperationClassForRowType:(unsigned long long)arg1;
- (bool)supportsTileInfoType:(unsigned long long)arg1;
- (double)transitionRankFromNoneToRowType:(unsigned long long)arg1;
- (double)transitionRankFromRowType:(unsigned long long)arg1 toRowType:(unsigned long long)arg2;
- (double)transitionRankFromRowTypeToNone:(unsigned long long)arg1;

@optional

- (bool)mayRowType:(unsigned long long)arg1 useTileInfos:(NSArray *)arg2 withPreferedContentSizeCategory:(NSString *)arg3;
- (NSArray *)preferredOrderingOfTileInfos:(NSArray *)arg1;

@end