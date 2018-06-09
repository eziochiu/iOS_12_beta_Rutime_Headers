/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3D2DDataBuffer : TSCH3DDataBuffer {
    struct DataBuffer2DDimension { 
        struct tvec2<int> { 
            union { 
                int x; 
                int r; 
                int s; 
            } ; 
            union { 
                int y; 
                int g; 
                int t; 
            } ; 
        } mSize; 
        unsigned long long mComponents; 
        bool mHasLevels; 
    }  mDimension;
}

@property (nonatomic, readonly) struct DataBuffer2DDimension { struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_1_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_1_1_2; } x1; unsigned long long x2; bool x3; } dimension;
@property (nonatomic, readonly) struct tvec3<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; union { int x_3_1_1; int x_3_1_2; int x_3_1_3; } x3; } size;

+ (id)bufferWithCapacityDimension:(const struct DataBuffer2DDimension { struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_1_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_1_1_2; } x1; unsigned long long x2; bool x3; }*)arg1;
+ (id)bufferWithCapacitySize:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1 components:(unsigned long long)arg2;

- (id).cxx_construct;
- (unsigned long long)components;
- (struct DataBufferLevelData { void *x1; struct tvec3<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; union { int x_3_2_1; int x_3_2_2; int x_3_2_3; } x_2_1_3; } x2; })dataAtLevel:(unsigned long long)arg1;
- (struct DataBuffer2DDimension { struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_1_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_1_1_2; } x1; unsigned long long x2; bool x3; })dimension;
- (bool)hasLevels;
- (id)initWithCapacityDimension:(const struct DataBuffer2DDimension { struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_1_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_1_1_2; } x1; unsigned long long x2; bool x3; }*)arg1;
- (struct tvec3<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; union { int x_3_1_1; int x_3_1_2; int x_3_1_3; } x3; })size;

@end
