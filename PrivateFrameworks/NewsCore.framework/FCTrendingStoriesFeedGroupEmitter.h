/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTrendingStoriesFeedGroupEmitter : NSObject <FCFeedGroupEmitting> {
    long long  _desiredArticlesCount;
    unsigned long long  _minPrecedingTopicGroups;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long desiredArticlesCount;
@property (nonatomic, readonly) bool emitsSingleRefreshSessionGroups;
@property (nonatomic, readonly) bool emitsSingletonGroups;
@property (nonatomic, readonly, copy) NSSet *emittableGroupTypes;
@property (nonatomic, readonly, copy) NSString *groupEmitterIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRequiredByFollowingEmitters;
@property (nonatomic) unsigned long long minPrecedingTopicGroups;
@property (nonatomic, readonly) long long requiredForYouContentTypes;
@property (readonly) Class superclass;

- (id)backingChannelTagIDWithConfiguration:(id)arg1;
- (long long)desiredArticlesCount;
- (bool)emitsSingletonGroups;
- (id)emittableGroupTypes;
- (id)groupEmitterIdentifier;
- (id)initWithMinPrecedingTopicGroups:(unsigned long long)arg1 desiredArticlesCount:(long long)arg2;
- (unsigned long long)minPrecedingTopicGroups;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (long long)requiredForYouContentTypes;
- (void)setDesiredArticlesCount:(long long)arg1;
- (void)setMinPrecedingTopicGroups:(unsigned long long)arg1;
- (bool)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (bool)wantsToInsertGroup:(id)arg1 withContext:(id)arg2;

@end
