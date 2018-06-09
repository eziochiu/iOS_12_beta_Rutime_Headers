/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolConfiguration : NSObject {
    RWIProtocolConsoleDomainEventDispatcher * _consoleEventDispatcher;
    struct AugmentableInspectorController { int (**x1)(); } * _controller;
    RWIProtocolCSSDomainEventDispatcher * _cssEventDispatcher;
    <RWIProtocolCSSDomainHandler> * _cssHandler;
    RWIProtocolDOMDomainEventDispatcher * _domEventDispatcher;
    <RWIProtocolDOMDomainHandler> * _domHandler;
    RWIProtocolDOMStorageDomainEventDispatcher * _domStorageEventDispatcher;
    <RWIProtocolDOMStorageDomainHandler> * _domStorageHandler;
    RWIProtocolNetworkDomainEventDispatcher * _networkEventDispatcher;
    <RWIProtocolNetworkDomainHandler> * _networkHandler;
    RWIProtocolPageDomainEventDispatcher * _pageEventDispatcher;
    <RWIProtocolPageDomainHandler> * _pageHandler;
}

@property (nonatomic, readonly) RWIProtocolConsoleDomainEventDispatcher *consoleEventDispatcher;
@property (nonatomic, readonly) RWIProtocolCSSDomainEventDispatcher *cssEventDispatcher;
@property (setter=setCSSHandler:, nonatomic, retain) <RWIProtocolCSSDomainHandler> *cssHandler;
@property (nonatomic, readonly) RWIProtocolDOMDomainEventDispatcher *domEventDispatcher;
@property (setter=setDOMHandler:, nonatomic, retain) <RWIProtocolDOMDomainHandler> *domHandler;
@property (nonatomic, readonly) RWIProtocolDOMStorageDomainEventDispatcher *domStorageEventDispatcher;
@property (setter=setDOMStorageHandler:, nonatomic, retain) <RWIProtocolDOMStorageDomainHandler> *domStorageHandler;
@property (nonatomic, readonly) RWIProtocolNetworkDomainEventDispatcher *networkEventDispatcher;
@property (setter=setNetworkHandler:, nonatomic, retain) <RWIProtocolNetworkDomainHandler> *networkHandler;
@property (nonatomic, readonly) RWIProtocolPageDomainEventDispatcher *pageEventDispatcher;
@property (setter=setPageHandler:, nonatomic, retain) <RWIProtocolPageDomainHandler> *pageHandler;

- (id)consoleEventDispatcher;
- (id)cssEventDispatcher;
- (id)cssHandler;
- (void)dealloc;
- (id)domEventDispatcher;
- (id)domHandler;
- (id)domStorageEventDispatcher;
- (id)domStorageHandler;
- (id)initWithController:(struct AugmentableInspectorController { int (**x1)(); }*)arg1;
- (id)networkEventDispatcher;
- (id)networkHandler;
- (id)pageEventDispatcher;
- (id)pageHandler;
- (void)setCSSHandler:(id)arg1;
- (void)setDOMHandler:(id)arg1;
- (void)setDOMStorageHandler:(id)arg1;
- (void)setNetworkHandler:(id)arg1;
- (void)setPageHandler:(id)arg1;

@end
