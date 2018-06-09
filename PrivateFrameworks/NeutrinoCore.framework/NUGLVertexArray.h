/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUGLVertexArray : NUGLObject {
    NSArray * _attributeLocations;
    NUGLBuffer * _buffer;
    long long  _capacity;
    long long  _count;
    NUGLVertexLayout * _layout;
    NSArray * _locations;
    bool  _needsUpdate;
}

@property (nonatomic, copy) NSArray *attributeLocations;
@property (nonatomic, readonly) long long capacity;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) NUGLVertexLayout *layout;

- (void).cxx_destruct;
- (void)_growToCapacity:(long long)arg1 context:(id)arg2;
- (void)_updateAttributesWithContext:(id)arg1;
- (id)attributeLocations;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })bufferRangeForVertexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (long long)capacity;
- (long long)count;
- (void)delete;
- (void)ensure:(id)arg1;
- (void)generate:(id)arg1;
- (id)init;
- (id)initWithLayout:(id)arg1 capacity:(long long)arg2;
- (id)layout;
- (void)readVertexDataInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 context:(id)arg2 block:(id /* block */)arg3;
- (void)reset;
- (void)setAttributeLocations:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })writeVertexData:(long long)arg1 context:(id)arg2 block:(id /* block */)arg3;

@end
