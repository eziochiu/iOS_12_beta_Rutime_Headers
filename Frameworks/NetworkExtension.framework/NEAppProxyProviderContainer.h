/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEAppProxyProviderContainer : NSObject {
    <NEAppProxyProviderContainerDelegate> * _delegate;
    unsigned int  _delegateInterfaceIndex;
    struct _NEFlowDirector { } * _director;
    NSObject<OS_dispatch_queue> * _flowQueue;
    NEAppProxyProvider * _provider;
    id /* block */  _stopCompletionHandler;
}

@property (retain) <NEAppProxyProviderContainerDelegate> *delegate;
@property unsigned int delegateInterfaceIndex;
@property struct _NEFlowDirector { }*director;
@property (retain) NSObject<OS_dispatch_queue> *flowQueue;
@property (readonly) NEAppProxyProvider *provider;
@property (copy) id /* block */ stopCompletionHandler;

- (void).cxx_destruct;
- (id)delegate;
- (unsigned int)delegateInterfaceIndex;
- (struct _NEFlowDirector { }*)director;
- (void)flowDivertMatchAppRulesWithFlow:(unsigned int)arg1 pid:(int)arg2 uuid:(unsigned char)arg3 signingIdentifier:(struct __CFString { }*)arg4;
- (void)flowDivertNewFlow:(struct _NEFlow { }*)arg1 completionHandler:(id /* block */)arg2;
- (void)flowDivertOpenControlSocket;
- (id)flowQueue;
- (void)handleAppMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithDelegate:(id)arg1 providerClass:(Class)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)provider;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateInterface:(unsigned int)arg1;
- (void)setDelegateInterfaceIndex:(unsigned int)arg1;
- (void)setDirector:(struct _NEFlowDirector { }*)arg1;
- (void)setFlowQueue:(id)arg1;
- (void)setInitialFlowDivertControlSocket:(id)arg1;
- (void)setStopCompletionHandler:(id /* block */)arg1;
- (void)sleepWithCompletionHandler:(id /* block */)arg1;
- (void)startWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stop;
- (id /* block */)stopCompletionHandler;
- (void)wake;

@end
