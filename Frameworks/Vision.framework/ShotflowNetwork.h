/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface ShotflowNetwork : NSObject {
    unsigned long long  _currentNetworkHeight;
    unsigned long long  _currentNetworkWidth;
    float  _defaultBoxSizes;
    void * _espressoContext;
    struct { 
        void *plan; 
        int network_index; 
    }  _espressoNetwork;
    void * _espressoPlan;
    struct vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > > { 
        struct shared_ptr<espresso_buffer_t> {} *__begin_; 
        struct shared_ptr<espresso_buffer_t> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<espresso_buffer_t> *, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > > { 
            struct shared_ptr<espresso_buffer_t> {} *__value_; 
        } __end_cap_; 
    }  _logitsOutputs;
    struct vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > > { 
        struct shared_ptr<espresso_buffer_t> {} *__begin_; 
        struct shared_ptr<espresso_buffer_t> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<espresso_buffer_t> *, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > > { 
            struct shared_ptr<espresso_buffer_t> {} *__value_; 
        } __end_cap_; 
    }  _offsetsOutputs;
    struct vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > > { 
        struct shared_ptr<espresso_buffer_t> {} *__begin_; 
        struct shared_ptr<espresso_buffer_t> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<espresso_buffer_t> *, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > > { 
            struct shared_ptr<espresso_buffer_t> {} *__value_; 
        } __end_cap_; 
    }  _rollOutputs;
    float  _threshold;
    struct vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > > { 
        struct shared_ptr<espresso_buffer_t> {} *__begin_; 
        struct shared_ptr<espresso_buffer_t> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<espresso_buffer_t> *, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > > { 
            struct shared_ptr<espresso_buffer_t> {} *__value_; 
        } __end_cap_; 
    }  _yawOutputs;
}

@property (nonatomic, readonly) unsigned long long preferredSmallSide;
@property (nonatomic) float threshold;

+ (id)processingDeviceNetworkWithModelPath:(id)arg1 threshold:(float)arg2 preferredDeviceID:(int)arg3 engineID:(int)arg4 storageType:(int)arg5;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 espressoStorageType:(int)arg4 threshold:(float)arg5;
- (unsigned long long)preferredSmallSide;
- (id)processCIImage:(id)arg1;
- (id)processVImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 inputIsBGR:(bool)arg2;
- (id)resizeAndProcessVImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 inputIsBGR:(bool)arg2;
- (void)runNetwork:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 inputIsBGR:(bool)arg2;
- (int)setInputShape:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)setThreshold:(float)arg1;
- (float)threshold;

@end
