/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCPhotoFaceCollectionGalleryCollection : NTKCFaceCollectionGalleryCollection <NTKPhotoAlbumObserverDelegate> {
    NSString * _albumName;
    CLKDevice * _device;
}

- (void).cxx_destruct;
- (id)initForDevice:(id)arg1;
- (id)newFace;
- (void)photoAlbumChanged:(id)arg1;

@end
