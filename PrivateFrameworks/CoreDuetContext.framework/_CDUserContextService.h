/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
 */

@interface _CDUserContextService : NSObject <NSXPCListenerDelegate> {
    NSMutableSet * _clients;
    NSMutableSet * _firedRegistrations;
    NSXPCListener * _listener;
    NSMutableSet * _openRegistrations;
    <_CDContextPersisting> * _persistence;
    _CDInMemoryUserContext * _userContext;
}

@property (nonatomic, retain) NSMutableSet *clients;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableSet *firedRegistrations;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic, retain) NSMutableSet *openRegistrations;
@property (nonatomic, retain) <_CDContextPersisting> *persistence;
@property (readonly) Class superclass;
@property (nonatomic, retain) _CDInMemoryUserContext *userContext;

+ (id)sharedInstanceWithSharedMemoryStore:(id)arg1;

- (void).cxx_destruct;
- (void)addOpenRegistration:(id)arg1;
- (void)clientWasInterrupted:(id)arg1;
- (id)clients;
- (void)deleteSavedData;
- (id)firedRegistrations;
- (void)informClientOfFiredRegistration:(id)arg1;
- (id)initWithListener:(id)arg1 withStorage:(id)arg2 withStore:(id)arg3;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)obtainFiredRegistrationMatchingRegistration:(id)arg1;
- (id)openRegistrations;
- (id)persistence;
- (void)regenerateState;
- (void)removeOpenRegistration:(id)arg1;
- (void)setClients:(id)arg1;
- (void)setFiredRegistrations:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setOpenRegistrations:(id)arg1;
- (void)setPersistence:(id)arg1;
- (void)setUserContext:(id)arg1;
- (void)start;
- (id)userContext;

@end
