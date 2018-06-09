/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPyramidLevelResources : NSObject {
    TSUPair * mResourcePair;
}

@property (nonatomic, readonly) TSCH3DPyramidBlurFBOResource *finalResource;
@property (nonatomic, readonly) struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } size;
@property (nonatomic, readonly) TSCH3DPyramidBlurFBOResource *temporaryResource;

+ (id)resourcesWithFBOSize:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1;

- (void)dealloc;
- (id)finalResource;
- (unsigned long long)hash;
- (id)initWithFBOSize:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1;
- (bool)isEqual:(id)arg1;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })size;
- (id)temporaryResource;

@end
