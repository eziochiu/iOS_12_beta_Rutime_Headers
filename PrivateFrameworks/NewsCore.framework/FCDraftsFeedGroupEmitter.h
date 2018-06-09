/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCDraftsFeedGroupEmitter : NSObject <FCFeedGroupEmitting> {
    NSString * _articleList;
}

@property (nonatomic, readonly) NSString *articleList;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool emitsSingleRefreshSessionGroups;
@property (nonatomic, readonly) bool emitsSingletonGroups;
@property (nonatomic, readonly, copy) NSSet *emittableGroupTypes;
@property (nonatomic, readonly, copy) NSString *groupEmitterIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRequiredByFollowingEmitters;
@property (nonatomic, readonly) long long requiredForYouContentTypes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)articleList;
- (bool)canMergeGroupsUnconditionally;
- (id)emittableGroupTypes;
- (id)groupEmitterIdentifier;
- (id)initWithArticleList:(id)arg1;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (bool)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (bool)wantsToInsertGroup:(id)arg1 withContext:(id)arg2;

@end
