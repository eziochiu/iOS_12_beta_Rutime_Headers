/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLRankedLayout : NSObject <NSCopying> {
    NFLFeedCollectionViewLayoutAttributes * _layoutAttributes;
    double  _rank;
    NSMutableDictionary * _ranks;
    bool  _vetoed;
}

@property (nonatomic, retain) NFLFeedCollectionViewLayoutAttributes *layoutAttributes;
@property (nonatomic) double rank;
@property (nonatomic, copy) NSMutableDictionary *ranks;
@property (nonatomic) bool vetoed;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)layoutAttributes;
- (double)rank;
- (id)ranks;
- (void)setLayoutAttributes:(id)arg1;
- (void)setRank:(double)arg1;
- (void)setRanks:(id)arg1;
- (void)setVetoed:(bool)arg1;
- (bool)vetoed;

@end
