/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPWACScannerIEUtility : HMFObject {
    const char * _end;
    NSData * _ieData;
    const char * _iePtr;
    unsigned long long  _len;
    bool  _pairedWithHomeKit;
    const char * _ptr;
    const char * _src;
    bool  _supports2pt4GHzNetworks;
    bool  _supports5GHzNetworks;
    bool  _supportsAudioOnly;
    bool  _supportsHomeKit;
    bool  _supportsMFiAuthICV2;
    bool  _supportsPairSetupWAC;
    bool  _supportsSTAOnly;
    bool  _supportsTokenAuth;
}

@property (nonatomic, readonly) bool pairedWithHomeKit;
@property (readonly, copy) NSDictionary *setupDictionary;
@property (nonatomic, readonly) bool supports2pt4GHzNetworks;
@property (nonatomic, readonly) bool supports5GHzNetworks;
@property (nonatomic, readonly) bool supportsAudioOnly;
@property (nonatomic, readonly) bool supportsHomeKit;
@property (nonatomic, readonly) bool supportsMFiAuthICV2;
@property (nonatomic, readonly) bool supportsPairSetupWAC;
@property (nonatomic, readonly) bool supportsSTAOnly;
@property (nonatomic, readonly) bool supportsTokenAuth;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithIEData:(id)arg1;
- (bool)pairedWithHomeKit;
- (id)setupDictionary;
- (bool)supports2pt4GHzNetworks;
- (bool)supports5GHzNetworks;
- (bool)supportsAudioOnly;
- (bool)supportsHomeKit;
- (bool)supportsMFiAuthICV2;
- (bool)supportsPairSetupWAC;
- (bool)supportsSTAOnly;
- (bool)supportsTokenAuth;

@end
