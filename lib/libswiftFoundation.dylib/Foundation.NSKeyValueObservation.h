/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Swift/libswiftFoundation.dylib
 */

@interface Foundation.NSKeyValueObservation : NSObject {
    void callback;
    void object;
    void path;
}

@property (nonatomic) NSObject *object;
@property (nonatomic, readonly) NSString *path;

+ (void)setSwizzler:(id)arg1;
+ (id)swizzler;

- (id /* block */).cxx_destruct;
- (void)_swizzle_me_observeValueForKeyPath:(id)arg1 of:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (id)object;
- (id)path;
- (void)setObject:(id)arg1;

@end
