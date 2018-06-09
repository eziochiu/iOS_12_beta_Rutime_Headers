/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKMatchResponse : GKInternalRepresentation {
    NSData * _cdxTicket;
    GKMatchRequestInternal * _matchRequest;
    NSArray * _matches;
    GKDispatchGroup * _matchingGroup;
    NSArray * _relayPushes;
    NSString * _rid;
    int  _sequence;
    NSDictionary * _serverRequest;
    NSData * _sessionToken;
    long long  _state;
}

@property (retain) NSData *cdxTicket;
@property (retain) GKMatchRequestInternal *matchRequest;
@property (retain) NSArray *matches;
@property GKDispatchGroup *matchingGroup;
@property (retain) NSArray *relayPushes;
@property (retain) NSString *rid;
@property (readonly) int sequence;
@property (retain) NSDictionary *serverRequest;
@property (retain) NSData *sessionToken;
@property (nonatomic) long long state;

+ (id)secureCodedPropertyKeys;

- (int)_incrementSequence;
- (id)cdxTicket;
- (void)dealloc;
- (bool)isCancelled;
- (bool)isFinished;
- (id)matchRequest;
- (id)matches;
- (id)matchingGroup;
- (id)relayPushes;
- (id)rid;
- (int)sequence;
- (id)serverRequest;
- (id)sessionToken;
- (void)setCdxTicket:(id)arg1;
- (void)setMatchRequest:(id)arg1;
- (void)setMatches:(id)arg1;
- (void)setMatchingGroup:(id)arg1;
- (void)setRelayPushes:(id)arg1;
- (void)setRid:(id)arg1;
- (void)setServerRequest:(id)arg1;
- (void)setSessionToken:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (bool)transitionToState:(long long)arg1;

@end
