/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLCountersTraceCommandEncoder : NSObject {
    unsigned long long  _flags;
    NSString * _label;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _segment;
    struct BinaryBuffer { int (**x1)(); struct StreamBuffer { char *x_2_1_1; char *x_2_1_2; char *x_2_1_3; } x2; } * _stream;
}

@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } segment;

- (void)dealloc;
- (void)endEncoding;
- (unsigned long long)flags;
- (id)init:(struct BinaryBuffer { int (**x1)(); struct StreamBuffer { char *x_2_1_1; char *x_2_1_2; char *x_2_1_3; } x2; }*)arg1 flags:(unsigned long long)arg2;
- (void)insertDebugSignpost:(id)arg1;
- (id)label;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })segment;
- (void)setLabel:(id)arg1;

@end
