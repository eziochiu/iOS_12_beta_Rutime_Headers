/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarTimeStringClientCache : NSObject {
    NSCache * _timeStringCache;
}

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)init;
- (id)ioSurfaceForTimeString:(id)arg1;
- (void)setIOSurface:(id)arg1 forTimeString:(id)arg2;

@end
