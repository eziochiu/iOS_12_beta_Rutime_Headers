/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDCKCacheDeleteManager : NSObject {
    bool  _allowsWritingToDisk;
    bool  _alreadyCapturedErrorWithAutoBugCapture;
    bool  _deviceLowOnDiskSpace;
}

@property (nonatomic) bool allowsWritingToDisk;
@property (nonatomic) bool alreadyCapturedErrorWithAutoBugCapture;
@property (getter=isDeviceLowOnDiskSpace, nonatomic) bool deviceLowOnDiskSpace;

+ (id)sharedInstance;

- (id)__wrapperAroundCacheDeletePurgeableCallback:(id)arg1 urgency:(int)arg2;
- (id)__wrapperAroundCacheDeletePurgingCallback:(id)arg1 urgency:(int)arg2;
- (id)_cacheDeleteRequestCacheableSpaceGuidanceWithID:(id)arg1 diskVolume:(id)arg2 urgency:(int)arg3 requestedSize:(unsigned long long)arg4;
- (void)_cacheDeleteSetUp;
- (id)_ckUtilitiesSharedInstance;
- (long long)_deleteAttachmentsAndReturnBytesDeleted:(int)arg1;
- (long long)_deleteFilesOnDiskAndUpdateTransfers:(id)arg1;
- (void)_fetchTransfersFromCloudKit:(id)arg1;
- (void)_fetchTransfersFromCloudKit:(id)arg1 indexOfTransfers:(unsigned long long)arg2 numberOfBatchesToFetch:(unsigned long long)arg3;
- (id)_fileTransfersToDelete:(struct __CFArray { }*)arg1;
- (id)_fileTransfersToValidate:(struct __CFArray { }*)arg1;
- (id)_getIndexSetForBatch:(id)arg1 indexOfTransfers:(unsigned long long)arg2;
- (unsigned long long)_indexOfNextBatch:(id)arg1 totalTransfers:(id)arg2 indexOfTransfers:(unsigned long long)arg3;
- (void)_postTransferInfoOfDeletedTransfers:(id)arg1;
- (long long)_purgeableSpaceGivenUrgency:(int)arg1;
- (bool)_shouldFetchNextBatch:(unsigned long long)arg1 totalTransfers:(id)arg2;
- (bool)allowsWritingToDisk;
- (bool)alreadyCapturedErrorWithAutoBugCapture;
- (bool)canWriteFileOfEstimatedSize:(unsigned long long)arg1 refreshCachedValue:(bool)arg2;
- (id)createDictionaryForNotDeletingAnyAttachments:(id)arg1 urgency:(int)arg2;
- (id)deleteAttachmentsAndReturnBytesDeleted:(id)arg1 urgency:(int)arg2;
- (id)init;
- (bool)isDeviceLowOnDiskSpace;
- (void)metricAttachmentsToPurge:(long long)arg1;
- (long long)purgeAttachments:(long long)arg1;
- (long long)purgeableAttachmentSize;
- (void)registerWithCacheDelete;
- (id)reportAvailableSpaceToBeDeleted:(id)arg1 urgency:(int)arg2;
- (void)setAllowsWritingToDisk:(bool)arg1;
- (void)setAlreadyCapturedErrorWithAutoBugCapture:(bool)arg1;
- (void)setDeviceLowOnDiskSpace:(bool)arg1;
- (bool)shouldDownloadAssetsOfSize:(unsigned long long)arg1 refreshCachedValue:(bool)arg2;

@end
