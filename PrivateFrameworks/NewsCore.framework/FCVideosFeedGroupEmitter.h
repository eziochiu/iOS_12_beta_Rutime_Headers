/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCVideosFeedGroupEmitter : NSObject <FCFeedGroupEmitting> {
    <FCFeedGroupInsertionDescriptor> * _insertionDescriptor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool emitsSingleRefreshSessionGroups;
@property (nonatomic, readonly) bool emitsSingletonGroups;
@property (nonatomic, readonly, copy) NSSet *emittableGroupTypes;
@property (nonatomic, readonly, copy) NSString *groupEmitterIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) <FCFeedGroupInsertionDescriptor> *insertionDescriptor;
@property (nonatomic, readonly) bool isRequiredByFollowingEmitters;
@property (nonatomic, readonly) long long requiredForYouContentTypes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)backingChannelTagIDWithConfiguration:(id)arg1;
- (bool)emitsSingleRefreshSessionGroups;
- (id)emittableGroupTypes;
- (id)groupEmitterIdentifier;
- (id)init;
- (id)initWithInsertionDescriptor:(id)arg1;
- (id)insertionDescriptor;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (long long)requiredForYouContentTypes;
- (bool)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (bool)wantsToInsertGroup:(id)arg1 withContext:(id)arg2;

@end
