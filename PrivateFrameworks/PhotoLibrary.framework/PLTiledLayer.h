/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLTiledLayer : CALayer <PLTileableLayer> {
    struct CGColorSpace { } * _colorspace;
    unsigned int  _conversionPixelFormat;
    NSObject<OS_dispatch_queue> * _conversionQueue;
    unsigned int  _decodePixelFormat;
    NSObject<OS_dispatch_queue> * _decodeQueue;
    int  _decoderCount;
    /* Warning: unhandled struct encoding: '{jpegDecoder=^{ajdec}@}' */ struct jpegDecoder { struct ajdec {} *x1; id x2; } * _decoders;
    int  _err;
    struct CGSize { 
        double width; 
        double height; 
    }  _fullSize;
    bool  _hasExtendedColorDisplay;
    NSData * _jpegData;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastVisibleRect;
    double  _lastZoomScale;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    int  _maxNumberOfTiles;
    <MTLCommandQueue> * _metalCmdQueue;
    MPSImageConversion * _metalConverter;
    <MTLDevice><MTLDeviceSPI> * _metalDevice;
    struct CGImage { } * _placeholderImage;
    CALayer * _placeholderLayer;
    unsigned int  _requestId;
    bool  _shouldTile;
    bool  _showTileBorders;
    NSMutableDictionary * _subLayers;
    struct iosPoolOpaque { } * _surfacePool;
    PLCache * _tileCache;
    int  _tilePixelSize;
    struct vImageConverter { } * _vimageConverter;
    NSMutableSet * _visibleTileIds;
    int  _zoomLevel;
    double  _zoomStartScale;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } jpegImageSize;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)decodeImageRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forLevel:(int)arg2 requestId:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
- (void)flushCache;
- (id)initWithJPEGData:(id)arg1 placeholderImage:(struct CGImage { }*)arg2 screenSize:(struct CGSize { double x1; double x2; })arg3;
- (struct CGSize { double x1; double x2; })jpegImageSize;
- (void)prepareForDecoding;
- (void)removeAllTiles;
- (void)runMetalConversionOnSurface:(struct __IOSurface { }*)arg1 completionHandler:(id /* block */)arg2;
- (void)runVImageConversionOnSurface:(struct __IOSurface { }*)arg1 completionHandler:(id /* block */)arg2;
- (void)setVisibleRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2;
- (void)setVisibleRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)setupConverterForSourceColorSpace:(struct CGColorSpace { }*)arg1 destinationColorSpace:(struct CGColorSpace { }*)arg2;
- (void)updateSubLayers:(id)arg1;
- (bool)visibleTileRegionHasChanged:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 level:(int)arg2;
- (double)zoomStartScaleForImage:(struct CGSize { double x1; double x2; })arg1 placeholderImageSize:(struct CGSize { double x1; double x2; })arg2;

@end
