/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFServiceHelper : NSObject <AFServiceHelper> {
    bool  _isClientLiteHelper;
    <AFServiceHelper> * _serviceHelper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isClientLiteHelper;
@property (retain) <AFServiceHelper> *serviceHelper;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assistantLocalizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3;
- (void)dismissAssistant;
- (void)handleCommand:(id)arg1 completion:(id /* block */)arg2;
- (void)handleCommand:(id)arg1 isOneWay:(bool)arg2 completion:(id /* block */)arg3;
- (void)handleRemoteCommand:(id)arg1 isOneWay:(bool)arg2 completion:(id /* block */)arg3;
- (id)initClientLiteHelper;
- (id)initWithServiceHelper:(id)arg1;
- (bool)isClientLiteHelper;
- (bool)isDeviceLockedWithPasscode;
- (bool)isTimeoutSuspended;
- (bool)openSensitiveURL:(id)arg1;
- (id)peerInfoForCurrentCommand;
- (id)serviceHelper;
- (void)setIsClientLiteHelper:(bool)arg1;
- (void)setServiceHelper:(id)arg1;

@end
