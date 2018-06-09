/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedTransformationPersonalizedSortAndDiversify : NSObject <FCFeedTransforming> {
    <FCFeedPersonalizing> * _feedPersonalizer;
    unsigned long long  _limit;
    NSArray * _preselectedItems;
    long long  _sortOptions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <FCFeedPersonalizing> *feedPersonalizer;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long limit;
@property (nonatomic, retain) NSArray *preselectedItems;
@property (nonatomic) long long sortOptions;
@property (readonly) Class superclass;

+ (id)transformationWithPersonalizer:(id)arg1 limit:(unsigned long long)arg2;
+ (id)transformationWithPersonalizer:(id)arg1 sortOptions:(long long)arg2 limit:(unsigned long long)arg3;
+ (id)transformationWithPersonalizer:(id)arg1 sortOptions:(long long)arg2 limit:(unsigned long long)arg3 preselectedItems:(id)arg4;

- (void).cxx_destruct;
- (id)feedPersonalizer;
- (unsigned long long)limit;
- (id)preselectedItems;
- (void)setFeedPersonalizer:(id)arg1;
- (void)setLimit:(unsigned long long)arg1;
- (void)setPreselectedItems:(id)arg1;
- (void)setSortOptions:(long long)arg1;
- (long long)sortOptions;
- (id)transformFeedItems:(id)arg1;

@end
