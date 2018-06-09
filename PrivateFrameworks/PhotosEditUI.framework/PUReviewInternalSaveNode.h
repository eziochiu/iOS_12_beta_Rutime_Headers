/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUReviewInternalSaveNode : PXRunNode <PUAdjustmentURLNode, PUImageDataRenderNode, PUImageInfoNode, PUReviewImageURLNode, PUReviewVideoURLNode, PUVideoURLExportNode> {
    NSURL * _adjustmentURL;
    struct CGSize { 
        double width; 
        double height; 
    }  _baseImageSize;
    NSURL * _directory;
    NSData * _imageData;
    PUEditableMediaProviderImageDataNode * _imageDataNode;
    NSURL * _imageDataURL;
    NSString * _imageDataUTI;
    long long  _imageExifOrientation;
    PUImageDataRenderNode * _imageRenderNode;
    PUPhotoEditIrisModel * _livePhotoModel;
    NSURL * _providedFullsizeImageURL;
    NSURL * _providedVideoURL;
    struct CGSize { 
        double width; 
        double height; 
    }  _renderedImageSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _renderedVideoSize;
    PUVideoExportNode * _videoRenderNode;
    NSURL * _videoURL;
    PUEditableMediaProviderVideoURLNode * _videoURLNode;
}

@property (nonatomic, readonly) NSURL *adjustmentURL;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } baseImageSize;
@property (getter=isCanceled, readonly) bool canceled;
@property (getter=isComplete, readonly) bool complete;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXRunNodeDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *directory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) PUEditableMediaProviderImageDataNode *imageDataNode;
@property (nonatomic, readonly) NSURL *imageDataURL;
@property (nonatomic, readonly) NSString *imageDataUTI;
@property (nonatomic, readonly) long long imageExifOrientation;
@property (nonatomic, readonly) PUImageDataRenderNode *imageRenderNode;
@property (nonatomic, readonly, copy) PUPhotoEditIrisModel *livePhotoModel;
@property (nonatomic, readonly) NSURL *providedFullsizeImageURL;
@property (nonatomic, readonly) NSURL *providedVideoURL;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } renderedImageSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } renderedVideoSize;
@property (getter=isRunning, readonly) bool running;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PUVideoExportNode *videoRenderNode;
@property (nonatomic, readonly) NSURL *videoURL;
@property (nonatomic, readonly) PUEditableMediaProviderVideoURLNode *videoURLNode;
@property (getter=isWaiting, readonly) bool waiting;

- (void).cxx_destruct;
- (long long)_adjustmentBaseVersion;
- (double)_baseDuration;
- (long long)_baseExifOrientation;
- (id)_exportProperties;
- (id)adjustmentURL;
- (struct CGSize { double x1; double x2; })baseImageSize;
- (id)directory;
- (id)imageData;
- (id)imageDataNode;
- (id)imageDataURL;
- (id)imageDataUTI;
- (long long)imageExifOrientation;
- (id)imageRenderNode;
- (id)initWithDirectory:(id)arg1 imageDataNode:(id)arg2 imageRenderNode:(id)arg3 videoURLNode:(id)arg4 videoRenderNode:(id)arg5 livePhotoModel:(id)arg6;
- (id)livePhotoModel;
- (id)providedFullsizeImageURL;
- (id)providedVideoURL;
- (struct CGSize { double x1; double x2; })renderedImageSize;
- (struct CGSize { double x1; double x2; })renderedVideoSize;
- (void)run;
- (id)videoRenderNode;
- (id)videoURL;
- (id)videoURLNode;

@end
