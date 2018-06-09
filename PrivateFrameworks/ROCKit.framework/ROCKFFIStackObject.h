/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
 */

@interface ROCKFFIStackObject : NSObject <NSInvocationInterface> {
    void ** _argumentPointers;
    struct { int x1; unsigned int x2; struct _ffi_type {} **x3; struct _ffi_type {} *x4; unsigned int x5; unsigned int x6; unsigned int x7; } * _cif;
    NSMethodSignature * _methodSignature;
    void * _returnPointer;
}

@property (nonatomic) void**argumentPointers;
@property (nonatomic, readonly) bool argumentsRetained;
@property (nonatomic) struct { int x1; unsigned int x2; struct _ffi_type {} **x3; struct _ffi_type {} *x4; unsigned int x5; unsigned int x6; unsigned int x7; }*cif;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *invocationQueue;
@property (nonatomic, retain) NSMethodSignature *methodSignature;
@property (nonatomic) void*returnPointer;
@property (nonatomic) SEL selector;
@property (readonly) Class superclass;
@property (nonatomic) id target;

+ (id)invocationWithMethodSignature:(id)arg1 cif:(struct { int x1; unsigned int x2; struct _ffi_type {} **x3; struct _ffi_type {} *x4; unsigned int x5; unsigned int x6; unsigned int x7; }*)arg2 returnPointer:(void*)arg3 argumentPointers:(void**)arg4;

- (void).cxx_destruct;
- (void**)argumentPointers;
- (bool)argumentsRetained;
- (struct { int x1; unsigned int x2; struct _ffi_type {} **x3; struct _ffi_type {} *x4; unsigned int x5; unsigned int x6; unsigned int x7; }*)cif;
- (void)getArgument:(void*)arg1 atIndex:(long long)arg2;
- (void)getReturnValue:(void*)arg1;
- (id)initWithMethodSignature:(id)arg1 cif:(struct { int x1; unsigned int x2; struct _ffi_type {} **x3; struct _ffi_type {} *x4; unsigned int x5; unsigned int x6; unsigned int x7; }*)arg2 returnPointer:(void*)arg3 argumentPointers:(void**)arg4;
- (id)invocationQueue;
- (void)invoke;
- (void)invokeWithTarget:(id)arg1;
- (id)methodSignature;
- (void)retainArguments;
- (void*)returnPointer;
- (SEL)selector;
- (void)setArgument:(void*)arg1 atIndex:(long long)arg2;
- (void)setArgumentPointers:(void**)arg1;
- (void)setCif:(struct { int x1; unsigned int x2; struct _ffi_type {} **x3; struct _ffi_type {} *x4; unsigned int x5; unsigned int x6; unsigned int x7; }*)arg1;
- (void)setMethodSignature:(id)arg1;
- (void)setReturnPointer:(void*)arg1;
- (void)setReturnValue:(void*)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
