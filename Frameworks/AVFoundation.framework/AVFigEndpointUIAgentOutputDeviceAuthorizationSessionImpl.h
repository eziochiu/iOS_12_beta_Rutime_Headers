/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl : NSObject <AVOutputDeviceAuthorizationSessionImpl> {
    struct OpaqueFigEndpointUIAgent { } * _agent;
    AVOutputDeviceAuthorizationRequest * _currentRequest;
    AVFigEndpointUIAgentOutputDeviceAuthorizationRequestImpl * _currentRequestImpl;
    AVOutputDeviceAuthorizationSession * _parentSession;
    AVWeakReference * _weakObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct OpaqueFigEndpointUIAgent { }*figEndpointUIAgent;
@property (readonly) unsigned long long hash;
@property AVOutputDeviceAuthorizationSession *parentAuthorizationSession;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_finishedWithPrompt;
- (void)_notifyCurrentRequestOfTerminalStatus:(long long)arg1 error:(id)arg2;
- (void)_showAuthPromptWithUniqueID:(id)arg1 routeDescriptor:(struct __CFDictionary { }*)arg2 pinMode:(bool)arg3 reason:(struct __CFString { }*)arg4;
- (void)_startNewRequest:(id)arg1 impl:(id)arg2;
- (void)dealloc;
- (struct OpaqueFigEndpointUIAgent { }*)figEndpointUIAgent;
- (id)initWithFigEndpointUIAgent:(struct OpaqueFigEndpointUIAgent { }*)arg1;
- (void)outputDeviceAuthorizationRequestImpl:(id)arg1 didRespondWithAuthorizationToken:(id)arg2;
- (void)outputDeviceAuthorizationRequestImplDidCancel:(id)arg1;
- (id)parentAuthorizationSession;
- (void)setParentAuthorizationSession:(id)arg1;

@end
