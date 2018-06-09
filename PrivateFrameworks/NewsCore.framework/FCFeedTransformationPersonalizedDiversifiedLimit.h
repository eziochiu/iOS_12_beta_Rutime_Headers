/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedTransformationPersonalizedDiversifiedLimit : NSObject <FCLimitAwareFeedTransforming> {
    <FCFeedPersonalizing> * _feedPersonalizer;
    unsigned long long  _limit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <FCFeedPersonalizing> *feedPersonalizer;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long limit;
@property (readonly) Class superclass;

+ (id)transformationWithPersonalizer:(id)arg1;
+ (id)transformationWithPersonalizer:(id)arg1 limit:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)feedPersonalizer;
- (unsigned long long)limit;
- (void)setFeedPersonalizer:(id)arg1;
- (void)setLimit:(unsigned long long)arg1;
- (id)transformFeedItems:(id)arg1;
- (id)transformFeedItems:(id)arg1 withRespectToLimit:(unsigned long long)arg2;

@end
