/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIndirectCommandBufferDescriptor : NSObject

@property (nonatomic) unsigned long long commandTypes;
@property (nonatomic) bool inheritBuffers;
@property (nonatomic) bool inheritPipelineState;
@property (nonatomic) unsigned long long maxFragmentBufferBindCount;
@property (nonatomic) unsigned long long maxVertexBufferBindCount;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
