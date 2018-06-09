/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVRenderRequestJobDelegate : NSObject <PVRenderJobDelegate> {
    id /* block */  m_completionHandler;
    struct vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > > { struct HGRef<HGBitmap> {} *x1; struct HGRef<HGBitmap> {} *x2; struct __compressed_pair<HGRef<HGBitmap> *, std::__1::allocator<HGRef<HGBitmap> > > { struct HGRef<HGBitmap> {} *x_3_1_1; } x3; } * m_destinationBitmaps;
    PVRenderer * m_pvRenderer;
    struct HGRef<PVRenderManager> { 
        struct PVRenderManager {} *m_Obj; 
    }  m_renderManager;
    PVRenderRequest * m_request;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned int jobTypeTag;
@property (readonly) Class superclass;
@property (readonly) PVVideoCompositingContext *videoCompositingContext;

+ (unsigned int)jobTypeTag;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)buildGraph:(struct vector<HGRef<HGNode>, std::__1::allocator<HGRef<HGNode> > > { struct HGRef<HGNode> {} *x1; struct HGRef<HGNode> {} *x2; struct __compressed_pair<HGRef<HGNode> *, std::__1::allocator<HGRef<HGNode> > > { struct HGRef<HGNode> {} *x_3_1_1; } x3; }*)arg1 renderContext:(const struct HGRenderContext { int (**x1)(); unsigned int x2; int x3; int x4; int x5; struct HGRenderer {} *x6; struct HGRenderQueue {} *x7; bool x8; int x9; unsigned long long x10; int x11; int x12; bool x13; bool x14; unsigned long long x15; unsigned long long x16; struct HGSynchronizable {} *x17; struct HGSynchronizer {} *x18; struct vector<double, std::__1::allocator<double> > { double *x_19_1_1; double *x_19_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_19_1_3; } x19; }*)arg2 frameStats:(struct FrameStats { unsigned int x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; double x3; double x4; double x5; bool x6; bool x7; unsigned int x8; struct vector<double, std::__1::allocator<double> > { double *x_9_1_1; double *x_9_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_9_1_3; } x9; }*)arg3;
- (void)dealloc;
- (void)finishCancelledJob;
- (void)finishCompletedJob;
- (int)graphBuildThreadPriority;
- (id)initWithRequest:(id)arg1 completionHandler:(id /* block */)arg2 pvRenderer:(id)arg3;
- (int)jobPriority;
- (unsigned int)jobTypeTag;
- (unsigned long long)packedFamilyCode;
- (int)renderContextPriority;
- (void)renderJobFinished:(struct HGRef<PVRenderJob> { struct PVRenderJob {} *x1; })arg1;
- (int)renderThreadPriority;
- (void)setupDestinationBuffers:(struct vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > > { struct HGRef<HGBitmap> {} *x1; struct HGRef<HGBitmap> {} *x2; struct __compressed_pair<HGRef<HGBitmap> *, std::__1::allocator<HGRef<HGBitmap> > > { struct HGRef<HGBitmap> {} *x_3_1_1; } x3; }*)arg1 renderContext:(const struct HGRenderContext { int (**x1)(); unsigned int x2; int x3; int x4; int x5; struct HGRenderer {} *x6; struct HGRenderQueue {} *x7; bool x8; int x9; unsigned long long x10; int x11; int x12; bool x13; bool x14; unsigned long long x15; unsigned long long x16; struct HGSynchronizable {} *x17; struct HGSynchronizer {} *x18; struct vector<double, std::__1::allocator<double> > { double *x_19_1_1; double *x_19_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_19_1_3; } x19; }*)arg2 frameStats:(struct FrameStats { unsigned int x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; double x3; double x4; double x5; bool x6; bool x7; unsigned int x8; struct vector<double, std::__1::allocator<double> > { double *x_9_1_1; double *x_9_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_9_1_3; } x9; }*)arg3;
- (id)videoCompositingContext;

@end
