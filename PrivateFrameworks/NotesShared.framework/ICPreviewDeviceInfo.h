/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICPreviewDeviceInfo : NSObject {
    double  _imageSize;
    double  _scale;
}

@property (nonatomic) double imageSize;
@property (nonatomic) double scale;

- (id)description;
- (double)imageSize;
- (id)init;
- (id)initWithImageSize:(double)arg1 scale:(double)arg2;
- (double)scale;
- (void)setImageSize:(double)arg1;
- (void)setScale:(double)arg1;

@end
