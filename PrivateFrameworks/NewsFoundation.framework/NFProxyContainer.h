/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

@interface NFProxyContainer : NSObject <NFRegistrationContainer> {
    NFContainer * _container;
    NFContainer * _privateContainer;
}

@property (nonatomic, retain) NFContainer *container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NFContainer *privateContainer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)container;
- (id)initWithContainer:(id)arg1 privateContainer:(id)arg2;
- (id)privateContainer;
- (id)registerClass:(Class)arg1 factory:(id /* block */)arg2;
- (id)registerClass:(Class)arg1 name:(id)arg2 factory:(id /* block */)arg3;
- (id)registerProtocol:(id)arg1 factory:(id /* block */)arg2;
- (id)registerProtocol:(id)arg1 name:(id)arg2 factory:(id /* block */)arg3;
- (void)setContainer:(id)arg1;
- (void)setPrivateContainer:(id)arg1;
- (id)unsafeRegisterForKey:(id)arg1 name:(id)arg2 factory:(id /* block */)arg3;

@end
