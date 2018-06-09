/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLJPEGThumbnailPreheater : NSObject <PLPreheatItemSource> {
    PLThumbFileManager * _manager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithThumbFileManager:(id)arg1;
- (id)originalPreheatItemForAsset:(id)arg1 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg2 options:(unsigned int)arg3;
- (id)preheatItemForAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg3 options:(unsigned int)arg4;

@end
