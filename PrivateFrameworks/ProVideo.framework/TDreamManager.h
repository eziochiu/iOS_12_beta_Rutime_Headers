/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface TDreamManager : NSObject {
    float  AUX1INPUT;
    float  AUX2INPUT;
    float  AUX3INPUT;
    float  BRIGHTNESSPARAM;
    float  LOOSEPARAM;
    int  QUANTIZE_LEVELS;
    float  SMOOTHPARAM;
    NSMutableDictionary * _contextProgramMap;
    float  coloresDobles;
    float  coloresVignette;
    float  coloresVignetteLookUpsBN;
    float  coloresVignetteLookUpsEspeciales;
    float  coloresVignetteLookUpsNORMALES;
    float  false1B;
    float  false1G;
    float  false1R;
    float  false2B;
    float  false2G;
    float  false2R;
    int  filterMode;
    TDreamFramebufferManager * framebufferManager;
    EAGLContext * glContext;
    float  inputAspectRatio;
    struct IPImage { 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } fullRect; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } imageRect; 
        float xScale; 
        float yScale; 
        unsigned int textureID; 
        unsigned int textureTarget; 
        unsigned int textureInternalFormat; 
        unsigned int textureFormat; 
        unsigned int textureType; 
        unsigned int textureUnit; 
        unsigned int drawFBO; 
    }  inputImage;
    struct CGSize { 
        double width; 
        double height; 
    }  inputTextureSize;
    struct CGSize { 
        double width; 
        double height; 
    }  largeUseSize;
    int  lookUpIndex;
    bool  lookUpTextureNeedUpdate;
    NSArray * lookups;
    NSArray * lookupsBN;
    NSArray * lookupsEE;
    struct IPImage { 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } fullRect; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } imageRect; 
        float xScale; 
        float yScale; 
        unsigned int textureID; 
        unsigned int textureTarget; 
        unsigned int textureInternalFormat; 
        unsigned int textureFormat; 
        unsigned int textureType; 
        unsigned int textureUnit; 
        unsigned int drawFBO; 
    }  maskImage;
    int  modeLookUps;
    int  oldFilterMode;
    struct IPImage { 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } fullRect; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } imageRect; 
        float xScale; 
        float yScale; 
        unsigned int textureID; 
        unsigned int textureTarget; 
        unsigned int textureInternalFormat; 
        unsigned int textureFormat; 
        unsigned int textureType; 
        unsigned int textureUnit; 
        unsigned int drawFBO; 
    }  outputImage;
    struct CGSize { 
        double width; 
        double height; 
    }  smallUseSize;
    struct CGSize { 
        double width; 
        double height; 
    }  smallUseSizeNoSmooth;
    float  vigneteB;
    float  vigneteBaux;
    float  vigneteG;
    float  vigneteGaux;
    float  vigneteR;
}

- (void).cxx_destruct;
- (void)addImageBufferToPool:(int)arg1 ipImage:(struct IPImage { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; float x3; float x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; })arg2;
- (void)allocatePrograms:(id)arg1;
- (unsigned int)bufferFromCacheNumber:(int)arg1;
- (bool)checkIPImage:(const struct IPImage { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; float x3; float x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)arg1;
- (bool)checkMaskIPImage:(const struct IPImage { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; float x3; float x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)arg1;
- (void)dealloc;
- (void)deleteAllFilters;
- (void)fillConstants;
- (unsigned int)getOutputBufferName;
- (id)glContext;
- (id)init;
- (int)largeBufferCount;
- (void)newLookUpFilterMode;
- (long long)processTextureOnTexture:(const struct IPImage { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; float x3; float x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)arg1 andOutput:(const struct IPImage { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; float x3; float x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)arg2 andParams:(struct imageProcessingParams { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; })arg3;
- (long long)processTextureOnTexture:(const struct IPImage { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; float x3; float x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)arg1 andOutput:(const struct IPImage { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; float x3; float x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)arg2 andParams:(struct imageProcessingParams { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; })arg3 withMask:(const struct IPImage { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; float x3; float x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)arg4;
- (id)programsForCurrentContext;
- (void)renderPipeline;
- (void)setBlackFillBasedOnSlider;
- (void)setUniformsAndParameters;
- (int)smallBufferCount;
- (unsigned int)textureFromCacheNumber:(int)arg1;
- (bool)updateParameters:(struct imageProcessingParams { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; })arg1;

@end
