/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarDataCellularEntry : _UIStatusBarDataNetworkEntry {
    bool  _callForwardingEnabled;
    NSString * _crossfadeString;
    bool  _showsEmergencyOnlyWhenDisconnected;
    NSString * _string;
    long long  _type;
}

@property (nonatomic) bool callForwardingEnabled;
@property (nonatomic, copy) NSString *crossfadeString;
@property (nonatomic) bool showsEmergencyOnlyWhenDisconnected;
@property (nonatomic, copy) NSString *string;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_ui_descriptionBuilder;
- (bool)callForwardingEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)crossfadeString;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCallForwardingEnabled:(bool)arg1;
- (void)setCrossfadeString:(id)arg1;
- (void)setShowsEmergencyOnlyWhenDisconnected:(bool)arg1;
- (void)setString:(id)arg1;
- (void)setType:(long long)arg1;
- (bool)showsEmergencyOnlyWhenDisconnected;
- (id)string;
- (long long)type;

@end
