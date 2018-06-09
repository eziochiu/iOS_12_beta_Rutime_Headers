/* made by EzioChiu
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface AUHostExtensionContext : NSExtensionContext <AUAudioUnitHostProtocol, _AURemoteParameterSynchronization> {
    AUAudioUnit_XH * _audioUnit;
    NSExtension * _extension;
    <AUAudioUnitXPCProtocol> * _remote;
    NSUUID * _requestIdentifier;
}

@property (nonatomic) AUAudioUnit_XH *audioUnit;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic) <AUAudioUnitXPCProtocol> *remote;
@property (nonatomic, retain) NSUUID *requestIdentifier;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)MIDICIProfileChanged:(unsigned char)arg1 channel:(unsigned char)arg2 profile:(id)arg3 enabled:(bool)arg4;
- (id)_derivedExtensionAuxiliaryHostProtocol;
- (id)audioUnit;
- (void)dealloc;
- (id)extension;
- (void)propertiesChanged:(id)arg1;
- (id)remote;
- (id)requestIdentifier;
- (void)setAudioUnit:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setRemote:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)syncParameter:(unsigned long long)arg1 value:(float)arg2 extOriginator:(unsigned long long)arg3 hostTime:(unsigned long long)arg4 eventType:(unsigned int)arg5;

@end
