/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudSharingEnablingJob : PLCloudSharingJob {
    bool  _enableSharing;
}

@property (nonatomic) bool enableSharing;

+ (void)deleteAllLocalSharedAlbumsInLibrary:(id)arg1 keepPendingAlbums:(bool)arg2 withReason:(id)arg3;
+ (void)enableCloudSharing:(bool)arg1;

- (long long)daemonOperation;
- (id)description;
- (bool)enableSharing;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)run;
- (void)runDaemonSide;
- (void)setEnableSharing:(bool)arg1;
- (bool)shouldArchiveXPCToDisk;

@end
