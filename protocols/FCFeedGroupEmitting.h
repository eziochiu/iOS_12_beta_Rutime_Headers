/* made by EzioChiu.
 */

@protocol FCFeedGroupEmitting <FCFeedGroupInsertionDescriptor, NSObject>

@required

- (NSSet *)emittableGroupTypes;
- (NSString *)groupEmitterIdentifier;
- (FCFeedGroupEmittingOperation *)operationToEmitGroupWithContext:(FCFeedGroupEmittingContext *)arg1 fromCursor:(FCFeedGroupEmittingCursor *)arg2 toCursor:(FCFeedGroupEmittingCursor *)arg3;
- (bool)wantsToEmitGroupInContext:(FCFeedGroupEmittingContext *)arg1 fromCursor:(FCFeedGroupEmittingCursor *)arg2 toCursor:(FCFeedGroupEmittingCursor *)arg3;

@optional

- (NSString *)backingChannelTagIDWithConfiguration:(id <FCCoreConfiguration>)arg1;
- (bool)canMergeGroupsUnconditionally;
- (bool)canMergeHeadlinesFromGroup:(id <FCFeedGroupOutlining>)arg1 intoGroup:(id <FCFeedGroupOutlining>)arg2;
- (bool)emitsSingleRefreshSessionGroups;
- (bool)emitsSingletonGroups;
- (bool)isRequiredByFollowingEmitters;
- (long long)requiredForYouContentTypes;
- (bool)supportsPagination;

@end
