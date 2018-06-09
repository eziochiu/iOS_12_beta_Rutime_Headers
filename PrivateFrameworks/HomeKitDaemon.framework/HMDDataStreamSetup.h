/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDataStreamSetup : NSObject {
    HMFNetAddress * _remoteNetAddress;
    long long  _remoteTcpPort;
    HAPSecuritySessionEncryption * _sessionEncryption;
}

@property (nonatomic, retain) HMFNetAddress *remoteNetAddress;
@property (nonatomic) long long remoteTcpPort;
@property (nonatomic, retain) HAPSecuritySessionEncryption *sessionEncryption;

- (void).cxx_destruct;
- (bool)isComplete;
- (id)remoteNetAddress;
- (long long)remoteTcpPort;
- (id)sessionEncryption;
- (void)setRemoteNetAddress:(id)arg1;
- (void)setRemoteTcpPort:(long long)arg1;
- (void)setSessionEncryption:(id)arg1;

@end
