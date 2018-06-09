/* made by EzioChiu
   Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

@interface MTKTextureLoaderKTX : MTKTextureLoaderData {
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

+ (bool)isKTXFile:(id)arg1;

- (void)dealloc;
- (unsigned long long)determineFormatFromSizedFormat:(unsigned long long)arg1;
- (unsigned long long)determineFormatFromType:(unsigned int)arg1 format:(unsigned int)arg2 internalFormat:(unsigned int)arg3 baseInternalFormat:(unsigned int)arg4;
- (id)getDataForArrayElement:(unsigned long long)arg1 face:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 bytesPerRow:(unsigned long long*)arg5 bytesPerImage:(unsigned long long*)arg6;
- (id)initWithData:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)parseKey:(id)arg1 value:(id)arg2 error:(id*)arg3;
- (bool)parseKeyValueBytes:(const char *)arg1 length:(unsigned long long)arg2 error:(id*)arg3;

@end
