/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImageRequesterChange : NSObject {
    bool  _fullsizeImageDataDidChange;
    bool  _fullsizeImageURLDidChange;
    bool  _imageDidChange;
    bool  _imageIsFullQualityDidChange;
}

@property (nonatomic, readonly) bool changed;
@property (setter=_setFullsizeImageDataDidChange:, nonatomic) bool fullsizeImageDataDidChange;
@property (setter=_setFullsizeImageURLDidChange:, nonatomic) bool fullsizeImageURLDidChange;
@property (setter=_setImageDidChange:, nonatomic) bool imageDidChange;
@property (setter=_setImageIsFullQualityDidChange:, nonatomic) bool imageIsFullQualityDidChange;

- (void)_setFullsizeImageDataDidChange:(bool)arg1;
- (void)_setFullsizeImageURLDidChange:(bool)arg1;
- (void)_setImageDidChange:(bool)arg1;
- (void)_setImageIsFullQualityDidChange:(bool)arg1;
- (bool)changed;
- (bool)fullsizeImageDataDidChange;
- (bool)fullsizeImageURLDidChange;
- (bool)imageDidChange;
- (bool)imageIsFullQualityDidChange;

@end
