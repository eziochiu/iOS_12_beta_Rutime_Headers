/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
 */

@interface ROCKFFICIFObject : NSObject {
    bool * _allocatedArgumentTypes;
    struct _ffi_type {} ** _argumentTypes;
    unsigned char  _buffer;
    struct { 
        int abi; 
        unsigned int nargs; 
        struct _ffi_type {} **arg_types; 
        struct _ffi_type {} *rtype; 
        unsigned int bytes; 
        unsigned int flags; 
        unsigned int aarch64_nfixedargs; 
    }  _cif;
    NSMethodSignature * _methodSignature;
}

@property (nonatomic) bool*allocatedArgumentTypes;
@property (nonatomic) struct _ffi_type {}**argumentTypes;
@property (nonatomic) struct { int x1; unsigned int x2; struct _ffi_type {} **x3; struct _ffi_type {} *x4; unsigned int x5; unsigned int x6; unsigned int x7; } cif;
@property (nonatomic, retain) NSMethodSignature *methodSignature;

+ (id)cifObjectWithMethodSignature:(id)arg1;

- (void).cxx_destruct;
- (bool*)allocatedArgumentTypes;
- (struct _ffi_type {}**)argumentTypes;
- (void)callWithFunctionPointer:(int (*)arg1 returnPointer:(void*)arg2 argumentPointers:(void**)arg3;
- (struct { int x1; unsigned int x2; struct _ffi_type {} **x3; struct _ffi_type {} *x4; unsigned int x5; unsigned int x6; unsigned int x7; })cif;
- (void)dealloc;
- (id)description;
- (id)methodSignature;
- (void)prepareClosure:(struct { void *x1; void *x2; struct { /* ? */ } *x3; int (*x4)(); void *x5; }*)arg1 functionPointer:(int (*)arg2 userData:(void*)arg3 codeLocation:(int (*)arg4;
- (void)setAllocatedArgumentTypes:(bool*)arg1;
- (void)setArgumentTypes:(struct _ffi_type {}**)arg1;
- (void)setCif:(struct { int x1; unsigned int x2; struct _ffi_type {} **x3; struct _ffi_type {} *x4; unsigned int x5; unsigned int x6; unsigned int x7; })arg1;
- (void)setMethodSignature:(id)arg1;

@end
