/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPlaceholderThumbnailManager : NSObject {
    NSObject<OS_dispatch_queue> * _isolation;
    NSCache * _placeholderDataCache;
    NSCache * _placeholderImageCache;
}

+ (id)sharedManager;

- (id)_cacheKeyForFormat:(id)arg1 photoImageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_placeholderImage;
- (void)dealloc;
- (id)init;
- (id)newPlaceholderImageForFormat:(int)arg1 photoImageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)placeholderDataForFormat:(int)arg1 photoImageSize:(struct CGSize { double x1; double x2; })arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8;

@end
