/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKPhotoPickerItemForSending : NSObject {
    NSURL * _assetURL;
    <CKPhotoPickerItemForSendingDelegate> * _delegate;
    NSURL * _extraVideoURL;
    bool  _isVideo;
    NSURL * _localURL;
    NSObject<OS_dispatch_semaphore> * _outstandingWork;
    bool  _sendIris;
    UIImage * _thumbnail;
}

@property (nonatomic, readonly) NSURL *assetURL;
@property (nonatomic) <CKPhotoPickerItemForSendingDelegate> *delegate;
@property (nonatomic, retain) NSURL *extraVideoURL;
@property (nonatomic, readonly) bool isVideo;
@property (nonatomic, readonly) NSURL *localURL;
@property (nonatomic) bool sendIris;
@property (retain) UIImage *thumbnail;

- (void).cxx_destruct;
- (void)_fetchAndPersistImageDataForAsset:(id)arg1 withImageManager:(id)arg2;
- (id)assetURL;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)extraVideoURL;
- (id)initWithAssetURL:(id)arg1 isVideo:(bool)arg2;
- (id)initWithImageManager:(id)arg1 asset:(id)arg2 delegate:(id)arg3;
- (bool)isVideo;
- (id)localURL;
- (bool)sendIris;
- (void)setDelegate:(id)arg1;
- (void)setExtraVideoURL:(id)arg1;
- (void)setSendIris:(bool)arg1;
- (void)setThumbnail:(id)arg1;
- (id)thumbnail;
- (void)waitForOutstandingWork;

@end
