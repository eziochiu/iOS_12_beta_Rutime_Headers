/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBFileSystemManager : NSObject {
    NSString * _currentSnapshotName;
    NSString * _currentSnapshotPath;
    NSString * _fileSystemType;
    bool  _supportsLocalSnapshots;
    bool  _supportsSparseFiles;
}

@property (nonatomic, readonly) NSString *currentSnapshotName;
@property (nonatomic, readonly) NSString *currentSnapshotPath;
@property (nonatomic, retain) NSString *fileSystemType;
@property (nonatomic, readonly) bool supportsLocalSnapshots;
@property (nonatomic, readonly) bool supportsSparseFiles;

+ (unsigned long long)availableCacheSize;
+ (unsigned long long)fileSystemCapacity;
+ (id)sharedManager;

- (void).cxx_destruct;
- (bool)_fileSystemSupportsSnapshots;
- (bool)_fileSystemSupportsSparseFiles;
- (id)_snapshotName:(id)arg1;
- (id)currentSnapshotName;
- (id)currentSnapshotPath;
- (id)description;
- (id)fileSystemType;
- (id)init;
- (id)listAllSnapshotsWithError:(id*)arg1;
- (bool)mountSnapshot:(id)arg1 atMountPoint:(id)arg2 withError:(id*)arg3;
- (bool)removeAllMobileBackupInternalSnapshots:(id*)arg1;
- (bool)removeAllMobileBackupSnapshots:(id*)arg1;
- (unsigned long long)removeRestorePrefetchCache;
- (unsigned long long)removeRestorePrefetchCacheWithEarliestDate:(id)arg1;
- (bool)removeSnapshot:(id)arg1 withError:(id*)arg2;
- (void)setFileSystemType:(id)arg1;
- (bool)snapshotFilesystem:(id)arg1 withError:(id*)arg2;
- (bool)snapshotFilesystemWithSnapshotName:(id)arg1 withError:(id*)arg2;
- (bool)supportsLocalSnapshots;
- (bool)supportsSparseFiles;
- (bool)unmountCurrentSnapshotAndRenameToInternalArchive:(id*)arg1;
- (bool)unmountCurrentSnapshotFromMountPoint:(id)arg1 andRemoveIt:(bool)arg2 withError:(id*)arg3;

@end
