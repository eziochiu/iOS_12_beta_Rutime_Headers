/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARODTHandleManager : NSObject {
    unsigned long long  _odtCounter;
    struct CV3DODTContext { } * _odtHandle;
    NSObject<OS_dispatch_semaphore> * _odtHandleSemaphore;
    NSDictionary * _options;
    struct shared_ptr<arkit::KeyMapBuffer<unsigned long long, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > > > { 
        struct KeyMapBuffer<unsigned long long, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > > {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _poseBuffer;
}

@property (nonatomic, readonly) bool continuousDetection;
@property (nonatomic, readonly) bool deterministicMode;
@property (nonatomic, readonly) long long maximumNumberOfTrackedImages;

+ (long long)actualNumberOfImagesTracked:(long long)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)addReferenceImage:(id)arg1 tracking:(bool)arg2 pObjectID:(unsigned long long*)arg3;
- (bool)continuousDetection;
- (void)dealloc;
- (bool)deterministicMode;
- (id)init;
- (id)initWithMaximumNumberOfTrackedImages:(long long)arg1;
- (id)initWithMaximumNumberOfTrackedImages:(long long)arg1 continuousDetection:(bool)arg2 deterministicMode:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (long long)maximumNumberOfTrackedImages;
- (void)releaseODTHandle;
- (int)trackPlanarObjectForImageData:(id)arg1 worldPoseData:(id)arg2 timeBudget:(double)arg3 pResultArray:(id*)arg4;

@end
