/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTexCoordGeneration : NSObject {
    TSCH3DNormalDirectionMapper * mNormalDirectionMapper;
    struct tmat4x4<float> { 
        struct tvec4<float> { 
            union { 
                float x; 
                float r; 
                float s; 
            } ; 
            union { 
                float y; 
                float g; 
                float t; 
            } ; 
            union { 
                float z; 
                float b; 
                float p; 
            } ; 
            union { 
                float w; 
                float a; 
                float q; 
            } ; 
        } value[4]; 
    }  mTransform;
}

@property (nonatomic, retain) TSCH3DNormalDirectionMapper *normalDirectionMapper;

- (id).cxx_construct;
- (void)dealloc;
- (id)init;
- (id)initWithTransform:(const struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1;
- (id)normalDirectionMapper;
- (void)setNormalDirectionMapper:(id)arg1;

@end
