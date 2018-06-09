/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

@interface TXRTexture : NSObject <NSCopying> {
    unsigned long long  _alphaInfo;
    <TXRBufferAllocator> * _bufferAllocator;
    bool  _cubemap;
    void _dimensions;
    NSMutableArray * _mipmapLevels;
    unsigned long long  _pixelFormat;
}

@property (nonatomic, readonly) unsigned long long alphaInfo;
@property (nonatomic, readonly) bool cubemap;
@property (nonatomic, readonly) void dimensions;
@property (nonatomic, readonly) NSArray *mipmapLevels;
@property (nonatomic, readonly) unsigned long long pixelFormat;

- (void).cxx_destruct;
- (unsigned long long)alphaInfo;
- (id)copyWithPixelFormat:(unsigned long long)arg1 options:(id)arg2 bufferAllocator:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)cubemap;
- (void)dimensions;
- (id)exportToAssetCatalogWithName:(id)arg1 location:(id)arg2 error:(id*)arg3;
- (bool)exportToURL:(id)arg1 error:(id*)arg2;
- (void)generateMipmapsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 filter:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)initWithData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)initWithDataSourceProvider:(id)arg1;
- (id)initWithDimensions:(void *)arg1 pixelFormat:(void *)arg2 alphaInfo:(void *)arg3 mipmapLevelCount:(void *)arg4 arrayLength:(void *)arg5 cubemap:(void *)arg6 bufferAllocator:(void *)arg7; // needs 7 arg types, found 6: unsigned long long, unsigned long long, unsigned long long, unsigned long long, bool, id
- (id)mipmapLevels;
- (unsigned long long)pixelFormat;
- (void)reformat:(unsigned long long)arg1 gammaDegamma:(bool)arg2 bufferAllocator:(id)arg3 error:(id*)arg4;

@end
