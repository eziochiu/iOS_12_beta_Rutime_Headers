/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBApplicationSnapshotManifest : NSObject <BSDescriptionProviding, XBApplicationSnapshotManifestDelegate> {
    <XBApplicationSnapshotManifestDelegate> * _delegate;
    XBApplicationSnapshotManifestImpl * _manifestImpl;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *containerPath;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <XBApplicationSnapshotManifestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) XBApplicationSnapshotManifestImpl *manifestImpl;
@property (readonly) Class superclass;

+ (id)_manifestQueue;
+ (id)_manifestsByIdentity;
+ (id)debugDescription;
+ (void)deleteAllSystemSnapshots;
+ (void)initialize;
+ (unsigned long long)maximumInFlightDataSize;

- (void).cxx_destruct;
- (bool)_invalidate;
- (void)beginSnapshotAccessTransaction:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)bundleIdentifier;
- (id)containerPath;
- (id)createSnapshotWithGroupID:(id)arg1;
- (id)createVariantForSnapshot:(id)arg1 withIdentifier:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)deleteAllSnapshots;
- (void)deleteSnapshot:(id)arg1;
- (void)deleteSnapshots:(id)arg1;
- (void)deleteSnapshotsForGroupID:(id)arg1;
- (void)deleteSnapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2;
- (void)deleteSnapshotsForGroupID:(id)arg1 predicateBuilder:(id /* block */)arg2;
- (void)deleteSnapshotsMatchingPredicate:(id)arg1;
- (void)deleteSnapshotsUsingPredicateBuilder:(id /* block */)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)generateImageForSnapshot:(id)arg1 dataProvider:(id)arg2 writeToFile:(bool)arg3 completion:(id /* block */)arg4;
- (void)generateImageForSnapshot:(id)arg1 dataProvider:(id)arg2 writeToFile:(bool)arg3 didGenerateImage:(id /* block */)arg4 didSaveImage:(id /* block */)arg5;
- (id)initWithApplicationInfo:(id)arg1;
- (id)initWithContainerIdentity:(id)arg1 store:(id)arg2;
- (void)manifestDidUpdateUnderMemoryPressure:(id)arg1;
- (id)manifestImpl;
- (void)saveSnapshot:(id)arg1 atPath:(id)arg2 withContext:(id)arg3;
- (void)setDelegate:(id)arg1;
- (id)snapshotsForGroupID:(id)arg1;
- (id)snapshotsForGroupID:(id)arg1 fetchRequest:(id)arg2;
- (id)snapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
