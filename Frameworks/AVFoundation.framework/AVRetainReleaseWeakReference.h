/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVRetainReleaseWeakReference : AVWeakReference {
    NSString * _cachedReferencedObjectDescription;
    id  _weakStorage;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithReferencedObject:(id)arg1;
- (id)referencedObject;

@end
