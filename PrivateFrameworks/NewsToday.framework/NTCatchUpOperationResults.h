/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTCatchUpOperationResults : NSObject <NSCopying> {
    NSArray * _items;
    SFRankingFeedback * _rankingFeedback;
    NSObject * _supplementalInterestToken;
}

@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly, copy) SFRankingFeedback *rankingFeedback;
@property (nonatomic, readonly) NSObject *supplementalInterestToken;

- (void).cxx_destruct;
- (id)copyWithItems:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFeedItems:(id)arg1 supplementalInterestToken:(id)arg2;
- (id)initWithHeadlines:(id)arg1 rankingFeedback:(id)arg2;
- (id)initWithItems:(id)arg1 rankingFeedback:(id)arg2 supplementalInterestToken:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)rankingFeedback;
- (id)resultsByCombiningWithResults:(id)arg1;
- (id)supplementalInterestToken;

@end
