/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPlaceholderImage : NSObject {
    NSCache * _dumbCache;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (struct CGImage { }*)_newMasterPlaceholderImageRef;
- (id)_placeholderImageFilePath;
- (id)init;
- (struct CGImage { }*)newPlaceholderImageWithSize:(struct CGSize { double x1; double x2; })arg1;

@end
