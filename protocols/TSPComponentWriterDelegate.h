/* made by EzioChiu.
 */

@protocol TSPComponentWriterDelegate <NSObject>

@required

- (void)componentWriter:(void *)arg1 canSkipArchivingStronglyReferencedObject:(void *)arg2 fromComponentRootObject:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: TSPComponentWriter *, TSPObject *, TSPObject *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)componentWriter:(void *)arg1 wantsComponentOfObject:(void *)arg2 queue:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: TSPComponentWriter *, TSPObject *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TSPComponent *, void*
- (TSPObject *)componentWriter:(TSPComponentWriter *)arg1 wantsExplicitComponentRootObjectForObject:(TSPObject *)arg2 archiverOrNil:(TSPArchiver *)arg3 claimingComponent:(TSPComponent *)arg4 hasArchiverAccessLock:(bool)arg5;
- (void)componentWriterWantsDelayedObjects:(void *)arg1 queue:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: TSPComponentWriter *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (unsigned long long)objectTargetTypeForComponentWriter:(TSPComponentWriter *)arg1;

@optional

- (bool)componentWriter:(TSPComponentWriter *)arg1 externalPackageDidWriteObject:(TSPObject *)arg2 claimingComponent:(id*)arg3;
- (void)componentWriter:(void *)arg1 locatorForClaimingComponent:(void *)arg2 queue:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: TSPComponentWriter *, TSPComponent *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (bool)componentWriter:(TSPComponentWriter *)arg1 object:(TSPObject *)arg2 belongsToLinkedComponent:(TSPComponent *)arg3;
- (bool)componentWriter:(TSPComponentWriter *)arg1 shouldDelayWritingObject:(TSPObject *)arg2;
- (void)componentWriterNeedsDocumentRecovery:(TSPComponentWriter *)arg1;

@end
