/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSQuickRelaySessionInfo : NSObject {
    NSArray * _allParticipantIDs;
    NSString * _allocateRequestID;
    double  _allocateTime;
    long long  _allocateType;
    NSUUID * _defaultDeviceLocalCBUUID;
    NSUUID * _defaultDeviceRemoteCBUUID;
    unsigned int  _generationCounter;
    NSString * _groupID;
    NSString * _idsSessionID;
    bool  _isInitiator;
    long long  _linkProtocol;
    unsigned char  _maxConcurrentStreams;
    long long  _participantID;
    unsigned char  _protocolVersion;
    NSArray * _publishedStreams;
    long long  _relayServerProviderType;
    NSString * _relaySessionID;
    NSData * _relaySessionKey;
    NSData * _relaySessionToken;
    struct sockaddr_storage { 
        unsigned char ss_len; 
        unsigned char ss_family; 
        BOOL __ss_pad1[6]; 
        long long __ss_align; 
        BOOL __ss_pad2[112]; 
    }  _serverAddress;
    NSData * _softwareData;
    NSString * _stableGroupID;
    NSArray * _subscribedStreams;
}

@property (readonly) NSArray *allParticipantIDs;
@property (readonly) NSString *allocateRequestID;
@property (readonly) double allocateTime;
@property (readonly) long long allocateType;
@property (readonly) NSUUID *defaultDeviceLocalCBUUID;
@property (readonly) NSUUID *defaultDeviceRemoteCBUUID;
@property (readonly) unsigned int generationCounter;
@property (readonly) NSString *groupID;
@property (readonly) NSString *idsSessionID;
@property (readonly) bool isInitiator;
@property (readonly) long long linkProtocol;
@property (readonly) unsigned char maxConcurrentStreams;
@property (readonly) long long participantID;
@property (readonly) unsigned char protocolVersion;
@property (readonly) NSArray *publishedStreams;
@property (readonly) long long relayServerProviderType;
@property (readonly) NSString *relaySessionID;
@property (readonly) NSData *relaySessionKey;
@property (readonly) NSData *relaySessionToken;
@property (readonly) const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*serverAddress;
@property (readonly) NSData *softwareData;
@property (readonly) NSString *stableGroupID;
@property (readonly) NSArray *subscribedStreams;

- (void).cxx_destruct;
- (id)allParticipantIDs;
- (id)allocateRequestID;
- (double)allocateTime;
- (long long)allocateType;
- (id)defaultDeviceLocalCBUUID;
- (id)defaultDeviceRemoteCBUUID;
- (unsigned int)generationCounter;
- (id)groupID;
- (id)idsSessionID;
- (bool)isInitiator;
- (long long)linkProtocol;
- (unsigned char)maxConcurrentStreams;
- (long long)parseSessionInfo:(id)arg1;
- (long long)participantID;
- (unsigned char)protocolVersion;
- (id)publishedStreams;
- (long long)relayServerProviderType;
- (id)relaySessionID;
- (id)relaySessionKey;
- (id)relaySessionToken;
- (const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)serverAddress;
- (id)softwareData;
- (id)stableGroupID;
- (id)subscribedStreams;

@end
