/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2MOBIKE : NSObject <NSObject> {
    NEIKEv2PacketTunnelProvider * _ikev2TunnelProvider;
    bool  _mobikeCapable;
    unsigned int  _mobikeRetries;
    bool  _mobikeRunning;
    NSObject<OS_dispatch_source> * _mobikeTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property NEIKEv2PacketTunnelProvider *ikev2TunnelProvider;
@property bool mobikeCapable;
@property unsigned int mobikeRetries;
@property bool mobikeRunning;
@property (retain) NSObject<OS_dispatch_source> *mobikeTimer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)ikev2MOBIKECleanup;
- (void)ikev2MOBIKEFailed;
- (void)ikev2MOBIKEReassert:(id /* block */)arg1;
- (bool)ikev2MOBIKESetup:(bool)arg1 ifChange:(bool)arg2 serverAddress:(id)arg3;
- (bool)ikev2MOBIKESkipTunnelNetworkSettingsUpdate;
- (void)ikev2MOBIKEStart:(unsigned long long)arg1 pathStatus:(long long)arg2 serverAddress:(id)arg3 persist:(unsigned char)arg4;
- (void)ikev2MOBIKEStopTimer;
- (id)ikev2TunnelProvider;
- (id)initWithTunnelProvider:(id)arg1;
- (bool)mobikeCapable;
- (unsigned int)mobikeRetries;
- (bool)mobikeRunning;
- (id)mobikeTimer;
- (void)setIkev2TunnelProvider:(id)arg1;
- (void)setMobikeCapable:(bool)arg1;
- (void)setMobikeRetries:(unsigned int)arg1;
- (void)setMobikeRunning:(bool)arg1;
- (void)setMobikeTimer:(id)arg1;

@end
