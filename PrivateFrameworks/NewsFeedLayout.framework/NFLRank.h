/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLRank : NSObject {
    double  _rank;
    long long  _rankWeight;
}

@property (nonatomic) double rank;
@property (nonatomic) long long rankWeight;

+ (id)rankWithRank:(double)arg1 rankWeight:(long long)arg2;

- (id)description;
- (double)rank;
- (long long)rankWeight;
- (void)setRank:(double)arg1;
- (void)setRankWeight:(long long)arg1;

@end
