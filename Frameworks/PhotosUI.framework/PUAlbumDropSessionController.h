/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAlbumDropSessionController : NSObject <PUPhotoStreamComposeServiceDelegate, PUVideoTrimQueueControllerDelegate> {
    PUPhotoStreamComposeServiceViewController * _composeServiceController;
    PUVideoTrimQueueController * _trimController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)controller:(id)arg1 didCancelTrimmingVideoSources:(id)arg2;
- (void)controller:(id)arg1 didFinishTrimmingVideoSources:(id)arg2;
- (void)handleAddToCloudSharedAlbum:(id)arg1 pickedAssets:(id)arg2 context:(id)arg3;
- (void)performDrop:(id)arg1 context:(id)arg2;
- (void)photoStreamComposeService:(id)arg1 didPostComment:(id)arg2;
- (void)photoStreamComposeServiceDidCancel:(id)arg1;

@end
