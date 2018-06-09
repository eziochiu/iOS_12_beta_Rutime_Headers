/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
 */

@interface ROCKFFIClosureObject : NSObject {
    ROCKFFICIFObject * _cifObject;
    struct { void *x1; void *x2; struct { /* ? */ } *x3; int (*x4)(); void *x5; } * _closure;
    int (* _functionPointer;
}

@property (nonatomic, retain) ROCKFFICIFObject *cifObject;
@property (nonatomic) struct { void *x1; void *x2; struct { /* ? */ } *x3; int (*x4)(); void *x5; }*closure;
@property (nonatomic) int (*functionPointer;

+ (id)closureObjectWithCIFObject:(id)arg1 functionPointer:(int (*)arg2 userData:(void*)arg3;

- (void).cxx_destruct;
- (id)cifObject;
- (struct { void *x1; void *x2; struct { /* ? */ } *x3; int (*x4)(); void *x5; }*)closure;
- (void)dealloc;
- (int (*)functionPointer;
- (id)initWithCIFObject:(id)arg1 functionPointer:(int (*)arg2 userData:(void*)arg3;
- (void)setCifObject:(id)arg1;
- (void)setClosure:(struct { void *x1; void *x2; struct { /* ? */ } *x3; int (*x4)(); void *x5; }*)arg1;
- (void)setFunctionPointer:(int (*)arg1;

@end
