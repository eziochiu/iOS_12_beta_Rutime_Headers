/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLVertexDescriptor : NSObject <NSCopying>

@property (readonly) MTLVertexAttributeDescriptorArray *attributes;
@property (readonly) MTLVertexBufferLayoutDescriptorArray *layouts;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)vertexDescriptor;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)reset;

@end
