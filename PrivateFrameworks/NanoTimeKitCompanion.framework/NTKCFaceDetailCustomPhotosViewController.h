/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCFaceDetailCustomPhotosViewController : NTKCNavigationController <NTKCFaceDetailCustomPhotosViewControllerDelegate> {
    NTKCompanionCustomPhotosEditor * _editor;
    NTKFace * _face;
    _NTKCFaceDetailCustomPhotosViewController * _implementationVC;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKCFaceDetailCustomPhotosViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NTKCompanionCustomPhotosEditor *editor;
@property (nonatomic, retain) NTKFace *face;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool inGallery;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)customPhotosControllerDidFinish:(id)arg1;
- (id)editor;
- (id)face;
- (bool)inGallery;
- (id)initWithPhotosEditor:(id)arg1 forFace:(id)arg2 inGallery:(bool)arg3 faceView:(id)arg4 externalImagesSet:(bool)arg5;
- (void)setEditor:(id)arg1;
- (void)setFace:(id)arg1;

@end
