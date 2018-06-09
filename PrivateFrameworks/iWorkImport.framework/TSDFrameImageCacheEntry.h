/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDFrameImageCacheEntry : NSObject {
    double  mAssetScale;
    TSDFrameSpec * mFrameSpec;
    struct CGImage {} * mImages;
    struct CGSize { 
        double width; 
        double height; 
    }  mSize;
    double  mViewScale;
}

@property (nonatomic) double assetScale;
@property (nonatomic) TSDFrameSpec *frameSpec;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) double viewScale;

- (double)assetScale;
- (void)dealloc;
- (id)frameSpec;
- (struct CGImage { }*)newImageForCALayer:(bool)arg1 mask:(bool)arg2;
- (void)setAssetScale:(double)arg1;
- (void)setFrameSpec:(id)arg1;
- (void)setImage:(struct CGImage { }*)arg1 forCALayer:(bool)arg2 mask:(bool)arg3;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setViewScale:(double)arg1;
- (struct CGSize { double x1; double x2; })size;
- (double)viewScale;

@end
