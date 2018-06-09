/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLStencilDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long depthFailureOperation;
@property (nonatomic) unsigned long long depthStencilPassOperation;
@property (nonatomic) unsigned int readMask;
@property (nonatomic) unsigned long long stencilCompareFunction;
@property (nonatomic) unsigned long long stencilFailureOperation;
@property (readonly) const struct MTLStencilDescriptorPrivate { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; }*stencilPrivate;
@property (nonatomic) unsigned int writeMask;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
