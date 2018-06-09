/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DDataBuffer : NSObject

@property (nonatomic, readonly) unsigned long long byteSize;
@property (nonatomic, readonly) unsigned long long componentByteSize;
@property (nonatomic, readonly) unsigned long long elementByteSize;
@property (nonatomic, readonly) bool hasLevels;
@property (nonatomic, readonly) struct tvec3<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; union { int x_3_1_1; int x_3_1_2; int x_3_1_3; } x3; } size;
@property (nonatomic, readonly) struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } size2;

- (struct DataBufferInfo { int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; })bufferInfo;
- (unsigned long long)byteSize;
- (unsigned long long)componentByteSize;
- (struct DataBufferLevelData { void *x1; struct tvec3<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; union { int x_3_2_1; int x_3_2_2; int x_3_2_3; } x_2_1_3; } x2; })dataAtLevel:(unsigned long long)arg1;
- (struct DataBufferLevelData { void *x1; struct tvec3<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; union { int x_3_2_1; int x_3_2_2; int x_3_2_3; } x_2_1_3; } x2; })dataWithSizeGreaterOrEqualTo:(unsigned long long)arg1;
- (id)description;
- (unsigned long long)elementByteSize;
- (bool)hasLevels;
- (struct tvec3<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; union { int x_3_1_1; int x_3_1_2; int x_3_1_3; } x3; })size;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })size2;

@end
