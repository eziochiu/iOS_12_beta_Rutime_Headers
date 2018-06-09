/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLVertexBufferLayoutDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long stepFunction;
@property (nonatomic) unsigned long long stepRate;
@property (nonatomic) unsigned long long stride;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
