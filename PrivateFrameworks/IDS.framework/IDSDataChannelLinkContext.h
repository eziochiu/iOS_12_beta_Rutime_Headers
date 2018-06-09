/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSDataChannelLinkContext : NSObject {
    _IDSDataChannelLinkContext * _internal;
}

@property (readonly) NSUUID *QRSessionID;
@property (readonly) unsigned long long RATType;
@property (readonly) long long connectionType;
@property (readonly) unsigned char flags;
@property (readonly) BOOL linkID;
@property (readonly) NSUUID *linkUUID;
@property (readonly) unsigned int maxBitrate;
@property (readonly) unsigned short maxMTU;
@property (readonly) unsigned char networkType;
@property (readonly) long long relayServerProvider;
@property (readonly) NSData *relaySessionKey;
@property (readonly) NSData *relaySessionToken;
@property (readonly) long long remoteConnectionType;
@property (readonly) unsigned char remoteNetworkType;
@property (readonly) unsigned long long remoteRATType;

- (void).cxx_destruct;
- (id)QRSessionID;
- (unsigned long long)RATType;
- (long long)connectionType;
- (id)description;
- (unsigned char)flags;
- (id)initWithDummyInformation;
- (id)initWithLinkID:(BOOL)arg1 linkUUID:(id)arg2 QRSessionID:(id)arg3 flags:(unsigned char)arg4 networkType:(unsigned char)arg5 connectionType:(long long)arg6 RATType:(unsigned long long)arg7 MTU:(unsigned short)arg8 remoteNetworkType:(unsigned char)arg9 remoteConnectionType:(long long)arg10 remoteRATType:(unsigned long long)arg11 maxBitrate:(unsigned int)arg12 relayServerProvider:(long long)arg13 relaySessionToken:(id)arg14 relaySessionKey:(id)arg15;
- (BOOL)linkID;
- (id)linkUUID;
- (unsigned int)maxBitrate;
- (unsigned short)maxMTU;
- (unsigned char)networkType;
- (long long)relayServerProvider;
- (id)relaySessionKey;
- (id)relaySessionToken;
- (long long)remoteConnectionType;
- (unsigned char)remoteNetworkType;
- (unsigned long long)remoteRATType;
- (void)setMTU:(unsigned short)arg1;
- (void)setMaxBitrate:(unsigned int)arg1;
- (void)setRATType:(unsigned long long)arg1;

@end
