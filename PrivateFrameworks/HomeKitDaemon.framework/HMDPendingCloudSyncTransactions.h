/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDPendingCloudSyncTransactions : HMFObject {
    NSMutableArray * _deltaReasonsSaved;
    HMDHomeManager * _homeManager;
    NSMutableArray * _pendingReasonsSaved;
    bool  _uploadInProgress;
}

@property (nonatomic, readonly) NSArray *allReasonsSaved;
@property (nonatomic, retain) NSMutableArray *deltaReasonsSaved;
@property (nonatomic, readonly) HMDHomeManager *homeManager;
@property (nonatomic, retain) NSMutableArray *pendingReasonsSaved;
@property (nonatomic, readonly) NSArray *reasonsSaved;
@property (nonatomic) bool uploadInProgress;

+ (id)convertSaveReasonToTransationReason:(id)arg1;

- (void).cxx_destruct;
- (void)_addReasonSaved:(id)arg1 information:(id)arg2;
- (void)addReasonSaved:(id)arg1 information:(id)arg2;
- (id)allReasonsSaved;
- (id)deltaReasonsSaved;
- (id)homeManager;
- (id)init;
- (id)initWithHomeManager:(id)arg1;
- (void)loadReasonsSaved:(id)arg1;
- (id)pendingReasonsSaved;
- (id)reasonsSaved;
- (void)reset;
- (void)setDeltaReasonsSaved:(id)arg1;
- (void)setPendingReasonsSaved:(id)arg1;
- (void)setUploadInProgress:(bool)arg1;
- (void)startUpload;
- (void)stopUploadAndClean;
- (void)stopUploadAndResume;
- (bool)uploadInProgress;

@end
