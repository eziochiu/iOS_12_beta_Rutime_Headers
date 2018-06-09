/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVRendererBase : NSObject {
    PVVideoCompositingContext * _compositingContext;
    struct atomic<unsigned int> { 
        unsigned int __a_; 
    }  _frameCount;
    struct vector<HGRef<PVRenderJob>, std::__1::allocator<HGRef<PVRenderJob> > > { 
        struct HGRef<PVRenderJob> {} *__begin_; 
        struct HGRef<PVRenderJob> {} *__end_; 
        struct __compressed_pair<HGRef<PVRenderJob> *, std::__1::allocator<HGRef<PVRenderJob> > > { 
            struct HGRef<PVRenderJob> {} *__value_; 
        } __end_cap_; 
    }  _inFlightRenderJobs;
    NSLock * _inFlightRenderJobsLock;
    NSString * _name;
    struct PVPerfStats { double x1; int x2; struct OnceStats { double x_3_1_1; double x_3_1_2; } x3; struct vector<PVPerfStats::FrameStats, std::__1::allocator<PVPerfStats::FrameStats> > { struct FrameStats {} *x_4_1_1; struct FrameStats {} *x_4_1_2; struct __compressed_pair<PVPerfStats::FrameStats *, std::__1::allocator<PVPerfStats::FrameStats> > { struct FrameStats {} *x_3_2_1; } x_4_1_3; } x4; bool x5; struct FrameStats { unsigned int x_6_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_6_1_2; double x_6_1_3; double x_6_1_4; double x_6_1_5; bool x_6_1_6; bool x_6_1_7; unsigned int x_6_1_8; struct vector<double, std::__1::allocator<double> > { double *x_9_2_1; double *x_9_2_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_3_1; } x_9_2_3; } x_6_1_9; } x6; struct FrameStats { unsigned int x_7_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_7_1_2; double x_7_1_3; double x_7_1_4; double x_7_1_5; bool x_7_1_6; bool x_7_1_7; unsigned int x_7_1_8; struct vector<double, std::__1::allocator<double> > { double *x_9_2_1; double *x_9_2_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_3_1; } x_9_2_3; } x_7_1_9; } x7; } * _perfStats;
    struct HGSynchronizable { int (**x1)(); struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct _opaque_pthread_t {} *x3; unsigned long long x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; } * _perfStatsLock;
    bool  _trackStats;
}

@property (nonatomic, retain) PVVideoCompositingContext *compositingContext;
@property (nonatomic, retain) NSString *name;

+ (id)getEAGLShareGroup;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addFrameStats:(struct FrameStats { unsigned int x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; double x3; double x4; double x5; bool x6; bool x7; unsigned int x8; struct vector<double, std::__1::allocator<double> > { double *x_9_1_1; double *x_9_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_9_1_3; } x9; }*)arg1;
- (void)addRenderJobInFlight:(struct HGRef<PVRenderJob> { struct PVRenderJob {} *x1; })arg1;
- (void)cancelAllPendingRequests;
- (void)cleanupMemoryCaches;
- (id)compositingContext;
- (void)dealloc;
- (void)didRecieveMemoryWarning:(id)arg1;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (id)name;
- (struct FrameStats { unsigned int x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; double x3; double x4; double x5; bool x6; bool x7; unsigned int x8; struct vector<double, std::__1::allocator<double> > { double *x_9_1_1; double *x_9_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_9_1_3; } x9; })newFrameStats;
- (void)printAndClearStats:(bool)arg1;
- (void)renderJobFinished:(struct HGRef<PVRenderJob> { struct PVRenderJob {} *x1; })arg1;
- (void)setCompositingContext:(id)arg1;
- (void)setName:(id)arg1;
- (struct HGRef<PVRenderJob> { struct PVRenderJob {} *x1; })startJobForDelegate:(id)arg1 frameStats:(struct FrameStats { unsigned int x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; double x3; double x4; double x5; bool x6; bool x7; unsigned int x8; struct vector<double, std::__1::allocator<double> > { double *x_9_1_1; double *x_9_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_9_1_3; } x9; })arg2;
- (void)trackStats:(bool)arg1;

@end
