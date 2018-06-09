/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPolygonGroup : VKPolygonalItemGroup {
    unsigned char  _lastResolvedZoom;
    VKSharedResources * _sharedResources;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _sourceRoofTexture;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _sourceTexture;
    struct optional<md::MeshSet<ggl::PolygonCommonStroke::MeshMesh, ggl::PolygonCommonStroke::DefaultVbo> > { 
        bool _hasValue; 
        union ValueUnion { 
            unsigned char data[152]; 
            struct MeshSet<ggl::PolygonCommonStroke::MeshMesh, ggl::PolygonCommonStroke::DefaultVbo> { 
                struct vector<std::__1::pair<unsigned short, unsigned int>, std::__1::allocator<std::__1::pair<unsigned short, unsigned int> > > { 
                    struct pair<unsigned short, unsigned int> {} *__begin_; 
                    struct pair<unsigned short, unsigned int> {} *__end_; 
                    struct __compressed_pair<std::__1::pair<unsigned short, unsigned int> *, std::__1::allocator<std::__1::pair<unsigned short, unsigned int> > > { 
                        struct pair<unsigned short, unsigned int> {} *__value_; 
                    } __end_cap_; 
                } _vertexAndIndexCounts; 
                struct vector<std::__1::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>, std::__1::allocator<std::__1::shared_ptr<ggl::PolygonCommonStroke::MeshMesh> > > { 
                    struct shared_ptr<ggl::PolygonCommonStroke::MeshMesh> {} *__begin_; 
                    struct shared_ptr<ggl::PolygonCommonStroke::MeshMesh> {} *__end_; 
                    struct __compressed_pair<std::__1::shared_ptr<ggl::PolygonCommonStroke::MeshMesh> *, std::__1::allocator<std::__1::shared_ptr<ggl::PolygonCommonStroke::MeshMesh> > > { 
                        struct shared_ptr<ggl::PolygonCommonStroke::MeshMesh> {} *__value_; 
                    } __end_cap_; 
                } _meshes; 
                struct DataWrite<ggl::PolygonCommonStroke::DefaultVbo> { 
                    struct BufferMemory { 
                        struct ResourceAccessor {} *_accessor; 
                        struct BufferData {} *_user; 
                        struct Range<unsigned long> { 
                            unsigned long long _min; 
                            unsigned long long _max; 
                        } _range; 
                        int _access; 
                        int _sync; 
                        char *_data; 
                    } _memory; 
                } _vertexDataWrite; 
                struct DataWrite<unsigned short> { 
                    struct BufferMemory { 
                        struct ResourceAccessor {} *_accessor; 
                        struct BufferData {} *_user; 
                        struct Range<unsigned long> { 
                            unsigned long long _min; 
                            unsigned long long _max; 
                        } _range; 
                        int _access; 
                        int _sync; 
                        char *_data; 
                    } _memory; 
                } _indexDataWrite; 
                unsigned char _meshIndex; 
                unsigned short _meshVertexOffset; 
                unsigned int _meshIndexOffset; 
            } type; 
        } _value; 
    }  _strokeMeshInfo;
    struct vector<std::__1::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>, std::__1::allocator<std::__1::shared_ptr<ggl::PolygonCommonStroke::MeshMesh> > > { 
        struct shared_ptr<ggl::PolygonCommonStroke::MeshMesh> {} *__begin_; 
        struct shared_ptr<ggl::PolygonCommonStroke::MeshMesh> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<ggl::PolygonCommonStroke::MeshMesh> *, std::__1::allocator<std::__1::shared_ptr<ggl::PolygonCommonStroke::MeshMesh> > > { 
            struct shared_ptr<ggl::PolygonCommonStroke::MeshMesh> {} *__value_; 
        } __end_cap_; 
    }  _strokeMeshes;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _targetRoofTexture;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _targetTexture;
}

