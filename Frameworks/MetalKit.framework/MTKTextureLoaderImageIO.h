/* made by EzioChiu
   Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

@interface MTKTextureLoaderImageIO : MTKTextureLoaderData {
    struct CGImageBlockSet { } * _blockSet;
    unsigned long long  _bytesPerRow;
    struct __CFData { } * _cfData;
    NSData * _imageData;
    struct MTLPixelFormatInfo { 
        char *name; 
        unsigned int flags; 
        unsigned long long castClass; 
        union { 
            struct MTLNormalPixelFormatInfo { 
                unsigned long long pixelBytes; 
                unsigned char componentCount; 
                unsigned char alignment; 
                unsigned long long pixelBytesRender; 
                unsigned long long pixelBytesRenderMSAA; 
            } normal; 
            struct MTLCompressedPixelFormatInfo { 
                unsigned long long blockBytes; 
                unsigned long long blockWidth; 
                unsigned long long blockHeight; 
                unsigned long long blockDepth; 
            } compressed; 
        } type; 
    }  _pixelFormatInfo;
}

- (void)dealloc;
- (bool)decodeCGImage:(struct CGImage { }*)arg1 options:(id)arg2;
- (bool)decodeCGImageDataProvider:(struct CGImage { }*)arg1 options:(id)arg2;
- (bool)decodeCGImageImageProvider:(struct CGImage { }*)arg1 CGImageProvider:(struct CGImageProvider { }*)arg2 options:(id)arg3;
- (bool)determineCGImageBlockFormatWithComponentType:(int)arg1 alphaInfo:(unsigned int)arg2 andPixelSizeBytes:(unsigned long long)arg3 andColorSpace:(struct CGColorSpace { }*)arg4 isOptimized:(bool)arg5 options:(id)arg6;
- (id)getDataForArrayElement:(unsigned long long)arg1 face:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 bytesPerRow:(unsigned long long*)arg5 bytesPerImage:(unsigned long long*)arg6;
- (id)initWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2 error:(id*)arg3;
- (id)initWithData:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
