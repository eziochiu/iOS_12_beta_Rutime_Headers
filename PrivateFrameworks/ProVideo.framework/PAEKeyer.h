/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PAEKeyer : PAEFilterDefaultBase {
    struct PCMutex { 
        int (**_vptr$PCMutex)(); 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } _Mutex; 
    }  _cacheMutex;
    bool  _isMotion;
    struct HGBitmapLoader { int (**x1)(); unsigned int x2; int x3; int x4; void *x5; int x6; int x7; float *x8; int x9; struct HGShaderEntry {} *x10; struct HGNodeInput {} **x11; int x12; struct HGBitmap {} *x13; bool x14; bool x15; bool x16; struct set<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *> > { struct __tree<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<HGNodeInput *, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::less<HGNodeInput *> > { unsigned long long x_3_3_1; } x_1_2_3; } x_17_1_1; } x17; int x18; struct HGNode {} *x19; struct HGRect { int x_20_1_1; int x_20_1_2; int x_20_1_3; int x_20_1_4; } x20; struct HGRect { int x_21_1_1; int x_21_1_2; int x_21_1_3; int x_21_1_4; } x21; } * _lutsBitmapLoaderCache;
    PAEKeyerMatteTools * _matteTools;
    struct OMSamples { int (**x1)(); bool x2; bool x3; bool x4; bool x5; int x6; struct vector<OMSamplesElem *, std::__1::allocator<OMSamplesElem *> > {} *x7; struct vector<Vec3f, std::__1::allocator<Vec3f> > { struct Vec3f {} *x_8_1_1; struct Vec3f {} *x_8_1_2; struct __compressed_pair<Vec3f *, std::__1::allocator<Vec3f> > { struct Vec3f {} *x_3_2_1; } x_8_1_3; } x8; struct vector<Vec3f, std::__1::allocator<Vec3f> > { struct Vec3f {} *x_9_1_1; struct Vec3f {} *x_9_1_2; struct __compressed_pair<Vec3f *, std::__1::allocator<Vec3f> > { struct Vec3f {} *x_3_2_1; } x_9_1_3; } x9; struct vector<Vec3f, std::__1::allocator<Vec3f> > { struct Vec3f {} *x_10_1_1; struct Vec3f {} *x_10_1_2; struct __compressed_pair<Vec3f *, std::__1::allocator<Vec3f> > { struct Vec3f {} *x_3_2_1; } x_10_1_3; } x10; struct vector<std::__1::vector<Vec3f, std::__1::allocator<Vec3f> >, std::__1::allocator<std::__1::vector<Vec3f, std::__1::allocator<Vec3f> > > > { struct vector<Vec3f, std::__1::allocator<Vec3f> > {} *x_11_1_1; struct vector<Vec3f, std::__1::allocator<Vec3f> > {} *x_11_1_2; struct __compressed_pair<std::__1::vector<Vec3f, std::__1::allocator<Vec3f> > *, std::__1::allocator<std::__1::vector<Vec3f, std::__1::allocator<Vec3f> > > > { struct vector<Vec3f, std::__1::allocator<Vec3f> > {} *x_3_2_1; } x_11_1_3; } x11; } * _omSamples;
    PAEKeyerPreprocess * _preprocessTools;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _prevRationalTime;
    union { 
        double frame; 
        struct { /* ? */ } *seconds; 
    }  _prevRectanglesFrame;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addParameters;
