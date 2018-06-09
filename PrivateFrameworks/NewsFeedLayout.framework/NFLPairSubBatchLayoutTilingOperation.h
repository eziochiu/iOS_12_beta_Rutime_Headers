/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLPairSubBatchLayoutTilingOperation : NFLSubBatchLayoutTilingOperation {
    bool  _preferImageOnSidePairs;
}

@property (nonatomic) bool preferImageOnSidePairs;

+ (unsigned long long)tileInfosUsedCount;

- (bool)isReliable;
- (bool)preferImageOnSidePairs;
- (id)rankedLayoutRequests;
- (void)setPreferImageOnSidePairs:(bool)arg1;
- (id)tiledSubBatchLayoutWithRankedLayoutsByTileInfo:(id)arg1;

@end
