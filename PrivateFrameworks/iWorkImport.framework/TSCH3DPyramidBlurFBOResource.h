/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPyramidBlurFBOResource : TSCH3DFBOResource {
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
    }  mSize;
}

@property (nonatomic, readonly) struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } size;

+ (id)pyramidResourceWithFBOSize:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1;

- (id).cxx_construct;
- (id)initWithFBOSize:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })size;

@end
