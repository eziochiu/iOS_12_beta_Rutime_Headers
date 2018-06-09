/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVLivePlayer : NSObject {
    unsigned int  _activeRenderLinkJobCount;
    bool  _bypassRenderLink;
    unsigned int  _frameCount;
    double  _lastCompletedHostTime;
    struct unique_ptr<PVGCDLock, std::__1::default_delete<PVGCDLock> > { 
        struct __compressed_pair<PVGCDLock *, std::__1::default_delete<PVGCDLock> > { 
            struct PVGCDLock {} *__value_; 
        } __ptr_; 
    }  _lock;
    bool  _lowerGCDPriority;
    bool  _lowerGPUPriority;
    NSString * _name;
    unsigned int  _parentCode;
    struct unique_ptr<PVPerfStats, std::__1::default_delete<PVPerfStats> > { 
        struct __compressed_pair<PVPerfStats *, std::__1::default_delete<PVPerfStats> > { 
            struct PVPerfStats {} *__value_; 
        } __ptr_; 
    }  _perfStats;
    struct unique_ptr<PVGCDLock, std::__1::default_delete<PVGCDLock> > { 
        struct __compressed_pair<PVGCDLock *, std::__1::default_delete<PVGCDLock> > { 
            struct PVGCDLock {} *__value_; 
        } __ptr_; 
    }  _perfStatsLock;
    struct HGRef<HGRenderQueue> { 
        struct HGRenderQueue {} *m_Obj; 
    }  _playerQueue;
    unsigned int  _playerQueueUnitCount;
    int  _playerStatus;
    PVLivePlayer * _primaryPlayer;
    unsigned int  _queueSize;
    PVLivePlayerRenderLink * _renderLink;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _renderTime;
    PVRenderer * _renderer;
    struct map<unsigned int, id<PVLivePlayerSource>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, id<PVLivePlayerSource> > > > { 
        struct __tree<std::__1::__value_type<unsigned int, id<PVLivePlayerSource> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, id<PVLivePlayerSource> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, id<PVLivePlayerSource> > > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, id<PVLivePlayerSource> >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, id<PVLivePlayerSource> >, std::__1::less<unsigned int>, true> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _sourceMap;
    struct unique_ptr<PerfTimer, std::__1::default_delete<PerfTimer> > { 
        struct __compressed_pair<PerfTimer *, std::__1::default_delete<PerfTimer> > { 
            struct PerfTimer {} *__value_; 
        } __ptr_; 
    }  _statLogTimer;
    PVLivePlayerThermalThrottlingPolicy * _thermalThrottlingPolicy;
    PVTaskTokenPool * _tokenPool;
    bool  _trackStats;
    <PVLivePlayerDelegate> * _weakDelegate;
}

@property (nonatomic) bool bypassRenderLink;
@property (nonatomic) bool lowerGCDPriority;
@property (nonatomic) bool lowerGPUPriority;
@property (nonatomic) unsigned int queueSize;
@property (nonatomic, retain) PVLivePlayerRenderLink *renderLink;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } renderTime;
@property (nonatomic, readonly) int status;
@property (nonatomic, retain) PVLivePlayerThermalThrottlingPolicy *thermalThrottlingPolicy;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_dropFrameForFullQueue;
- (bool)_dropFrameForSaturatedPrimaryPlayer;
- (void)_renderLinkSignal:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_statsLogCheck;
- (unsigned int)_throttledQueueSize_NoLock;
- (void)addStats:(struct FrameStats { unsigned int x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; double x3; double x4; double x5; bool x6; bool x7; unsigned int x8; struct vector<double, std::__1::allocator<double> > { double *x_9_1_1; double *x_9_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_9_1_3; } x9; }*)arg1;
- (bool)bypassRenderLink;
- (void)bypassRenderLink:(struct HGRef<PVRenderLinkJob> { struct PVRenderLinkJob {} *x1; })arg1;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })getIncrementedRenderTime;
- (unsigned long long)getPackedFamilyCode:(unsigned int)arg1;
- (id)getTaskToken;
- (void)handleRenderLinkJob:(struct HGRef<PVRenderLinkJob> { struct PVRenderLinkJob {} *x1; })arg1;
- (id)initWithOptions:(id)arg1 delegate:(id)arg2;
- (bool)lowerGCDPriority;
- (bool)lowerGPUPriority;
- (id)playerSources;
- (void)printAndClearStats:(bool)arg1;
- (unsigned int)queueSize;
- (id)renderLink;
- (void)renderLinkJobFinished:(struct HGRef<PVRenderLinkJob> { struct PVRenderLinkJob {} *x1; })arg1;
- (void)renderLinkSignal;
- (void)renderLinkSignalSkipped;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })renderTime;
- (void)resetRenderTime;
- (void)setBypassRenderLink:(bool)arg1;
- (void)setLowerGCDPriority:(bool)arg1;
- (void)setLowerGPUPriority:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setParentCode:(unsigned int)arg1;
- (void)setPrimaryPlayer:(id)arg1;
- (void)setQueueSize:(unsigned int)arg1;
- (void)setRenderLink:(id)arg1;
- (void)setSource:(id)arg1 inputID:(unsigned int)arg2;
- (void)setStatus:(int)arg1;
- (void)setThermalThrottlingPolicy:(id)arg1;
- (void)shutdown;
- (void)start;
- (int)status;
- (void)stop;
- (bool)testOutOfOrderCompletion:(struct HGRef<PVRenderLinkJob> { struct PVRenderLinkJob {} *x1; })arg1;
- (id)thermalThrottlingPolicy;
- (bool)throttledBypassRenderLink;
- (void)trackStats:(bool)arg1;
- (void)updateRenderQueueUnits;

@end
