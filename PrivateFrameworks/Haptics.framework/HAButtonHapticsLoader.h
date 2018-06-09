/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Haptics.framework/Haptics
 */

@interface HAButtonHapticsLoader : NSObject

@property (nonatomic, readonly) long long maxNumberOfSlots;
@property (nonatomic, readonly) bool serviceAvailable;

+ (id)sharedInstance;

- (float)audioGainForType:(long long)arg1;
- (void)dealloc;
- (float)defaultDownGainForType:(long long)arg1;
- (float)defaultUpGainForType:(long long)arg1;
- (bool)hapticAssetType:(long long)arg1 hasAudio:(bool*)arg2 hasHaptic:(bool*)arg3 error:(id*)arg4;
- (float)hapticGainForType:(long long)arg1;
- (bool)loadButtonHapticOfType:(long long)arg1 atSlot:(long long)arg2 error:(id*)arg3;
- (bool)loadButtonHapticOfType:(long long)arg1 withParameters:(id)arg2 atSlot:(long long)arg3 error:(id*)arg4;
- (long long)maxNumberOfSlots;
- (bool)serviceAvailable;

@end
