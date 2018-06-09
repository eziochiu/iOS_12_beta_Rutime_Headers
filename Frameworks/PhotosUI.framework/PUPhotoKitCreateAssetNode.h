/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoKitCreateAssetNode : PXRunNode <PUPhotoKitAssetNode> {
    PHAsset * _asset;
    <PUImageDataNode> * _imageDataNode;
    <PUVideoURLNode> * _videoURLNode;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (getter=isCanceled, readonly) bool canceled;
@property (getter=isComplete, readonly) bool complete;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXRunNodeDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PUImageDataNode> *imageDataNode;
@property (getter=isRunning, readonly) bool running;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PUVideoURLNode> *videoURLNode;
@property (getter=isWaiting, readonly) bool waiting;

- (void).cxx_destruct;
- (void)_handleDidCreateAsset:(id)arg1 error:(id)arg2;
- (id)asset;
- (id)imageDataNode;
- (id)initWithImageDataNode:(id)arg1 videoURLNode:(id)arg2;
- (void)run;
- (id)videoURLNode;

@end
