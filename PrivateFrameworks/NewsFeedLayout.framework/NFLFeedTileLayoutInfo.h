/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLFeedTileLayoutInfo : NSObject <NSCopying> {
    NFLFeedCollectionViewLayoutAttributes * _layoutAttributes;
    NSObject<NFLFeedTileInfo> * _tileInfo;
}

@property (nonatomic, copy) NFLFeedCollectionViewLayoutAttributes *layoutAttributes;
@property (nonatomic, copy) NSObject<NFLFeedTileInfo> *tileInfo;

+ (id)nfl_layoutInfoWithTileInfo:(id)arg1 forLayoutAttributes:(id)arg2 atRowOrigin:(long long)arg3 columnOrigin:(long long)arg4 subBatchRowOffset:(long long)arg5 feedSettings:(id)arg6;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTileInfo:(id)arg1 layoutAttributes:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)layoutAttributes;
- (void)setLayoutAttributes:(id)arg1;
- (void)setTileInfo:(id)arg1;
- (id)tileInfo;

@end
