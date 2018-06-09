/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDActivitySummaryBuilder : NSObject {
    HDProfile * _profile;
    bool  _shouldIncludePrivateProperties;
    bool  _shouldIncludeStatistics;
}

@property (nonatomic) bool shouldIncludePrivateProperties;
@property (nonatomic) bool shouldIncludeStatistics;

- (void).cxx_destruct;
- (id)activitySummariesWithPredicate:(id)arg1 error:(id*)arg2;
- (void)activitySummariesWithPredicate:(id)arg1 handler:(id /* block */)arg2;
- (bool)enumerateActivitySummariesWithPredicate:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (void)setShouldIncludePrivateProperties:(bool)arg1;
- (void)setShouldIncludeStatistics:(bool)arg1;
- (bool)shouldIncludePrivateProperties;
- (bool)shouldIncludeStatistics;

@end