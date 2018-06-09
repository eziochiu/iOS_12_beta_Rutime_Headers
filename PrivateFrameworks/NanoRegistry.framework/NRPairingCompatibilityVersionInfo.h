/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRPairingCompatibilityVersionInfo : NSObject {
    bool  _isOverrideActive;
    long long  _maxPairingCompatibilityVersion;
    long long  _minPairingCompatibilityVersion;
    long long  _minQuickSwitchCompatibilityVersion;
    long long  _pairingCompatibilityVersion;
}

@property (nonatomic) bool isOverrideActive;
@property (nonatomic) long long maxPairingCompatibilityVersion;
@property (nonatomic) long long minPairingCompatibilityVersion;
@property (nonatomic) long long minQuickSwitchCompatibilityVersion;
@property (nonatomic) long long pairingCompatibilityVersion;

+ (id)numberFromCFPrefs:(id)arg1;
+ (id)stringFromCFPrefs:(id)arg1;
+ (id)systemVersions;
+ (unsigned long long)valueForToken:(int)arg1;

- (id)initInternal;
- (bool)isOverrideActive;
- (long long)maxPairingCompatibilityVersion;
- (long long)minPairingCompatibilityVersion;
- (long long)minPairingCompatibilityVersionForChipID:(id)arg1;
- (long long)minPairingCompatibilityVersionForChipID:(id)arg1 name:(id)arg2 defaultVersion:(long long)arg3;
- (long long)minQuickSwitchCompatibilityVersion;
- (long long)minQuickSwitchPairingCompatibilityVersionForChipID:(id)arg1;
- (long long)pairingCompatibilityVersion;
- (void)setIsOverrideActive:(bool)arg1;
- (void)setMaxPairingCompatibilityVersion:(long long)arg1;
- (void)setMinPairingCompatibilityVersion:(long long)arg1;
- (void)setMinQuickSwitchCompatibilityVersion:(long long)arg1;
- (void)setPairingCompatibilityVersion:(long long)arg1;

@end
