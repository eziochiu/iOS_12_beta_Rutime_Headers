/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface OZFxPlugProgressAPI : NSObject <FxProgressAPI, PROAPIObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)releaseSharedProgressAPI;
+ (id)sharedProgressAPI;

- (void)_setControl:(const struct OZProcessControl { int (**x1)(); struct atomic<bool> { bool x_2_1_1; } x2; struct PCSemaphore {} *x3; struct PCMutex {} *x4; long long x5; int (*x6)(); struct HGRenderer {} *x7; }*)arg1;
- (bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (id)init;
- (bool)updateProgress:(float)arg1;
- (bool)userHasCancelled;

@end