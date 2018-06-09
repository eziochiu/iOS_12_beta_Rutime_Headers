/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDMirroredProgress : NSProgress {
    NSProgress * _originalProgress;
}

+ (id)_KVOKeyPaths;

- (void).cxx_destruct;
- (void)_registerForKVO;
- (void)_unregisterForKVO;
- (void)_update;
- (void)dealloc;
- (id)initWithMirroredProgress:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
