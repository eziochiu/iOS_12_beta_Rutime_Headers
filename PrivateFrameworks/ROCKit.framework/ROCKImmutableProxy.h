/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
 */

@interface ROCKImmutableProxy : ROCKImpersonator <ROCKMemoizable> {
    NSMapTable * _properties;
    NSSet * _protocols;
    NSObject<OS_xpc_object> * _xpcDictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *properties;
@property (nonatomic, retain) NSSet *protocols;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcDictionary;

+ (id)immutableProxyWithInstance:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)_forwardStackInvocation:(id)arg1;
- (bool)conformsToProtocol:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithProtocols:(id)arg1 properties:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)properties;
- (id)protocols;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setProperties:(id)arg1;
- (void)setProtocols:(id)arg1;
- (void)setXpcDictionary:(id)arg1;
- (id)xpcDictionary;

@end
