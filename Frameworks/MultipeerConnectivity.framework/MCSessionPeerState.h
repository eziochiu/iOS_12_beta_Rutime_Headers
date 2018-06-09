/* made by EzioChiu
   Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCSessionPeerState : NSObject {
    long long  _certificateDecision;
    bool  _connectPeerCalled;
    NSMutableDictionary * _incomingStreams;
    NSData * _nearbyConnectionData;
    unsigned int  _newStreamID;
    unsigned int  _newStreamOpenRequestID;
    NSMutableDictionary * _outgoingStreamRequests;
    NSMutableDictionary * _outgoingStreams;
    MCPeerID * _peerID;
    long long  _state;
}

@property (nonatomic) long long certificateDecision;
@property (nonatomic) bool connectPeerCalled;
@property (nonatomic, retain) NSMutableDictionary *incomingStreams;
@property (nonatomic, copy) NSData *nearbyConnectionData;
@property (nonatomic, readonly) unsigned int newStreamID;
@property (nonatomic, readonly) unsigned int newStreamOpenRequestID;
@property (nonatomic, retain) NSMutableDictionary *outgoingStreamRequests;
@property (nonatomic, retain) NSMutableDictionary *outgoingStreams;
@property (nonatomic, readonly, copy) MCPeerID *peerID;
@property (nonatomic) long long state;

- (long long)certificateDecision;
- (bool)connectPeerCalled;
- (void)dealloc;
- (id)description;
- (id)incomingStreams;
- (id)initWithPeer:(id)arg1;
- (id)nearbyConnectionData;
- (unsigned int)newStreamID;
- (unsigned int)newStreamOpenRequestID;
- (id)outgoingStreamRequests;
- (id)outgoingStreams;
- (id)peerID;
- (void)setCertificateDecision:(long long)arg1;
- (void)setConnectPeerCalled:(bool)arg1;
- (void)setIncomingStreams:(id)arg1;
- (void)setNearbyConnectionData:(id)arg1;
- (void)setOutgoingStreamRequests:(id)arg1;
- (void)setOutgoingStreams:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
