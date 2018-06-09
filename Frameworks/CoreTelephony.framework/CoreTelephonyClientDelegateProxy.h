/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CoreTelephonyClientDelegateProxy : NSProxy <CoreTelephonyClientDelegateProxyInterface> {
    id  _delegate;
    struct queue { 
        struct object { 
            struct dispatch_object_s {} *fObj; 
        } fObj; 
    }  _userQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)delegate;
- (void)forwardInvocation:(id)arg1;
- (id)initWithQueue:(struct queue { struct object { struct dispatch_object_s {} *x_1_1_1; } x1; })arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)remoteObjectRespondsToSelector:(SEL)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
