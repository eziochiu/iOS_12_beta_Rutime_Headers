/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityFileCoordinator : NSFileCoordinator {
    NSString * _localPeerID;
}

@property (nonatomic, readonly) NSString *localPeerID;

+ (id)newFileCoordinatorForUbiquitousExternalDataReferenceLocation:(id)arg1;
+ (id)newFileCoordinatorForUbiquityRootLocation:(id)arg1;
+ (id)newFileCoordinatorForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2;

- (bool)coordinateReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 retryOnError:(bool)arg3 error:(id*)arg4 byAccessor:(id /* block */)arg5;
- (void)dealloc;
- (id)initWithFilePresenter:(id)arg1;
- (id)localPeerID;
- (bool)shouldRetryForError:(id)arg1 ignoreFile:(bool*)arg2;

@end
