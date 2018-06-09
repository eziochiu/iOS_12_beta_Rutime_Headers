/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLTwelveColumnFeedLayoutSearchConfiguration : NSObject <NFLFeedLayoutSearchConfiguration> {
    NSString * _preferredContentSizeCategory;
    bool  _showAccessoryText;
}

@property (nonatomic, readonly) NSArray *allRowTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *preferredContentSizeCategory;
@property (nonatomic, readonly) unsigned long long preferredTileInfoBatchSize;
@property (getter=isShowingAccessoryText, nonatomic) bool showAccessoryText;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)_tilingOperationClassForRowType:(unsigned long long)arg1;
- (id)_transitionRankByToRowTypeFromRowType:(unsigned long long)arg1;
- (id)_transitions;
- (id)allRowTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionForRowType:(unsigned long long)arg1;
- (bool)isShowingAccessoryText;
- (bool)mayRowType:(unsigned long long)arg1 useTileInfos:(id)arg2 withPreferedContentSizeCategory:(id)arg3;
- (id)nextRowTypeCandidatesForRowType:(unsigned long long)arg1;
- (unsigned long long)numberOfTileInfosUsedByRowType:(unsigned long long)arg1;
- (id)preferredContentSizeCategory;
- (id)preferredOrderingOfTileInfos:(id)arg1;
- (unsigned long long)preferredTileInfoBatchSize;
- (Class)rankedLayoutGenerationOperationClassForRequest:(id)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setShowAccessoryText:(bool)arg1;
- (struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; })subBatchLayoutSeedForRowType:(unsigned long long)arg1 withTileInfos:(id)arg2;
- (Class)subBatchLayoutTilingOperationClassForRowType:(unsigned long long)arg1;
- (bool)supportsTileInfoType:(unsigned long long)arg1;
- (double)transitionRankFromNoneToRowType:(unsigned long long)arg1;
- (double)transitionRankFromRowType:(unsigned long long)arg1 toRowType:(unsigned long long)arg2;
- (double)transitionRankFromRowTypeToNone:(unsigned long long)arg1;

@end