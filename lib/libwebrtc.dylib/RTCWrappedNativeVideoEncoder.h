/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

@interface RTCWrappedNativeVideoEncoder : NSObject <RTCVideoEncoder> {
    struct unique_ptr<webrtc::VideoEncoder, std::__1::default_delete<webrtc::VideoEncoder> > { 
        struct __compressed_pair<webrtc::VideoEncoder *, std::__1::default_delete<webrtc::VideoEncoder> > { 
            struct VideoEncoder {} *__value_; 
        } __ptr_; 
    }  _wrappedEncoder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)encode:(id)arg1 codecSpecificInfo:(id)arg2 frameTypes:(id)arg3;
- (id)implementationName;
- (id)initWithNativeEncoder:(struct unique_ptr<webrtc::VideoEncoder, std::__1::default_delete<webrtc::VideoEncoder> > { struct __compressed_pair<webrtc::VideoEncoder *, std::__1::default_delete<webrtc::VideoEncoder> > { struct VideoEncoder {} *x_1_1_1; } x1; })arg1;
- (long long)releaseEncoder;
- (struct unique_ptr<webrtc::VideoEncoder, std::__1::default_delete<webrtc::VideoEncoder> > { struct __compressed_pair<webrtc::VideoEncoder *, std::__1::default_delete<webrtc::VideoEncoder> > { struct VideoEncoder {} *x_1_1_1; } x1; })releaseWrappedEncoder;
- (id)scalingSettings;
- (int)setBitrate:(unsigned int)arg1 framerate:(unsigned int)arg2;
- (void)setCallback:(id /* block */)arg1;
- (long long)startEncodeWithSettings:(id)arg1 numberOfCores:(int)arg2;

@end