- (id)apiManager;
- (double)autokeyAmountToHistoPercent:(double)arg1;
- (bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg3;
- (void)clearKey;
- (void)computeModel:(bool)arg1 atTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (void)dealloc;
- (bool)frameSetup:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 inputInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg2 hardware:(bool*)arg3 software:(bool*)arg4;
- (id)getBlendOptionsAtTime:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (int)getColorPrimaries;
- (void)getInputWidth:(float*)arg1 height:(float*)arg2 renderInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg3;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })getKeyerNode:(struct HGRef<HGNode> { struct HGNode {} *x1; })arg1 omKeyer:(struct PAEKeyerOMKeyer2D { int (**x1)(); float x2; float x3; struct pair<Vec2f, Vec2f> { struct Vec2f { float x_1_2_1[2]; } x_4_1_1; struct Vec2f { float x_2_2_1[2]; } x_4_1_2; } x4; struct pair<Vec2f, Vec2f> { struct Vec2f { float x_1_2_1[2]; } x_5_1_1; struct Vec2f { float x_2_2_1[2]; } x_5_1_2; } x5; float x6; float x7; struct Vec2f { float x_8_1_1[2]; } x8; float *x9; struct vector<float, std::__1::allocator<float> > { float *x_10_1_1; float *x_10_1_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_2_1; } x_10_1_3; } x10; struct OMUtilErf { struct vector<float, std::__1::allocator<float> > { float *x_1_2_1; float *x_1_2_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_3_1; } x_1_2_3; } x_11_1_1; } x11; struct OMUtilErf { struct vector<float, std::__1::allocator<float> > { float *x_1_2_1; float *x_1_2_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_3_1; } x_1_2_3; } x_12_1_1; } x12; struct Mat4f { struct Vec4f { float x_1_2_1[4]; } x_13_1_1[4]; } x13; }*)arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (id)initWithAPIManager:(id)arg1;
- (bool)isLumaKey;
- (bool)isSimpleKey;
- (id)properties;
- (bool)pullInitialKey:(id*)arg1;
- (bool)sampleEdge:(struct OMSamplesElem { int (**x1)(); int x2; bool x3; int x4; struct vector<Vec2f, std::__1::allocator<Vec2f> > { struct Vec2f {} *x_5_1_1; struct Vec2f {} *x_5_1_2; struct __compressed_pair<Vec2f *, std::__1::allocator<Vec2f> > { struct Vec2f {} *x_3_2_1; } x_5_1_3; } x5; struct vector<Vec3f, std::__1::allocator<Vec3f> > { struct Vec3f {} *x_6_1_1; struct Vec3f {} *x_6_1_2; struct __compressed_pair<Vec3f *, std::__1::allocator<Vec3f> > { struct Vec3f {} *x_3_2_1; } x_6_1_3; } x6; bool x7; }*)arg1 renderInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; }*)arg2 width:(float)arg3 height:(float)arg4;
- (bool)sampleRect:(struct OMSamplesElem { int (**x1)(); int x2; bool x3; int x4; struct vector<Vec2f, std::__1::allocator<Vec2f> > { struct Vec2f {} *x_5_1_1; struct Vec2f {} *x_5_1_2; struct __compressed_pair<Vec2f *, std::__1::allocator<Vec2f> > { struct Vec2f {} *x_3_2_1; } x_5_1_3; } x5; struct vector<Vec3f, std::__1::allocator<Vec3f> > { struct Vec3f {} *x_6_1_1; struct Vec3f {} *x_6_1_2; struct __compressed_pair<Vec3f *, std::__1::allocator<Vec3f> > { struct Vec3f {} *x_3_2_1; } x_6_1_3; } x6; bool x7; }*)arg1 renderInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; }*)arg2 width:(float)arg3 height:(float)arg4;
- (void)setInitialSamples:(struct OMSamplesElem { int (**x1)(); int x2; bool x3; int x4; struct vector<Vec2f, std::__1::allocator<Vec2f> > { struct Vec2f {} *x_5_1_1; struct Vec2f {} *x_5_1_2; struct __compressed_pair<Vec2f *, std::__1::allocator<Vec2f> > { struct Vec2f {} *x_3_2_1; } x_5_1_3; } x5; struct vector<Vec3f, std::__1::allocator<Vec3f> > { struct Vec3f {} *x_6_1_1; struct Vec3f {} *x_6_1_2; struct __compressed_pair<Vec3f *, std::__1::allocator<Vec3f> > { struct Vec3f {} *x_3_2_1; } x_6_1_3; } x6; bool x7; }*)arg1;
- (bool)use32x32Histogram;

@end
