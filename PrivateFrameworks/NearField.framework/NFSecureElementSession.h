/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFSecureElementSession : NFSession <NFAppletCollection, NFSecureElementSessionCallbacks> {
    NSMutableDictionary * _appletsById;
    bool  _hasApplets;
    NFSecureElement * _secureElement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NFSecureElement *secureElement;
@property (readonly) Class superclass;

- (id)_appletsById;
- (void)_setApplets:(id)arg1;
- (id)allApplets;
- (id)appletWithIdentifier:(id)arg1;
- (void)dealloc;
- (bool)deleteAllApplets:(bool)arg1;
- (bool)deleteApplets:(id)arg1 queueServerConnection:(bool)arg2;
- (void)didExitRestrictedMode;
- (id)dumpDomain:(unsigned char)arg1;
- (bool)getCryptogram:(id*)arg1 challengeResponse:(id*)arg2;
- (id)getOSUpdateLog;
- (id)initWithSecureElement:(id)arg1;
- (id)restrictedModeLog;
- (bool)runScript:(id)arg1 results:(id*)arg2 lastStatus:(unsigned long long*)arg3;
- (id)secureElement;
- (id)signChallenge:(id)arg1;
- (id)stateInformation;
- (id)transceive:(id)arg1;
- (unsigned int)validateSEPairing;

@end
