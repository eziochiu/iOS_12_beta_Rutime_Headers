/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVWeakReference : NSObject

@property (readonly) id referencedObject;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;

- (id)initWithReferencedObject:(id)arg1;
- (id)referencedObject;

@end