@property (nonatomic, readonly) struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; unsigned int x10; struct shared_ptr<const ggl::TextureDataAbstract> { struct TextureDataAbstract {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; bool x12; bool x13; unsigned int x14; unsigned int x15; bool x16; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; }*sourceRoofTexture;
@property (nonatomic, readonly) struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; unsigned int x10; struct shared_ptr<const ggl::TextureDataAbstract> { struct TextureDataAbstract {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; bool x12; bool x13; unsigned int x14; unsigned int x15; bool x16; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; }*sourceTexture;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>' */ struct *strokeMeshes; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<ggl::PolygonCommonStroke::MeshMesh> > >=^{shared_ptr<ggl::PolygonCommonStroke::MeshMesh>}}} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{FeatureAttributeSet={vector<gss::FeatureAttributePair' */ struct  styleAttributes; /* unknown property attribute:  gss::Allocator>=^{Allocator}}}}} */
@property (nonatomic, readonly) struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; unsigned int x10; struct shared_ptr<const ggl::TextureDataAbstract> { struct TextureDataAbstract {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; bool x12; bool x13; unsigned int x14; unsigned int x15; bool x16; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; }*targetRoofTexture;
@property (nonatomic, readonly) struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; unsigned int x10; struct shared_ptr<const ggl::TextureDataAbstract> { struct TextureDataAbstract {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; bool x12; bool x13; unsigned int x14; unsigned int x15; bool x16; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; }*targetTexture;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; })_textureForName:(const struct basic_string<char, std::__1::char_traits<char>, geo::StdAllocator<char, gss::Allocator> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, geo::StdAllocator<char, gss::Allocator> >::__rep, geo::StdAllocator<char, gss::Allocator> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; struct StdAllocator<char, gss::Allocator> { struct Allocator {} *x_2_2_1; } x_1_1_2; } x1; }*)arg1;
- (bool)addFillForSection:(const struct PolygonSection { struct Matrix<float, 2, 1> {} *x1; struct Matrix<float, 2, 1> {} *x2; struct Matrix<float, 2, 1> {} *x3; bool *x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_8_1_1; unsigned int *x_8_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_8_1_3; } x8; float x9; }*)arg1 precision:(unsigned char)arg2 styleIndex:(unsigned int)arg3 cullingMask:(unsigned int)arg4 accessor:(struct ResourceAccessor { int (**x1)(); }*)arg5 triangulator:(id)arg6;
- (void)addPolygon:(struct { struct { struct { id x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned int x_1_2_6; unsigned long long x_1_2_7; bool x_1_2_8; unsigned long long x_1_2_9; float x_1_2_10; unsigned long long x_1_2_11; id x_1_2_12; } x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; int x_1_1_4; int x_1_1_5; int x_1_1_6; unsigned long long x_1_1_7; unsigned long long x_1_1_8; union { struct { struct { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_9_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_9_2_2; } x_1_1_9; struct { /* ? */ } *x_1_1_10; struct { unsigned short x_11_2_1[2]; unsigned short x_11_2_2[2]; } x_1_1_11; unsigned char x_1_1_12; bool x_1_1_13; unsigned char x_1_1_14; bool x_1_1_15; bool x_1_1_16; unsigned char x_1_1_17; bool x_1_1_18; unsigned char x_1_1_19; struct _NSRange { unsigned long long x_20_2_1; unsigned long long x_20_2_2; } x_1_1_20; bool x_1_1_21; } x1; }*)arg1 hasNonWaterStyle:(bool)arg2 accessor:(struct ResourceAccessor { int (**x1)(); }*)arg3 triangulator:(id)arg4;
- (void)addStrokeForSection:(const struct PolygonSection { struct Matrix<float, 2, 1> {} *x1; struct Matrix<float, 2, 1> {} *x2; struct Matrix<float, 2, 1> {} *x3; bool *x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_8_1_1; unsigned int *x_8_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_8_1_3; } x8; float x9; }*)arg1 paddedCount:(unsigned int)arg2 key:(struct pair<void *, unsigned long> { void *x1; unsigned long long x2; })arg3 attributes:(id)arg4 styles:(struct vector<std::__1::pair<bool, GEOFeatureStylePair>, std::__1::allocator<std::__1::pair<bool, GEOFeatureStylePair> > > { struct pair<bool, GEOFeatureStylePair> {} *x1; struct pair<bool, GEOFeatureStylePair> {} *x2; struct __compressed_pair<std::__1::pair<bool, GEOFeatureStylePair> *, std::__1::allocator<std::__1::pair<bool, GEOFeatureStylePair> > > { struct pair<bool, GEOFeatureStylePair> {} *x_3_1_1; } x3; }*)arg5 cullingMask:(unsigned int)arg6 accessor:(struct ResourceAccessor { int (**x1)(); }*)arg7;
- (unsigned int)createStrokePointStyleList:(struct { struct { struct { id x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned int x_1_2_6; unsigned long long x_1_2_7; bool x_1_2_8; unsigned long long x_1_2_9; float x_1_2_10; unsigned long long x_1_2_11; id x_1_2_12; } x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; int x_1_1_4; int x_1_1_5; int x_1_1_6; unsigned long long x_1_1_7; unsigned long long x_1_1_8; union { struct { struct { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_9_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_9_2_2; } x_1_1_9; struct { /* ? */ } *x_1_1_10; struct { unsigned short x_11_2_1[2]; unsigned short x_11_2_2[2]; } x_1_1_11; unsigned char x_1_1_12; bool x_1_1_13; unsigned char x_1_1_14; bool x_1_1_15; bool x_1_1_16; unsigned char x_1_1_17; bool x_1_1_18; unsigned char x_1_1_19; struct _NSRange { unsigned long long x_20_2_1; unsigned long long x_20_2_2; } x_1_1_20; bool x_1_1_21; } x1; }*)arg1 section:(unsigned long long)arg2 outPointStyles:(struct vector<std::__1::pair<bool, GEOFeatureStylePair>, std::__1::allocator<std::__1::pair<bool, GEOFeatureStylePair> > > { struct pair<bool, GEOFeatureStylePair> {} *x1; struct pair<bool, GEOFeatureStylePair> {} *x2; struct __compressed_pair<std::__1::pair<bool, GEOFeatureStylePair> *, std::__1::allocator<std::__1::pair<bool, GEOFeatureStylePair> > > { struct pair<bool, GEOFeatureStylePair> {} *x_3_1_1; } x3; }*)arg3;
- (void)dealloc;
- (void)didFinishAddingData;
- (void)enclosePointsInBoundingBox:(struct Matrix<float, 2, 1> { float x1[2]; }*)arg1 count:(unsigned long long)arg2;
- (id)initWithStyleQuery:(struct shared_ptr<gss::StylesheetQuery<gss::PropertyID> > { struct StylesheetQuery<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; }*)arg1 tileZoom:(float)arg2 fixedAroundCentroid:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg3 contentScale:(float)arg4 sharedResources:(id)arg5;
- (unsigned char)initialStyleIndexForSection:(const struct PolygonSection { struct Matrix<float, 2, 1> {} *x1; struct Matrix<float, 2, 1> {} *x2; struct Matrix<float, 2, 1> {} *x3; bool *x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_8_1_1; unsigned int *x_8_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_8_1_3; } x8; float x9; }*)arg1 attributes:(id)arg2 styles:(const struct vector<std::__1::pair<bool, GEOFeatureStylePair>, std::__1::allocator<std::__1::pair<bool, GEOFeatureStylePair> > > { struct pair<bool, GEOFeatureStylePair> {} *x1; struct pair<bool, GEOFeatureStylePair> {} *x2; struct __compressed_pair<std::__1::pair<bool, GEOFeatureStylePair> *, std::__1::allocator<std::__1::pair<bool, GEOFeatureStylePair> > > { struct pair<bool, GEOFeatureStylePair> {} *x_3_1_1; } x3; }*)arg3;
- (void)prepareForPolygon:(struct { struct { struct { id x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned int x_1_2_6; unsigned long long x_1_2_7; bool x_1_2_8; unsigned long long x_1_2_9; float x_1_2_10; unsigned long long x_1_2_11; id x_1_2_12; } x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; int x_1_1_4; int x_1_1_5; int x_1_1_6; unsigned long long x_1_1_7; unsigned long long x_1_1_8; union { struct { struct { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_9_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_9_2_2; } x_1_1_9; struct { /* ? */ } *x_1_1_10; struct { unsigned short x_11_2_1[2]; unsigned short x_11_2_2[2]; } x_1_1_11; unsigned char x_1_1_12; bool x_1_1_13; unsigned char x_1_1_14; bool x_1_1_15; bool x_1_1_16; unsigned char x_1_1_17; bool x_1_1_18; unsigned char x_1_1_19; struct _NSRange { unsigned long long x_20_2_1; unsigned long long x_20_2_2; } x_1_1_20; bool x_1_1_21; } x1; }*)arg1 hasNonWaterStyle:(bool)arg2;
- (void)prepareToFillSection:(const struct PolygonSection { struct Matrix<float, 2, 1> {} *x1; struct Matrix<float, 2, 1> {} *x2; struct Matrix<float, 2, 1> {} *x3; bool *x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_8_1_1; unsigned int *x_8_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_8_1_3; } x8; float x9; }*)arg1;
- (void)prepareToStrokeSection:(const struct PolygonSection { struct Matrix<float, 2, 1> {} *x1; struct Matrix<float, 2, 1> {} *x2; struct Matrix<float, 2, 1> {} *x3; bool *x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_8_1_1; unsigned int *x_8_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_8_1_3; } x8; float x9; }*)arg1 key:(const struct pair<void *, unsigned long> { void *x1; unsigned long long x2; }*)arg2 styles:(struct vector<std::__1::pair<bool, GEOFeatureStylePair>, std::__1::allocator<std::__1::pair<bool, GEOFeatureStylePair> > > { struct pair<bool, GEOFeatureStylePair> {} *x1; struct pair<bool, GEOFeatureStylePair> {} *x2; struct __compressed_pair<std::__1::pair<bool, GEOFeatureStylePair> *, std::__1::allocator<std::__1::pair<bool, GEOFeatureStylePair> > > { struct pair<bool, GEOFeatureStylePair> {} *x_3_1_1; } x3; }*)arg3 paddedCount:(unsigned int)arg4;
- (void)setNeedsTextureUpdate;
- (struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; unsigned int x10; struct shared_ptr<const ggl::TextureDataAbstract> { struct TextureDataAbstract {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; bool x12; bool x13; unsigned int x14; unsigned int x15; bool x16; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; }*)sourceRoofTexture;
- (struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; unsigned int x10; struct shared_ptr<const ggl::TextureDataAbstract> { struct TextureDataAbstract {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; bool x12; bool x13; unsigned int x14; unsigned int x15; bool x16; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; }*)sourceTexture;
- (struct vector<std::__1::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>, std::__1::allocator<std::__1::shared_ptr<ggl::PolygonCommonStroke::MeshMesh> > > { struct shared_ptr<ggl::PolygonCommonStroke::MeshMesh> {} *x1; struct shared_ptr<ggl::PolygonCommonStroke::MeshMesh> {} *x2; struct __compressed_pair<std::__1::shared_ptr<ggl::PolygonCommonStroke::MeshMesh> *, std::__1::allocator<std::__1::shared_ptr<ggl::PolygonCommonStroke::MeshMesh> > > { struct shared_ptr<ggl::PolygonCommonStroke::MeshMesh> {} *x_3_1_1; } x3; }*)strokeMeshes;
- (struct FeatureAttributeSet { struct vector<gss::FeatureAttributePair, geo::StdAllocator<gss::FeatureAttributePair, gss::Allocator> > { struct FeatureAttributePair {} *x_1_1_1; struct FeatureAttributePair {} *x_1_1_2; struct __compressed_pair<gss::FeatureAttributePair *, geo::StdAllocator<gss::FeatureAttributePair, gss::Allocator> > { struct FeatureAttributePair {} *x_3_2_1; struct StdAllocator<gss::FeatureAttributePair, gss::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_1_1_3; } x1; })styleAttributes;
- (unsigned char)styleIndexForAttributes:(id)arg1 edgePair:(const struct { unsigned int x1; int x2; }*)arg2;
- (struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; unsigned int x10; struct shared_ptr<const ggl::TextureDataAbstract> { struct TextureDataAbstract {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; bool x12; bool x13; unsigned int x14; unsigned int x15; bool x16; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; }*)targetRoofTexture;
- (struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; unsigned int x10; struct shared_ptr<const ggl::TextureDataAbstract> { struct TextureDataAbstract {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; bool x12; bool x13; unsigned int x14; unsigned int x15; bool x16; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; }*)targetTexture;
- (void)updateTextures:(unsigned char)arg1;
- (void)updateTexturesIfNecessary:(float)arg1;
- (void)willAddDataWithAccessor:(struct ResourceAccessor { int (**x1)(); }*)arg1;

@end