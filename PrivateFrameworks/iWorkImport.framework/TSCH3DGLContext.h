/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLContext : TSCH3DContext <TSCHUnretainedParent> {
    struct GLSingleState { 
        unsigned int target; 
        struct UpdatableValue<unsigned int> { 
            unsigned int value; 
        } handle; 
    }  mBufferArraysStates;
    struct BufferStates { 
        struct array<TSCH3D::GLSingleState, 2> { 
            struct GLSingleState { 
                unsigned int target; 
                struct UpdatableValue<unsigned int> { 
                    unsigned int value; 
                } handle; 
            } __elems_[2]; 
        } states; 
    }  mBufferStates;
    NSMutableIndexSet * mChangeMask;
    NSMutableSet * mChildrenContexts;
    NSIndexSet * mEnabledArrays;
    NSMutableDictionary * mExtensionsNamesDict;
    bool  mIsSharable;
    TSCH3DGLContext * mSharedContext;
    struct RenderState { 
        bool mBlend; 
        int blendMode; 
        bool depthTest; 
        bool depthMask; 
        bool culling; 
        bool cullBack; 
        bool polygonOffset; 
        float polygonOffsetFactor; 
        float polygonOffsetUnits; 
        struct EnableClipDistances { 
            struct array<bool, 8> { 
                bool __elems_[8]; 
            } states; 
        } enableClipDistances; 
    }  mState;
    struct TextureUnitStates { 
        struct UpdatableValue<unsigned long> { 
            unsigned long long value; 
        } activeTexture; 
        struct array<TSCH3D::GLSingleState, 4> { 
            struct GLSingleState { 
                unsigned int target; 
                struct UpdatableValue<unsigned int> { 
                    unsigned int value; 
                } handle; 
            } __elems_[4]; 
        } states; 
    }  mTextureUnitStates;
    TSCH3DGLVersion * mVersion;
    struct box<glm::detail::tvec2<int> > { 
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
        } mMin; 
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
        } mMax; 
    }  mViewport;
    NSMutableDictionary * mVirtualScreenToCapabilitiesMap;
}

@property (nonatomic, readonly) NSSet *childrenContexts;
@property (nonatomic, readonly) bool isSharable;
@property (nonatomic, readonly) TSCH3DGLVersion *version;

- (id).cxx_construct;
- (void)activateTextureUnit:(unsigned long long)arg1;
- (void)addChangeFlag:(int)arg1;
- (void)addShaderChangeFlag;
- (void)bindTextureHandleValue:(unsigned int)arg1 is3DTexture:(bool)arg2;
- (struct GLSingleState { unsigned int x1; struct UpdatableValue<unsigned int> { unsigned int x_2_1_1; } x2; }*)bufferArraysStates;
- (struct BufferStates { struct array<TSCH3D::GLSingleState, 2> { struct GLSingleState { unsigned int x_1_2_1; struct UpdatableValue<unsigned int> { unsigned int x_2_3_1; } x_1_2_2; } x_1_1_1[2]; } x1; }*)bufferStates;
- (id)capabilitiesForExtensions:(id)arg1;
- (id)childrenContexts;
- (bool)clearIfBoundAsCurrentContext;
- (void)clearParent;
- (void)dealloc;
- (id)description;
- (void)enableSharing;
- (void)enableVertexArrays:(id)arg1;
- (bool)hasChangeFlag:(int)arg1;
- (id)init;
- (id)initWithSharedContext:(id)arg1;
- (void)invalidateTextureHandleValue:(unsigned int)arg1;
- (bool)isSharable;
- (void)p_addChildContext:(id)arg1;
- (void)p_cacheCapabilitiesForKey:(id)arg1;
- (id)p_keyForScreen:(int)arg1;
- (void)p_removeChildContext:(id)arg1;
- (void)removeChangeFlag:(int)arg1;
- (void)setEnabledVertexArrays:(id)arg1;
- (void)setState:(const struct RenderState { bool x1; int x2; bool x3; bool x4; bool x5; bool x6; bool x7; float x8; float x9; struct EnableClipDistances { struct array<bool, 8> { bool x_1_2_1[8]; } x_10_1_1; } x10; }*)arg1;
- (id)sharedContext;
- (id)sharedID;
- (struct RenderState { bool x1; int x2; bool x3; bool x4; bool x5; bool x6; bool x7; float x8; float x9; struct EnableClipDistances { struct array<bool, 8> { bool x_1_2_1[8]; } x_10_1_1; } x10; })state;
- (bool)supportsCapability:(id)arg1;
- (id)version;
- (void)viewport:(struct box<glm::detail::tvec2<int> > { struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_1_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_1_1_2; } x1; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; } x2; }*)arg1;

@end
