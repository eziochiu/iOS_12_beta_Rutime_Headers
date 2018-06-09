/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKServiceProxy : NSObject {
    GKDaemonProxy * _baseProxy;
    GKPlayerInternal * _localPlayer;
    GKThreadsafeDictionary * _pendingRequests;
    unsigned int  _serviceGeneration;
    NSDictionary * _serviceLookup;
}

@property (retain) GKDaemonProxy *baseProxy;
@property (retain) GKPlayerInternal *localPlayer;
@property (retain) GKThreadsafeDictionary *pendingRequests;
@property unsigned int serviceGeneration;
@property (retain) NSDictionary *serviceLookup;

- (id)accountService;
- (id)accountServicePrivate;
- (void)addService:(id)arg1 forProtocol:(id)arg2 toLookup:(id)arg3;
- (id)analyticsService;
- (id)analyticsServicePrivate;
- (id)baseProxy;
- (void)buildServiceLookup;
- (void)buildServiceLookupIfNeccessary;
- (id)bulletinService;
- (id)bulletinServicePrivate;
- (id)challengeService;
- (id)challengeServicePrivate;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)friendService;
- (id)friendServicePrivate;
- (id)gameService;
- (id)gameServicePrivate;
- (id)gameSessionService;
- (id)gameSessionServicePrivate;
- (id)gameStatService;
- (id)gameStatServicePrivate;
- (id)initWithPlayer:(id)arg1;
- (id)localPlayer;
- (id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)multiplayerService;
- (id)multiplayerServicePrivate;
- (id)pendingRequests;
- (id)profileService;
- (id)profileServicePrivate;
- (void)replyToDuplicatesForRequest:(id)arg1 withInvocation:(id)arg2 queue:(id)arg3;
- (id)requestIdentifierForInvocation:(id)arg1;
- (unsigned int)serviceGeneration;
- (id)serviceLookup;
- (void)setBaseProxy:(id)arg1;
- (void)setLocalPlayer:(id)arg1;
- (void)setPendingRequests:(id)arg1;
- (void)setServiceGeneration:(unsigned int)arg1;
- (void)setServiceLookup:(id)arg1;
- (id)turnBasedService;
- (id)turnBasedServicePrivate;
- (id)utilityService;
- (id)utilityServicePrivate;

@end
