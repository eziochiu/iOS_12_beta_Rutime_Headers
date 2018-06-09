/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKTextureAtlasPacker : NSObject

+ (struct CGImage { }*)copyProcessedImageSource:(id)arg1;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calcNonAlphaArea:(struct CGImage { }*)arg1;
- (struct CGImage { }*)copyRotateCGImage:(struct CGImage { }*)arg1 direction:(bool)arg2;
- (id)generateMetaData;
- (void)generateTextureAtlasImages:(id)arg1 outputDictionary:(id*)arg2 forcePOT:(bool)arg3;
- (id)getTextureFileList:(id)arg1 modDate:(id*)arg2;
- (bool)isFullyOpaque:(struct CGImage { }*)arg1;
- (id)partitionTextureFilesByResolution:(id)arg1;
- (id)processPackedTextureAtlas:(const struct vector<CGSize, std::__1::allocator<CGSize> > { struct CGSize {} *x1; struct CGSize {} *x2; struct __compressed_pair<CGSize *, std::__1::allocator<CGSize> > { struct CGSize {} *x_3_1_1; } x3; }*)arg1 suffix:(id)arg2 packer:(struct shared_ptr<MaxRectTexturePacker> { struct MaxRectTexturePacker {} *x1; struct __shared_weak_count {} *x2; })arg3 sortedTrimArray:(const struct vector<CGRect, std::__1::allocator<CGRect> > { struct CGRect {} *x1; struct CGRect {} *x2; struct __compressed_pair<CGRect *, std::__1::allocator<CGRect> > { struct CGRect {} *x_3_1_1; } x3; }*)arg4 sortedTextureArray:(const struct vector<TextureInfo, std::__1::allocator<TextureInfo> > { struct TextureInfo {} *x1; struct TextureInfo {} *x2; struct __compressed_pair<TextureInfo *, std::__1::allocator<TextureInfo> > { struct TextureInfo {} *x_3_1_1; } x3; }*)arg5;

@end
