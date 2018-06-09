/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
 */

@interface UISApplicationSupportServer : FBSServiceFacility {
    <UISApplicationSupportServerDelegate> * _delegate;
    struct { 
        unsigned int delegateRequestPasscodeUnlockUI : 1; 
        unsigned int delegateInitialDisplayContextForClient : 1; 
        unsigned int delegateScreenEdgeInfo : 1; 
    }  _delegateFlags;
}

@property (nonatomic) <UISApplicationSupportServerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_handleMessage_displayEdgeInfoForClient:(id)arg1 withMessage:(id)arg2;
- (void)_handleMessage_initialDisplayContextForClient:(id)arg1 withMessage:(id)arg2;
- (void)_handleMessage_requestPasscodeUnlockUIForClient:(id)arg1 withMessage:(id)arg2;
- (id)delegate;
- (id)initWithCalloutQueue:(id)arg1;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)setDelegate:(id)arg1;
- (bool)shouldAllowClientConnection:(id)arg1;

@end
