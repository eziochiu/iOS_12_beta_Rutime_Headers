/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DCombinationRenderProcessor : TSCH3DRetargetRenderProcessor {
    TSCH3DShaderEffects * mEffects;
    NSIndexSet * mEnabled;
    struct StateStack<TSCH3D::ObjectState, 6> { 
        unsigned long long mIndex; 
        struct ObjectState { 
            struct ObjcSharedPtr<NSSet> { 
                NSSet *mValue; 
            } mEffects; 
            struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { 
                struct Lookup {} *__begin_; 
                struct Lookup {} *__end_; 
                struct __compressed_pair<TSCH3D::ObjectState::Lookup *, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { 
                    struct Lookup {} *__value_; 
                } __end_cap_; 
            } mAttributes; 
            struct array<SFUtility::ObjcSharedPtr<NSObject>, 8> { 
                struct ObjcSharedPtr<NSObject> { 
                    NSObject *mValue; 
                } __elems_[8]; 
            } mTextures; 
            struct array<TSCH3D::TextureAttributes, 8> { 
                struct TextureAttributes { 
                    int object; 
                    int format; 
                    bool mipmap; 
                    bool repeat; 
                    bool nearest; 
                    long long unit; 
                    struct TextureSizeHint { 
                        int loadOptimizedMipmaps; 
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
                        } sizeLODHint; 
                    } textureSizeHint; 
                    bool is3DTexture; 
                } __elems_[8]; 
            } mTextureAttributes; 
        } mCurrent; 
        struct ObjectState { 
            struct ObjcSharedPtr<NSSet> { 
                NSSet *mValue; 
            } mEffects; 
            struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { 
                struct Lookup {} *__begin_; 
                struct Lookup {} *__end_; 
                struct __compressed_pair<TSCH3D::ObjectState::Lookup *, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { 
                    struct Lookup {} *__value_; 
                } __end_cap_; 
            } mAttributes; 
            struct array<SFUtility::ObjcSharedPtr<NSObject>, 8> { 
                struct ObjcSharedPtr<NSObject> { 
                    NSObject *mValue; 
                } __elems_[8]; 
            } mTextures; 
            struct array<TSCH3D::TextureAttributes, 8> { 
                struct TextureAttributes { 
                    int object; 
                    int format; 
                    bool mipmap; 
                    bool repeat; 
                    bool nearest; 
                    long long unit; 
                    struct TextureSizeHint { 
                        int loadOptimizedMipmaps; 
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
                        } sizeLODHint; 
                    } textureSizeHint; 
                    bool is3DTexture; 
                } __elems_[8]; 
            } mTextureAttributes; 
        } mStack[6]; 
    }  mObjectStateStack;
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
    }  mProjection;
    bool  mProjectionChanged;
    TSCH3DShaderEffectsStates * mShaderEffectsStates;
    bool  mTransformChanged;
    struct StateStack<glm::detail::tmat4x4<float>, 8> { 
        unsigned long long mIndex; 
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
        } mCurrent; 
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
        } mStack[8]; 
    }  mTransformStack;
}

@property (nonatomic, readonly) bool projectionChanged;
@property (nonatomic, readonly) bool transformChanged;

+ (id)processorWithOriginal:(id)arg1 enableTypes:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)copyProjectionInto:(struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1;
- (void)copyTransformInto:(struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1;
- (struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)currentTransform;
- (void)dealloc;
- (id)effects;
- (id)effectsStates;
- (id)initWithOriginal:(id)arg1;
- (id)initWithOriginal:(id)arg1 enableTypes:(id)arg2;
- (bool)matrixEnabled;
- (void)multiply:(struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1;
- (bool)objectStateEnabled;
- (struct StateStack<TSCH3D::ObjectState, 6> { unsigned long long x1; struct ObjectState { struct ObjcSharedPtr<NSSet> { id x_1_2_1; struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_2_3_1; struct Lookup {} *x_2_3_2; struct __compressed_pair<TSCH3D::ObjectState::Lookup *, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_3_4_1; } x_2_3_3; } x_1_2_2; struct array<SFUtility::ObjcSharedPtr<NSObject>, 8> { struct ObjcSharedPtr<NSObject> { id x_1_4_1; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_4_2; } x_3_3_1[8]; } x_1_2_3; } x_2_1_1; struct ObjectState { struct ObjcSharedPtr<NSSet> { id x_1_3_1; struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_2_4_1; struct Lookup {} *x_2_4_2; struct __compressed_pair<TSCH3D::ObjectState::Lookup *, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_3_5_1; } x_2_4_3; } x_1_3_2; struct array<SFUtility::ObjcSharedPtr<NSObject>, 8> { struct ObjcSharedPtr<NSObject> { id x_1_5_1; void*x_1_5_2; } x_3_4_1[8]; } x_1_3_3; } x_2_2_1; void*x_2_2_2; } x_2_1_2[6]; } x2; }*)objectStateStack;
- (void)popMatrix;
- (void)popState;
- (void)projection:(struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1;
- (bool)projectionChanged;
- (struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)projectionTransform;
- (void)pushMatrix;
- (void)pushState;
- (void)replace:(struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1;
- (void)resetBuffers;
- (void)resetTransformChangeFlags;
- (void)scale:(struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg1;
- (bool)shaderEnabled;
- (bool)transformChanged;
- (void)translate:(struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg1;

@end
