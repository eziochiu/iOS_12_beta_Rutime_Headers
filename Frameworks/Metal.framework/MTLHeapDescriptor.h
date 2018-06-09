/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLHeapDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long cpuCacheMode;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long storageMode;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
