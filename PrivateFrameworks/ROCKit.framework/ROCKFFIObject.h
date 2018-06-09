/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
 */

@interface ROCKFFIObject : ROCKFFICIFObject <NSInvocationInterface> {
    void ** _argumentPointers;
    unsigned char * _argumentRetentionTypes;
    bool  _argumentsRetained;
    id /* block */  _autoreleasingHandler;
    unsigned char  _invocationBuffer;
    NSObject<OS_dispatch_queue> * _invocationQueue;
    bool  _isBlockInvocation;
    id /* block */  _returnHandler;
}

@property (nonatomic) void**argumentPointers;
@property (nonatomic) unsigned char*argumentRetentionTypes;
@property (nonatomic) bool argumentsRetained;
@property (nonatomic, copy) id /* block */ autoreleasingHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *invocationQueue;
@property (nonatomic) bool isBlockInvocation;
@property (nonatomic, readonly) NSMethodSignature *methodSignature;
@property (nonatomic, copy) id /* block */ returnHandler;
@property (nonatomic) SEL selector;
@property (readonly) Class superclass;
@property (nonatomic) id target;

+ (id)invocationWithMethodSignature:(id)arg1 argumentPointers:(void**)arg2;
+ (id)invocationWithMethodSignature:(id)arg1 invocationQueue:(id)arg2 returnHandler:(id /* block */)arg3 autoreleasingHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (void**)argumentPointers;
- (unsigned char*)argumentRetentionTypes;
- (bool)argumentsRetained;
- (id /* block */)autoreleasingHandler;
- (void)dealloc;
- (id)description;
- (void)getArgument:(void*)arg1 atIndex:(long long)arg2;
- (void)getReturnValue:(void*)arg1;
- (id)invocationQueue;
- (void)invoke;
- (void)invokeWithTarget:(id)arg1;
- (bool)isBlockInvocation;
- (void)retainArguments;
- (id /* block */)returnHandler;
- (SEL)selector;
- (void)setArgument:(void*)arg1 atIndex:(long long)arg2;
- (void)setArgumentPointers:(void**)arg1;
- (void)setArgumentRetentionTypes:(unsigned char*)arg1;
- (void)setArgumentsRetained:(bool)arg1;
- (void)setAutoreleasingHandler:(id /* block */)arg1;
- (void)setInvocationQueue:(id)arg1;
- (void)setIsBlockInvocation:(bool)arg1;
- (void)setReturnHandler:(id /* block */)arg1;
- (void)setReturnValue:(void*)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
