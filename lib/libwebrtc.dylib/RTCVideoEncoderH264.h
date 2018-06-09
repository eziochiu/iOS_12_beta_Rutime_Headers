/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

@interface RTCVideoEncoderH264 : NSObject <RTCVideoEncoder> {
    struct unique_ptr<webrtc::BitrateAdjuster, std::__1::default_delete<webrtc::BitrateAdjuster> > { 
        struct __compressed_pair<webrtc::BitrateAdjuster *, std::__1::default_delete<webrtc::BitrateAdjuster> > { 
            struct BitrateAdjuster {} *__value_; 
        } __ptr_; 
    }  _bitrateAdjuster;
    id /* block */  _callback;
    RTCVideoCodecInfo * _codecInfo;
    struct OpaqueVTCompressionSession { } * _compressionSession;
    unsigned int  _encoderBitrateBps;
    struct vector<unsigned char, std::__1::allocator<unsigned char> > { 
        char *__begin_; 
        char *__end_; 
        struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { 
            char *__value_; 
        } __end_cap_; 
    }  _frameScaleBuffer;
    struct H264BitstreamParser { 
        int (**_vptr$H264BitstreamParser)(); 
        struct Optional<webrtc::SpsParser::SpsState> { 
            bool has_value_; 
            union { 
                BOOL empty_; 
                struct SpsState { 
                    unsigned int width; 
                    unsigned int height; 
                    unsigned int delta_pic_order_always_zero_flag; 
                    unsigned int separate_colour_plane_flag; 
                    unsigned int frame_mbs_only_flag; 
                    unsigned int log2_max_frame_num_minus4; 
                    unsigned int log2_max_pic_order_cnt_lsb_minus4; 
                    unsigned int pic_order_cnt_type; 
                    unsigned int max_num_ref_frames; 
                    unsigned int vui_params_present; 
                    unsigned int id; 
                } value_; 
            } ; 
        } sps_; 
        struct Optional<webrtc::PpsParser::PpsState> { 
            bool has_value_; 
            union { 
                BOOL empty_; 
                struct PpsState { 
                    bool bottom_field_pic_order_in_frame_present_flag; 
                    bool weighted_pred_flag; 
                    bool entropy_coding_mode_flag; 
                    unsigned int weighted_bipred_idc; 
                    unsigned int redundant_pic_cnt_present_flag; 
                    int pic_init_qp_minus26; 
                    unsigned int id; 
                    unsigned int sps_id; 
                } value_; 
            } ; 
        } pps_; 
        struct Optional<int> { 
            bool has_value_; 
            union { 
                BOOL empty_; 
                int value_; 
            } ; 
        } last_slice_qp_delta_; 
    }  _h264BitstreamParser;
    int  _height;
    unsigned long long  _mode;
    unsigned long long  _packetizationMode;
    struct __CFString { } * _profile;
    unsigned int  _targetBitrateBps;
    int  _width;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)configureCompressionSession;
- (void)dealloc;
- (void)destroyCompressionSession;
- (long long)encode:(id)arg1 codecSpecificInfo:(id)arg2 frameTypes:(id)arg3;
- (void)frameWasEncoded:(int)arg1 flags:(unsigned int)arg2 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 codecSpecificInfo:(id)arg4 width:(int)arg5 height:(int)arg6 renderTimeMs:(long long)arg7 timestamp:(unsigned int)arg8 rotation:(long long)arg9;
- (id)implementationName;
- (id)initWithCodecInfo:(id)arg1;
- (long long)releaseEncoder;
- (bool)resetCompressionSessionIfNeededForPool:(struct __CVPixelBufferPool { }*)arg1 withFrame:(id)arg2;
- (int)resetCompressionSessionWithPixelFormat:(unsigned int)arg1;
- (id)scalingSettings;
- (int)setBitrate:(unsigned int)arg1 framerate:(unsigned int)arg2;
- (void)setBitrateBps:(unsigned int)arg1;
- (void)setCallback:(id /* block */)arg1;
- (void)setEncoderBitrateBps:(unsigned int)arg1;
- (long long)startEncodeWithSettings:(id)arg1 numberOfCores:(int)arg2;

@end
