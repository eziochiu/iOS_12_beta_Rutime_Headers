/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartShadowsPropertiesInternal : NSObject {
    TSCH3DCamera * mCamera;
    bool  mEnabled;
    TSCH3DDataBufferResource * mFadecoords;
    TSCH3DDataBufferResource * mQuad;
    NSObject<TSCH3DShadowsRenderer> * mRenderer;
    struct box<glm::detail::tvec3<float> > { 
        struct tvec3<float> { 
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
        } mMin; 
        struct tvec3<float> { 
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
        } mMax; 
    }  mShadowPlanePadding;
    TSCH3DDataBufferResource * mTexcoords;
}

@property (nonatomic, retain) TSCH3DCamera *camera;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) TSCH3DDataBufferResource *fadecoords;
@property (nonatomic, retain) TSCH3DDataBufferResource *quad;
@property (nonatomic, readonly) NSObject<TSCH3DShadowsRenderer> *renderer;
@property (nonatomic, readonly) bool shadowPlaneValid;
@property (nonatomic, retain) TSCH3DDataBufferResource *texcoords;

- (id).cxx_construct;
- (id)camera;
- (void)dealloc;
- (bool)enabled;
- (id)fadecoords;
- (id)initWithCamera:(id)arg1 renderer:(id)arg2;
- (void)invalidate;
- (id)quad;
- (id)renderer;
- (void)setCamera:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFadecoords:(id)arg1;
- (void)setQuad:(id)arg1;
- (void)setTexcoords:(id)arg1;
- (void)setupResources;
- (bool)shadowPlaneValid;
- (id)texcoords;

@end
