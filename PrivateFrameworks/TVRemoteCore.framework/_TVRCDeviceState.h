/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRCDeviceState : NSObject <NSSecureCoding> {
    long long  _connectionState;
    NSString * _connectionType;
    NSError * _disconnectError;
    long long  _disconnectReason;
    NSString * _identifier;
    _TVRCKeyboardState * _keyboardState;
    NSString * _name;
    unsigned long long  _pairingCapability;
    NSSet * _supportedButtons;
}

@property (nonatomic) long long connectionState;
@property (nonatomic, copy) NSString *connectionType;
@property (nonatomic, copy) NSError *disconnectError;
@property (nonatomic) long long disconnectReason;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) _TVRCKeyboardState *keyboardState;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long pairingCapability;
@property (nonatomic, copy) NSSet *supportedButtons;

+ (id)deviceStateFromDevice:(id)arg1;
+ (id)setOfStatesFromDevices:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)connectionState;
- (id)connectionType;
- (id)description;
- (id)disconnectError;
- (long long)disconnectReason;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)keyboardState;
- (id)name;
- (unsigned long long)pairingCapability;
- (void)setConnectionState:(long long)arg1;
- (void)setConnectionType:(id)arg1;
- (void)setDisconnectError:(id)arg1;
- (void)setDisconnectReason:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKeyboardState:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPairingCapability:(unsigned long long)arg1;
- (void)setSupportedButtons:(id)arg1;
- (id)supportedButtons;

@end
