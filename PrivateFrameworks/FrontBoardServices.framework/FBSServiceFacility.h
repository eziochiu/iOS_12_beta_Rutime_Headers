/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSServiceFacility : NSObject <BSDescriptionProviding, BSInvalidatable> {
    NSMutableSet * _clients;
    NSString * _identifier;
    bool  _invalidated;
    NSSet * _prerequisiteMilestones;
    FBSSerialQueue * _queue;
}

@property (nonatomic, readonly) NSSet *_prerequisiteMilestones;
@property (nonatomic, readonly) NSSet *clients;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) FBSSerialQueue *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clientDidConnect:(id)arg1 withMessage:(id)arg2 completion:(id /* block */)arg3;
- (void)_clientDidDisconnect:(id)arg1;
- (void)_handleMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (id)_prerequisiteMilestones;
- (id)clients;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2;
- (void)noteClientDidDisconnect:(id)arg1;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (id)queue;
- (void)sendMessage:(id)arg1 withType:(long long)arg2 toClients:(id)arg3;
- (bool)shouldAllowClientConnection:(id)arg1 withMessage:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
