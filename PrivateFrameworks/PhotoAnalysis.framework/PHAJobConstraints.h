/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAJobConstraints : NSObject <NSCopying> {
    bool  _canRunAutomaticBackgroundAnalysis;
    bool  _canRunAutomaticForegroundAnalysis;
    bool  _canRunUserInitiatedForegroundAnalysis;
    bool  _canUseNetwork;
    bool  _turboMode;
}

@property (nonatomic, readonly) bool canRunAutomaticBackgroundAnalysis;
@property (nonatomic, readonly) bool canRunAutomaticForegroundAnalysis;
@property (nonatomic, readonly) bool canRunUserInitiatedForegroundAnalysis;
@property (nonatomic, readonly) bool canUseNetwork;
@property (getter=isTurboMode, nonatomic) bool turboMode;

+ (id)constraintsWithAllAllowances;
+ (id)constraintsWithNoAllowances;

- (void)applyConstraints:(id)arg1 usingMask:(id)arg2;
- (id)asBitString;
- (bool)canRunAutomaticBackgroundAnalysis;
- (bool)canRunAutomaticForegroundAnalysis;
- (bool)canRunUserInitiatedForegroundAnalysis;
- (bool)canUseNetwork;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initFromBitString:(id)arg1;
- (id)initWithCanRunAutomaticBackgroundAnalysis:(bool)arg1 canRunAutomaticForegroundAnalysis:(bool)arg2 canRunUserInitiatedForegroundAnalysis:(bool)arg3 canUseNetwork:(bool)arg4;
- (bool)isEqualToConstraints:(id)arg1;
- (bool)isTurboMode;
- (void)setTurboMode:(bool)arg1;
- (id)statusAsDictionary;

@end
