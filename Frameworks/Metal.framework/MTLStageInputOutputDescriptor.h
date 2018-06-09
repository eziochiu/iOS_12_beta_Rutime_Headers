/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLStageInputOutputDescriptor : NSObject <NSCopying>

@property (readonly) MTLAttributeDescriptorArray *attributes;
@property (nonatomic) unsigned long long indexBufferIndex;
@property (nonatomic) unsigned long long indexType;
@property (readonly) MTLBufferLayoutDescriptorArray *layouts;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)stageInputOutputDescriptor;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)reset;

@end
