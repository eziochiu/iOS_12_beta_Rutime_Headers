/* made by EzioChiu
   Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

@interface MTKTextureLoaderData : NSObject {
    unsigned long long  _depth;
    unsigned long long  _height;
    NSString * _imageOrigin;
    unsigned long long  _numArrayElements;
    unsigned long long  _numFaces;
    unsigned long long  _numMipmapLevels;
    unsigned long long  _pixelFormat;
    unsigned long long  _textureType;
    unsigned long long  _width;
}

@property (nonatomic) unsigned long long depth;
@property (nonatomic) unsigned long long height;
@property (nonatomic, retain) NSString *imageOrigin;
@property (nonatomic) unsigned long long numArrayElements;
@property (nonatomic) unsigned long long numFaces;
@property (nonatomic) unsigned long long numMipmapLevels;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) unsigned long long textureType;
@property (nonatomic) unsigned long long width;

- (void)dealloc;
- (unsigned long long)depth;
- (id)getDataForArrayElement:(unsigned long long)arg1 face:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 bytesPerRow:(unsigned long long*)arg5 bytesPerImage:(unsigned long long*)arg6;
- (unsigned long long)height;
- (id)imageOrigin;
- (id)init;
- (unsigned long long)numArrayElements;
- (unsigned long long)numFaces;
- (unsigned long long)numMipmapLevels;
- (unsigned long long)pixelFormat;
- (void)setDepth:(unsigned long long)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (void)setImageOrigin:(id)arg1;
- (void)setNumArrayElements:(unsigned long long)arg1;
- (void)setNumFaces:(unsigned long long)arg1;
- (void)setNumMipmapLevels:(unsigned long long)arg1;
- (void)setPixelFormat:(unsigned long long)arg1;
- (void)setTextureType:(unsigned long long)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)textureType;
- (unsigned long long)width;

@end
