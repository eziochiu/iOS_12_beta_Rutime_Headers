/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
 */

@interface UISApplicationSupportService : NSObject <UISApplicationSupportServerDelegate> {
    FBSSerialQueue * _calloutQueue;
    <UISApplicationSupportServiceDelegate> * _delegate;
    struct { 
        unsigned int delegateRequestPasscodeUnlockUI : 1; 
        unsigned int delegateInitialDisplayConfigurationForClient : 1; 
        unsigned int delegateInitialDisplayContextForClient : 1; 
        unsigned int delegateScreenEdgeInfo : 1; 
    }  _delegateFlags;
    UISApplicationSupportServer * _server;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UISApplicationSupportServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)edgeInfoForClient:(id)arg1 displayConfiguration:(id)arg2;
- (id)initWithCalloutQueue:(id)arg1;
- (id)initialDisplayContextForClient:(id)arg1;
- (void)requestPasscodeUnlockUIForClient:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
