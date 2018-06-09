/* made by EzioChiu.
 */

@protocol GEOMapItemPhoto <NSObject>

@required

- (NSString *)author;
- (<GEOMapItemPhotoInfo> *)bestPhotoForSize:(struct CGSize { double x1; double x2; })arg1 allowSmaller:(bool)arg2;
- (NSString *)caption;
- (bool)displayFullPhotoInline;
- (<GEOMapItemPhotoInfo> *)largestPhoto;
- (NSString *)licenseDescription;
- (NSURL *)licenseURL;
- (double)sizeRatio;
- (NSString *)uid;
- (bool)useGallery;

@end
