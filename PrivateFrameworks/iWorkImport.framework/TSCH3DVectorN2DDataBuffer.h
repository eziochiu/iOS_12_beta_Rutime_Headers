/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DVectorN2DDataBuffer : TSCH3D2DDataBuffer {
    struct vector<unsigned char, std::__1::allocator<unsigned char> > { 
        char *__begin_; 
        char *__end_; 
        struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { 
            char *__value_; 
        } __end_cap_; 
    }  mContainer;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<unsigned char' */ struct *container; /* unknown property attribute:  std::__1::allocator<unsigned char> >=*}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)componentByteSize;
- (int)componentType;
- (struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *x1; char *x2; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *x_3_1_1; } x3; }*)container;
- (unsigned long long)count;
- (const void*)data;
- (void)fillCapacity;
- (id)initWithCapacityDimension:(const struct DataBuffer2DDimension { struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_1_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_1_1_2; } x1; unsigned long long x2; bool x3; }*)arg1;
- (void*)mutableData;
- (void)resizeFillDimension:(const struct DataBuffer2DDimension { struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_1_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_1_1_2; } x1; unsigned long long x2; bool x3; }*)arg1;

@end
