/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitEditSourceLoader : NSObject <PXEditSourceLoader> {
    int  _adjustmentDataRequestID;
    PHAsset * _asset;
    long long  _baseVersion;
    bool  _didBeginLoading;
    PLPhotoEditModel * _editModel;
    PLEditSource * _editSource;
    NSProgress * _editSourceCreationProgress;
    NSError * _error;
    int  _imageRequestID;
    NSURL * _imageURL;
    NSString * _livePhotoPairingIdentifier;
    NSNumber * _loadDuration;
    NSObject<OS_dispatch_queue> * _loadingQueue;
    NSDate * _loadingStartDate;
    NSProgress * _progress;
    int  _videoRequestID;
    NSURL * _videoURL;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, readonly) long long baseVersion;
@property (nonatomic, readonly, copy) NSString *contentIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) PLPhotoEditModel *editModel;
@property (nonatomic, readonly) PLEditSource *editSource;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *livePhotoPairingIdentifier;
@property (nonatomic, readonly) NSNumber *loadDuration;
@property (nonatomic, readonly) NSProgress *progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createEditSourceIfPossible;
- (void)_handleAdjustmentDataInfo:(id)arg1;
- (void)_handleCancellation;
- (void)_handleImageURLResult:(id)arg1 info:(id)arg2;
- (void)_handleVideoURLResult:(id)arg1 info:(id)arg2;
- (id)asset;
- (long long)baseVersion;
- (void)beginLoading;
- (id)contentIdentifier;
- (id)editModel;
- (id)editSource;
- (id)error;
- (id)initWithAsset:(id)arg1;
- (id)livePhotoPairingIdentifier;
- (id)loadDuration;
- (id)progress;

@end