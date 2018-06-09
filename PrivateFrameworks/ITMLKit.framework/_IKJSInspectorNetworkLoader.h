/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface _IKJSInspectorNetworkLoader : NSObject <IKNetworkRequestLoader> {
    IKJSInspectorNetworkAgent * _agent;
    RWIProtocolNetworkDomainEventDispatcher * _dispatcher;
    NSString * _identifier;
    NSString * _parentIdentifier;
    NSMutableDictionary * _requestRecords;
}

@property (nonatomic, readonly) IKJSInspectorNetworkAgent *agent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) RWIProtocolNetworkDomainEventDispatcher *dispatcher;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) NSString *parentIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *requestRecords;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)agent;
- (double)currentTimeIntervalSince1970;
- (id)debugDescription;
- (void)dispatchEventWithBlock:(id /* block */)arg1;
- (id)dispatcher;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 agent:(id)arg3 dispatcher:(id)arg4;
- (id)parentIdentifier;
- (id)recordWithForResource:(long long)arg1 withInitiator:(long long)arg2;
- (id)requestRecords;
- (void)setParentIdentifier:(id)arg1;

@end
