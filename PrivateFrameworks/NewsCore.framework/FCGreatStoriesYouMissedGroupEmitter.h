/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCGreatStoriesYouMissedGroupEmitter : NSObject <FCFeedGroupEmitting> {
    <FCContentContext> * _context;
    unsigned long long  _limit;
}

@property (nonatomic, retain) <FCContentContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool emitsSingleRefreshSessionGroups;
@property (nonatomic, readonly) bool emitsSingletonGroups;
@property (nonatomic, readonly, copy) NSSet *emittableGroupTypes;
@property (nonatomic, readonly, copy) NSString *groupEmitterIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRequiredByFollowingEmitters;
@property (nonatomic) unsigned long long limit;
@property (nonatomic, readonly) long long requiredForYouContentTypes;
@property (readonly) Class superclass;

+ (bool)greatStoriesMayEmit:(id)arg1;
+ (void)setShouldEmitOverride:(bool)arg1;

- (void).cxx_destruct;
- (id)context;
- (bool)emitsSingletonGroups;
- (id)emittableGroupTypes;
- (id)groupEmitterIdentifier;
- (unsigned long long)limit;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (long long)requiredForYouContentTypes;
- (void)setContext:(id)arg1;
- (void)setLimit:(unsigned long long)arg1;
- (bool)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (bool)wantsToInsertGroup:(id)arg1 withContext:(id)arg2;

@end
