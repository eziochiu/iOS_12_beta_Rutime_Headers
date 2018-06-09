/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@interface GSDaemonProxySync : NSProxy <GSProtocol> {
    NSError * _error;
    id  _result;
    NSObject<GSProtocol> * _target;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) id result;

+ (id)proxy;

- (void).cxx_destruct;
- (struct __CFError { }*)copyCFError;
- (id)error;
- (void)finalize;
- (void)forwardInvocation:(id)arg1;
- (void)handleBoolResult:(bool)arg1 error:(id)arg2;
- (void)handleObjResult:(id)arg1 error:(id)arg2;
- (id)initWithXPCObject:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)result;
- (void)setError:(id)arg1;
- (void)setResult:(id)arg1;

@end
