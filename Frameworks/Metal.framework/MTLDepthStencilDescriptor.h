/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDepthStencilDescriptor : NSObject <NSCopying>

@property (nonatomic, copy) MTLStencilDescriptor *backFaceStencil;
@property (nonatomic) unsigned long long depthCompareFunction;
@property (readonly) const /* Warning: unhandled struct encoding: '{MTLDepthStencilDescriptorPrivate=@@QB@}' */ struct MTLDepthStencilDescriptorPrivate { id x1; unsigned long long x2; bool x3; id x4; }*depthStencilPrivate;
@property (getter=isDepthWriteEnabled, nonatomic) bool depthWriteEnabled;
@property (nonatomic, copy) MTLStencilDescriptor *frontFaceStencil;
@property (nonatomic, copy) NSString *label;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
