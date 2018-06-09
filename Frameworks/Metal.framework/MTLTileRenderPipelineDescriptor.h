/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLTileRenderPipelineDescriptor : NSObject <NSCopying>

@property (readonly) MTLTileRenderPipelineColorAttachmentDescriptorArray *colorAttachments;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) unsigned long long maxTotalThreadsPerThreadgroup;
@property (nonatomic) unsigned long long rasterSampleCount;
@property (nonatomic) bool threadgroupSizeMatchesTileSize;
@property (readonly) MTLPipelineBufferDescriptorArray *tileBuffers;
@property (nonatomic, retain) <MTLFunction> *tileFunction;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)reset;

@end
