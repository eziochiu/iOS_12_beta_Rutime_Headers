/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVFrameSet : NSObject {
    PVImageBuffer * _alphaMaskImageBuffer;
    PVCMSampleBuffer * _colorSampleBuffer;
    AVDepthData * _depthData;
    struct unique_ptr<PVGCDReadWriteLock, std::__1::default_delete<PVGCDReadWriteLock> > { 
        struct __compressed_pair<PVGCDReadWriteLock *, std::__1::default_delete<PVGCDReadWriteLock> > { 
            struct PVGCDReadWriteLock {} *__value_; 
        } __ptr_; 
    }  _mdLock;
    struct NSMutableDictionary { Class x1; } * _metadata;
}

@property (retain) PVImageBuffer *alphaMaskImageBuffer;
@property (nonatomic, readonly) PVImageBuffer *colorImageBuffer;
@property (nonatomic, readonly) PVCMSampleBuffer *colorSampleBuffer;
@property (nonatomic, readonly) AVDepthData *depthData;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } presentationTimeStamp;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)alphaMaskImageBuffer;
- (id)colorImageBuffer;
- (id)colorSampleBuffer;
- (void)commonInitWithColorBuffer:(id)arg1 depthData:(id)arg2 metadata:(id)arg3;
- (id)depthData;
- (id)initWithColorBuffer:(id)arg1 depthData:(id)arg2 metadata:(id)arg3;
- (id)initWithColorBuffer:(id)arg1 metadata:(id)arg2;
- (struct NSDictionary { Class x1; }*)metadataDict;
- (id)metadataObjectForKey:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })presentationTimeStamp;
- (void)setAlphaMaskImageBuffer:(id)arg1;
- (void)setMetadataDict:(struct NSDictionary { Class x1; }*)arg1;
- (void)setMetadataObject:(id)arg1 forKey:(id)arg2;

@end
