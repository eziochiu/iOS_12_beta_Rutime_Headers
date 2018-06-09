/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSButtonHapticsDefinition : NSObject <NSSecureCoding> {
    bool  _representsHomeButton;
    BSMutableSettings * _settings;
}

@property (getter=_BSSettings, nonatomic, readonly) BSSettings *BSSettings;
@property (nonatomic) long long clickHapticAssetType;
@property (getter=isLongPressEnabled, nonatomic, readonly) long long longPressEnabled;
@property (nonatomic) double maximumLongPressTimeInterval;
@property (nonatomic) double maximumMultiplePressTimeInterval;
@property (nonatomic) long long maximumPressCount;
@property (nonatomic) long long maximumTapCount;
@property (nonatomic) double minimumLongPressTimeInterval;
@property (nonatomic) double minimumMultiplePressTimeInterval;
@property (nonatomic) bool representsHomeButton;

+ (id)definitionForHomeButton;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_BSSettings;
- (id)_initWithBSSettings:(id)arg1;
- (long long)clickHapticAssetType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)isLongPressEnabled;
- (double)maximumLongPressTimeInterval;
- (double)maximumMultiplePressTimeInterval;
- (long long)maximumPressCount;
- (long long)maximumTapCount;
- (double)minimumLongPressTimeInterval;
- (double)minimumMultiplePressTimeInterval;
- (bool)representsHomeButton;
- (void)setClickHapticAssetType:(long long)arg1;
- (void)setMaximumLongPressTimeInterval:(double)arg1;
- (void)setMaximumMultiplePressTimeInterval:(double)arg1;
- (void)setMaximumPressCount:(long long)arg1;
- (void)setMaximumTapCount:(long long)arg1;
- (void)setMinimumLongPressTimeInterval:(double)arg1;
- (void)setMinimumMultiplePressTimeInterval:(double)arg1;
- (void)setRepresentsHomeButton:(bool)arg1;
- (void)updateFromDefinition:(id)arg1 withChangeInspectorBlock:(id /* block */)arg2;

@end
