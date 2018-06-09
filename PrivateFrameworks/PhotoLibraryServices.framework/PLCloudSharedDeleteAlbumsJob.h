/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudSharedDeleteAlbumsJob : PLCloudSharingJob {
    NSArray * _albumCloudGUIDsToDelete;
}

@property (nonatomic, retain) NSArray *albumCloudGUIDsToDelete;

+ (void)deleteLocalAlbumsForMSASAlbumGUIDs:(id)arg1;

- (id)albumCloudGUIDsToDelete;
- (long long)daemonOperation;
- (void)dealloc;
- (id)description;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)run;
- (void)runDaemonSide;
- (void)setAlbumCloudGUIDsToDelete:(id)arg1;

@end
