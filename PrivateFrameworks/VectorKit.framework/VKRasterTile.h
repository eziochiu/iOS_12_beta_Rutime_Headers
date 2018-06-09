/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterTile : VKTile {
    NSData * _data;
    int  _genericTileType;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _gglTexture;
    bool  _hasGenericTileType;
    struct unique_ptr<ggl::Textured::Pos2DUVPipelineSetup, std::__1::default_delete<ggl::Textured::Pos2DUVPipelineSetup> > { 
        struct __compressed_pair<ggl::Textured::Pos2DUVPipelineSetup *, std::__1::default_delete<ggl::Textured::Pos2DUVPipelineSetup> > { 
            struct Pos2DUVPipelineSetup {} *__value_; 
        } __ptr_; 
    }  _pipelineSetup;
    struct unique_ptr<ggl::Clut::Pos2DUVPipelineSetup, std::__1::default_delete<ggl::Clut::Pos2DUVPipelineSetup> > { 
        struct __compressed_pair<ggl::Clut::Pos2DUVPipelineSetup *, std::__1::default_delete<ggl::Clut::Pos2DUVPipelineSetup> > { 
            struct Pos2DUVPipelineSetup {} *__value_; 
        } __ptr_; 
    }  _pipelineSetupCLUT;
    struct RenderItem { 
        int (**_vptr$RenderItem)(); 
        char *_name; 
        struct RenderState {} *_renderState; 
        struct PipelineSetup {} *_pipelineSetup; 
        unsigned int _stencilRefValue; 
        unsigned long long _renderOrder; 
        float _lineWidth; 
        struct Mesh {} *_mesh; 
        struct Range<unsigned long> { 
            unsigned long long _min; 
            unsigned long long _max; 
        } _range; 
        struct Range<unsigned long> {} *_ranges; 
        unsigned long long _rangeCount; 
    }  _renderItem;
    struct unique_ptr<ggl::TextureWithReverseAlpha::Pos2DUVPipelineSetup, std::__1::default_delete<ggl::TextureWithReverseAlpha::Pos2DUVPipelineSetup> > { 
        struct __compressed_pair<ggl::TextureWithReverseAlpha::Pos2DUVPipelineSetup *, std::__1::default_delete<ggl::TextureWithReverseAlpha::Pos2DUVPipelineSetup> > { 
            struct Pos2DUVPipelineSetup {} *__value_; 
        } __ptr_; 
    }  _shaderReverseAlphaSetup;
    struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { 
        struct StylesheetManager<gss::PropertyID> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _styleManager;
}

@property (nonatomic, readonly) int genericTileType;
@property (nonatomic) struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; } gglTexture;
@property (nonatomic, readonly) bool hasGenericTileType;
@property (nonatomic, readonly) struct RenderItem { int (**x1)(); char *x2; struct RenderState {} *x3; struct PipelineSetup {} *x4; unsigned int x5; unsigned long long x6; float x7; struct Mesh {} *x8; struct Range<unsigned long> { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; struct Range<unsigned long> {} *x10; unsigned long long x11; }*renderItem;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<ggl::TextureData2D> { struct TextureData2D {} *x1; struct __shared_weak_count {} *x2; })buildTextureDataFromCGImage:(struct CGImage { }*)arg1;
- (void)dealloc;
- (int)genericTileType;
- (void)gglBuildTexture:(struct Device { int (**x1)(); struct DeviceVersion { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct DeviceCapabilities { bool x_3_1_1; bool x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; struct DeviceSize { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; } x_3_1_6; } x3; struct DeviceAPIProperties { int x_4_1_1; double x_4_1_2; } x4; int x5; int x6; }*)arg1;
- (struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; })gglTexture;
- (bool)hasGenericTileType;
- (void)immediateLoad:(struct Device { int (**x1)(); struct DeviceVersion { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct DeviceCapabilities { bool x_3_1_1; bool x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; struct DeviceSize { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; } x_3_1_6; } x3; struct DeviceAPIProperties { int x_4_1_1; double x_4_1_2; } x4; int x5; int x6; }*)arg1;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 imageData:(id)arg2 styleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg3;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 imageData:(id)arg2 styleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg3 genericTileType:(int)arg4;
- (struct CGImage { }*)newCGImageFromData:(id)arg1;
- (struct RenderItem { int (**x1)(); char *x2; struct RenderState {} *x3; struct PipelineSetup {} *x4; unsigned int x5; unsigned long long x6; float x7; struct Mesh {} *x8; struct Range<unsigned long> { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; struct Range<unsigned long> {} *x10; unsigned long long x11; }*)renderItem;
- (void)setGglTexture:(struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setupClutShaderWithRenderState:(struct RenderState { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; struct DepthState { int x_4_1_1; int x_4_1_2; int x_4_1_3; float x_4_1_4; float x_4_1_5; } x4; struct StencilState { int x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; int x_5_1_5; unsigned int x_5_1_6; unsigned int x_5_1_7; unsigned int x_5_1_8; } x5; struct RasterizerState { int x_6_1_1; int x_6_1_2; unsigned int x_6_1_3; struct Box<unsigned int, 2> { struct Matrix<unsigned int, 2, 1> { unsigned int x_1_3_1[2]; } x_4_2_1; struct Matrix<unsigned int, 2, 1> { unsigned int x_2_3_1[2]; } x_4_2_2; } x_6_1_4; } x6; bool x7; }*)arg1 pipelineState:(const struct shared_ptr<ggl::Clut::Pos2DUVPipelineState> { struct Pos2DUVPipelineState {} *x1; struct __shared_weak_count {} *x2; }*)arg2 mesh:(struct Mesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; struct StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)arg3 clutTexture:(struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; unsigned int x10; struct shared_ptr<const ggl::TextureDataAbstract> { struct TextureDataAbstract {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; bool x12; bool x13; unsigned int x14; unsigned int x15; bool x16; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; }*)arg4 clutBlend:(float)arg5;
- (void)setupNormalShaderWithRenderState:(struct RenderState { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; struct DepthState { int x_4_1_1; int x_4_1_2; int x_4_1_3; float x_4_1_4; float x_4_1_5; } x4; struct StencilState { int x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; int x_5_1_5; unsigned int x_5_1_6; unsigned int x_5_1_7; unsigned int x_5_1_8; } x5; struct RasterizerState { int x_6_1_1; int x_6_1_2; unsigned int x_6_1_3; struct Box<unsigned int, 2> { struct Matrix<unsigned int, 2, 1> { unsigned int x_1_3_1[2]; } x_4_2_1; struct Matrix<unsigned int, 2, 1> { unsigned int x_2_3_1[2]; } x_4_2_2; } x_6_1_4; } x6; bool x7; }*)arg1 pipelineState:(const struct shared_ptr<ggl::Textured::Pos2DUVPipelineState> { struct Pos2DUVPipelineState {} *x1; struct __shared_weak_count {} *x2; }*)arg2 mesh:(struct Mesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; struct StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)arg3;
- (void)setupReverseAlphaShaderWithRenderState:(struct RenderState { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; struct DepthState { int x_4_1_1; int x_4_1_2; int x_4_1_3; float x_4_1_4; float x_4_1_5; } x4; struct StencilState { int x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; int x_5_1_5; unsigned int x_5_1_6; unsigned int x_5_1_7; unsigned int x_5_1_8; } x5; struct RasterizerState { int x_6_1_1; int x_6_1_2; unsigned int x_6_1_3; struct Box<unsigned int, 2> { struct Matrix<unsigned int, 2, 1> { unsigned int x_1_3_1[2]; } x_4_2_1; struct Matrix<unsigned int, 2, 1> { unsigned int x_2_3_1[2]; } x_4_2_2; } x_6_1_4; } x6; bool x7; }*)arg1 pipelineState:(const struct shared_ptr<ggl::TextureWithReverseAlpha::Pos2DUVPipelineState> { struct Pos2DUVPipelineState {} *x1; struct __shared_weak_count {} *x2; }*)arg2 mesh:(struct Mesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; struct StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)arg3 roadAlpha:(float)arg4;

@end
