/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVCGImageBufferImpl : NSObject <PVImageBufferImpl> {
    struct HGRef<HGBitmap> { 
        struct HGBitmap {} *m_Obj; 
    }  _generatedBitmap;
    struct HGRef<HGCVPixelBuffer> { 
        struct HGCVPixelBuffer {} *m_Obj; 
    }  _generatedPixelBuffer;
    struct CGImage { } * _image;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)canCreateCVPixelBuffer;
- (bool)canCreateHGBitmap;
- (struct CGImage { }*)cgImage;
- (bool)cvPixelBufferRequiresCopy;
- (struct HGRef<HGCVPixelBuffer> { struct HGCVPixelBuffer {} *x1; })cvPixelBufferWithColorSpace:(id)arg1;
- (void)dealloc;
- (struct HGRef<HGBitmap> { struct HGBitmap {} *x1; })hgBitmapWithColorSpace:(id)arg1;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
