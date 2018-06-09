/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSBlock : NSObject <NSCopying>

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)invoke;
- (void)performAfterDelay:(double)arg1;

@end
