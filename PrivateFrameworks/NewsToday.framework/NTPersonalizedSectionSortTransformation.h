/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTPersonalizedSectionSortTransformation : NSObject <FCFeedTransforming> {
    NSOrderedSet * _mandatoryArticleIDs;
    NSOrderedSet * _personalizedArticleIDs;
    <FCFeedTransforming> * _sortTransformation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSOrderedSet *mandatoryArticleIDs;
@property (nonatomic, copy) NSOrderedSet *personalizedArticleIDs;
@property (nonatomic, retain) <FCFeedTransforming> *sortTransformation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMandatoryArticleIDs:(id)arg1 personalizedArticleIDs:(id)arg2 sortTransformation:(id)arg3;
- (id)mandatoryArticleIDs;
- (id)personalizedArticleIDs;
- (void)setMandatoryArticleIDs:(id)arg1;
- (void)setPersonalizedArticleIDs:(id)arg1;
- (void)setSortTransformation:(id)arg1;
- (id)sortTransformation;
- (id)transformFeedItems:(id)arg1;

@end
