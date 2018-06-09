/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLMultiArray : NSObject {
    id /* block */  _deallocator;
    bool  _managingData;
    struct MultiArrayBuffer { int (**x1)(); struct shared_ptr<unsigned char> { char *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x_3_1_1; unsigned long long *x_3_1_2; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x_3_2_1; } x_3_1_3; } x3; struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x_4_1_1; unsigned long long *x_4_1_2; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x_3_2_1; } x_4_1_3; } x4; int x5; unsigned long long x6; unsigned short x7; } * _pArray;
    NSArray * _shape;
    NSArray * _strides;
}

@property (getter=isContiguous, nonatomic, readonly) bool contiguous;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) void*dataPointer;
@property (nonatomic, readonly) long long dataType;
@property (getter=isManagingData, nonatomic, readonly) bool managingData;
@property (nonatomic, readonly) unsigned long long numberOfBytesPerElement;
@property (nonatomic, readonly) NSArray *shape;
@property (nonatomic, readonly) NSArray *strides;

// Image: /System/Library/Frameworks/CoreML.framework/CoreML

+ (id)arrayFromIndexVector:(const struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x_3_1_1; } x3; }*)arg1;
+ (int)cppStorageOrder:(long long)arg1;
+ (id)doubleMatrixWithValues:(id)arg1 error:(id*)arg2;
+ (id)doubleMultiArrayWithCopyOfMultiArray:(id)arg1;
+ (id)doubleMultiArrayWithShape:(id)arg1 valueArray:(id)arg2 error:(id*)arg3;
+ (id)doubleVectorWithValues:(id)arg1;
+ (struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x_3_1_1; } x3; })indexVectorFromArray:(id)arg1;
+ (struct __CVBuffer { }*)pixelBufferBGRA8FromMultiArrayCHW:(id)arg1 channelOrderIsBGR:(bool)arg2 error:(id*)arg3;
+ (struct __CVBuffer { }*)pixelBufferGray8FromMultiArrayHW:(id)arg1 error:(id*)arg2;
+ (id)stringForDataType:(long long)arg1;

- (void).cxx_destruct;
- (bool)copyIntoMultiArray:(id)arg1 error:(id*)arg2;
- (long long)count;
- (void*)dataPointer;
- (long long)dataType;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)description;
- (double*)doublePointer;
- (bool)fillWithNumber:(id)arg1;
- (id)initWithDataPointer:(void*)arg1 shape:(id)arg2 dataType:(long long)arg3 strides:(id)arg4 deallocator:(id /* block */)arg5 error:(id*)arg6;
- (id)initWithShape:(id)arg1 dataType:(long long)arg2 error:(id*)arg3;
- (id)initWithShape:(id)arg1 dataType:(long long)arg2 storageOrder:(long long)arg3 error:(id*)arg4;
- (bool)isContiguous;
- (bool)isContiguousInOrder:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMultiArray:(id)arg1;
- (bool)isManagingData;
- (void*)multiArrayBuffer;
- (id)numberArray;
- (id)numberAtOffset:(unsigned long long)arg1;
- (unsigned long long)numberOfBytesPerElement;
- (id)objectAtIndexedSubscript:(long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (unsigned long long)offsetForKeyedSubscript:(id)arg1;
- (id)sequeeze;
- (id)sequeezeDimensions:(id)arg1 error:(id*)arg2;
- (void)setNumber:(id)arg1 atOffset:(unsigned long long)arg2;
- (void)setObject:(id)arg1 atIndexedSubscript:(long long)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (bool)setRangeWithRawData:(id)arg1 destIndex:(unsigned long long)arg2 error:(id*)arg3;
- (id)shape;
- (id)sliceAtOrigin:(id)arg1 shape:(id)arg2 squeeze:(bool)arg3 error:(id*)arg4;
- (id)strides;
- (bool)vectorizeIntoMultiArray:(id)arg1 storageOrder:(long long)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices

- (double*)doublePointer;
- (float*)floatPointer;
- (id)initForDoubleTypeWithShape:(id)arg1;
- (id)initForFloat32TypeWithShape:(id)arg1;

@end
