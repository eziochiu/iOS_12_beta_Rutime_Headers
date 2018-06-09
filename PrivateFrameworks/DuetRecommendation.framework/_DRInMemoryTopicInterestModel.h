/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
 */

@interface _DRInMemoryTopicInterestModel : NSObject <_DRTopicInterestModeling> {
    _DRTopicInterestSummary * _summary;
    NSObject<OS_dispatch_queue> * _syncQueue;
    NSMutableArray * _topics;
}

+ (id)predicateForTopicInteractionsAfter:(id)arg1;
+ (id)predicateForTopicInteractionsBefore:(id)arg1;
+ (id)predicateForTopicsWithPrefix:(id)arg1;

- (void).cxx_destruct;
- (id)computeSummaryWithFilter:(id)arg1;
- (void)enumerateTopicCountsWithFilter:(id)arg1 block:(id /* block */)arg2;
- (id)init;
- (void)purgeEntriesEarlierThanDate:(id)arg1;
- (void)purgeEntriesWithPrefix:(id)arg1 earlierThanDate:(id)arg2;
- (void)recordPresentationOfTopics:(id)arg1 onDate:(id)arg2;
- (void)recordSelectionOfTopics:(id)arg1 onDate:(id)arg2;

@end
