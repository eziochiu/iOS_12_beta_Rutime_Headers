/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPFullVideoAnalyzer : VCPVideoAnalyzer {
    float  _actionScore;
    struct EncodeAnalysis { int x1; int x2; char *x3; struct __CVBuffer {} *x4; struct Translation { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5; long long *x6; long long *x7; int *x8; int *x9; int *x10; struct Translation {} *x11; struct FrameBuffer {} *x12; struct EncodeStats {} *x13; float x14; float x15; struct MotionFieldAnalysis { struct EncodeStats {} *x_16_1_1; float *x_16_1_2; float *x_16_1_3; char *x_16_1_4; int x_16_1_5; int x_16_1_6; int x_16_1_7; int x_16_1_8; float x_16_1_9; float x_16_1_10; float x_16_1_11; bool x_16_1_12; int *x_16_1_13[2]; float *x_16_1_14[2]; short *x_16_1_15[2]; int x_16_1_16[2]; int *x_16_1_17[2]; float *x_16_1_18[2]; float *x_16_1_19[2]; struct ObjectDetection { struct Vector<ma::Object *> { struct __CFArray {} *x_1_3_1; } x_20_2_1; struct MotionVector {} *x_20_2_2; float *x_20_2_3; int *x_20_2_4; int *x_20_2_5; int *x_20_2_6; int x_20_2_7; int x_20_2_8; bool x_20_2_9; } x_16_1_20; struct ObjectTracking { struct Object { int x_1_3_1; struct CGRect { struct CGPoint { double x_1_5_1; double x_1_5_2; } x_2_4_1; struct CGSize { double x_2_5_1; double x_2_5_2; } x_2_4_2; } x_1_3_2; struct CGPoint { double x_3_4_1; double x_3_4_2; } x_1_3_3; struct CGPoint { double x_4_4_1; double x_4_4_2; } x_1_3_4; bool x_1_3_5; float x_1_3_6; float x_1_3_7; float x_1_3_8; float x_1_3_9; bool x_1_3_10; } x_21_2_1; struct Object { int x_2_3_1; struct CGRect { struct CGPoint { double x_1_5_1; double x_1_5_2; } x_2_4_1; struct CGSize { double x_2_5_1; double x_2_5_2; } x_2_4_2; } x_2_3_2; struct CGPoint { double x_3_4_1; double x_3_4_2; } x_2_3_3; struct CGPoint { double x_4_4_1; double x_4_4_2; } x_2_3_4; bool x_2_3_5; float x_2_3_6; float x_2_3_7; float x_2_3_8; float x_2_3_9; bool x_2_3_10; } x_21_2_2; bool x_21_2_3; int x_21_2_4; int x_21_2_5; float *x_21_2_6; float *x_21_2_7; float *x_21_2_8; float *x_21_2_9; float *x_21_2_10; float *x_21_2_11; float *x_21_2_12; long long x_21_2_13; long long x_21_2_14; float *x_21_2_15; int x_21_2_16; } x_16_1_21; } x16; } * _encodeAnalysis;
    bool  _finalized;
    struct FrameBuffer { 
        int frame_count_; 
        struct Frame { 
            int frame_idx_; 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } timestamp_; 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } duration_; 
            struct Translation { 
                float x_; 
                float y_; 
                float z_; 
            } ave_motion_; 
            struct Translation { 
                float x_; 
                float y_; 
                float z_; 
            } org_motion_; 
            float quality_score_; 
            unsigned long long distortion_; 
            float distortion_norm_; 
            struct Translation { 
                float x_; 
                float y_; 
                float z_; 
            } motion_change_; 
            unsigned int compressed_bytes_; 
            bool blur_; 
            struct Translation { 
                float x_; 
                float y_; 
                float z_; 
            } acc_var_; 
            float texture_; 
            struct MotionResult { 
                float significant_values_[6]; 
                float confidence_[6]; 
                float fine_action_score_; 
                float action_score_; 
                float track_score_; 
                float rotation_angle_; 
                int action_blocks_; 
                float action_motion_; 
                bool valid_mb_; 
                bool valid_submb_; 
                int support_size_; 
                float residual_var_; 
                float gmv_[2]; 
                struct { 
                    long long value; 
                    int timescale; 
                    unsigned int flags; 
                    long long epoch; 
                } duration_; 
                float scene_delta_; 
                float scene_delta_ratio_; 
                struct Vector<ma::Object *> { 
                    struct __CFArray {} *vector_; 
                } objects_; 
                struct Vector<ma::Object *> { 
                    struct __CFArray {} *vector_; 
                } detect_objects_; 
            } motion_result_; 
            float interestingness_; 
            float obstruction_; 
            float colorfulness_score_; 
            struct Histogram { 
                float extremities_; 
                float overexposes_; 
                int *histogram_[3]; 
                int *moments_hist_[2]; 
            } histogram_; 
        } buffer_[35]; 
    }  _frameBuffer;
    bool  _hasInterestingScene;
    struct Histogram { 
        float extremities_; 
        float overexposes_; 
        int *histogram_[3]; 
        int *moments_hist_[2]; 
    }  _idealHistogram;
    struct IrisAnalysis { float x1; float x2; int x3; int x4; bool x5; struct __CFArray {} *x6; } * _irisAnalysis;
    bool  _isCaptureAnalysis;
    bool  _isIris;
    bool  _isSlowMo;
    bool  _isTimelapse;
    struct MetaDataAnalysis { bool x1; struct FrameBuffer {} *x2; struct Translation { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; struct Translation { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; } * _metadataAnalysis;
    struct MotionFilter { struct FrameBuffer {} *x1; bool x2; } * _motionFilter;
    struct ObstructionAnalysis { struct Vector<ma::ObstructionSegment *> { struct __CFArray {} *x_1_1_1; } x1; struct ObstructionSegment {} *x2; struct __CFArray {} *x3; struct { long long x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; long long x_4_1_4; } x4; bool x5; } * _obstructionAnalysis;
    int  _orientation;
    struct PreEncodeAnalysis { bool x1; bool x2; struct __CFData {} *x3; struct __CFArray {} *x4; bool x5; struct Vector<unsigned int> { struct __CFArray {} *x_6_1_1; } x6; struct Vector<unsigned short> { struct __CFArray {} *x_7_1_1; } x7; struct Vector<float> { struct __CFArray {} *x_8_1_1; } x8; struct Vector<float> { struct __CFArray {} *x_9_1_1; } x9; struct { long long x_10_1_1; int x_10_1_2; unsigned int x_10_1_3; long long x_10_1_4; } x10; int x11; unsigned long long x12; unsigned long long x13; struct EncodeParameters { int x_14_1_1; int x_14_1_2; unsigned int x_14_1_3; unsigned int x_14_1_4; unsigned int x_14_1_5; unsigned short x_14_1_6; unsigned short x_14_1_7; } x14; float x15; float x16; float x17; float x18; struct { long long x_19_1_1; int x_19_1_2; unsigned int x_19_1_3; long long x_19_1_4; } x19; double x20; unsigned int x21; } * _preencodeAnalysis;
    NSMutableDictionary * _privateResults;
    struct SceneAnalysis { struct Vector<ma::SceneSegment *> { struct __CFArray {} *x_1_1_1; } x1; struct SceneSegment {} *x2; struct __CFArray {} *x3; struct { long long x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; long long x_4_1_4; } x4; bool x5; float x6; bool x7; bool x8; bool x9; bool x10; bool x11; int x12; int x13; int x14; struct CameraMotionAnalysis { struct Vector<ma::CameraMotionSegment *> { struct __CFArray {} *x_1_2_1; } x_15_1_1; struct CameraMotionSegment {} *x_15_1_2; struct __CFArray {} *x_15_1_3; struct { long long x_4_2_1; int x_4_2_2; unsigned int x_4_2_3; long long x_4_2_4; } x_15_1_4; bool x_15_1_5; struct HinkleyDetector { float x_6_2_1; float x_6_2_2; int x_6_2_3; struct HinkleyStats { float x_4_3_1; float x_4_3_2; float x_4_3_3; float x_4_3_4; } x_6_2_4; } x_15_1_6[6]; int x_15_1_7; struct RotationAnalysis { struct Vector<ma::RotationSegment *> { struct __CFArray {} *x_1_3_1; } x_8_2_1; struct RotationSegment {} *x_8_2_2; struct __CFArray {} *x_8_2_3; struct { long long x_4_3_1; int x_4_3_2; unsigned int x_4_3_3; long long x_4_3_4; } x_8_2_4; bool x_8_2_5; struct HinkleyDetector { float x_6_3_1; float x_6_3_2; int x_6_3_3; struct HinkleyStats { float x_4_4_1; float x_4_4_2; float x_4_4_3; float x_4_4_4; } x_6_3_4; } x_8_2_6; int x_8_2_7; int x_8_2_8; } x_15_1_8; bool x_15_1_9; bool x_15_1_10; } x15; } * _sceneAnalysis;
    VCPFrameAnalysisStats * _videoFrameAnalysis;
}

@property float actionScore;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)actionScore;
- (int)addResult:(struct __CFArray { }*)arg1 to:(id)arg2 forKey:(id)arg3 optional:(bool)arg4;
- (int)addSceneAnalysisResult:(id)arg1 to:(id)arg2 optional:(bool)arg3;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flags:(unsigned long long*)arg4;
- (float)computeExposureScoreOfFrame:(struct Frame { int x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct Translation { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; struct Translation { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5; float x6; unsigned long long x7; float x8; struct Translation { float x_9_1_1; float x_9_1_2; float x_9_1_3; } x9; unsigned int x10; bool x11; struct Translation { float x_12_1_1; float x_12_1_2; float x_12_1_3; } x12; float x13; struct MotionResult { float x_14_1_1[6]; float x_14_1_2[6]; float x_14_1_3; float x_14_1_4; float x_14_1_5; float x_14_1_6; int x_14_1_7; float x_14_1_8; bool x_14_1_9; bool x_14_1_10; int x_14_1_11; float x_14_1_12; float x_14_1_13[2]; struct { long long x_14_2_1; int x_14_2_2; unsigned int x_14_2_3; long long x_14_2_4; } x_14_1_14; float x_14_1_15; float x_14_1_16; struct Vector<ma::Object *> { struct __CFArray {} *x_17_2_1; } x_14_1_17; struct Vector<ma::Object *> { struct __CFArray {} *x_18_2_1; } x_14_1_18; } x14; }*)arg1;
- (void)dealloc;
- (int)finishAnalysisPass:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (float)getSceneSwichFrequency;
- (id)initWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)initWithVideoTrack:(id)arg1 withMetaOrientation:(id)arg2 withPrivateResults:(id)arg3 withFrameStats:(id)arg4 isTimelapse:(bool)arg5 isIris:(bool)arg6 irisPhotoOffsetSec:(float)arg7 irisPhotoExposureSec:(float)arg8 slowMoRate:(float)arg9;
- (void)prepareVideoAnalysisByScenes:(id)arg1;
- (id)privateResults;
- (int)process:(int)arg1;
- (id)results;
- (void)reviseFrameTrackScore:(struct Frame { int x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct Translation { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; struct Translation { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5; float x6; unsigned long long x7; float x8; struct Translation { float x_9_1_1; float x_9_1_2; float x_9_1_3; } x9; unsigned int x10; bool x11; struct Translation { float x_12_1_1; float x_12_1_2; float x_12_1_3; } x12; float x13; struct MotionResult { float x_14_1_1[6]; float x_14_1_2[6]; float x_14_1_3; float x_14_1_4; float x_14_1_5; float x_14_1_6; int x_14_1_7; float x_14_1_8; bool x_14_1_9; bool x_14_1_10; int x_14_1_11; float x_14_1_12; float x_14_1_13[2]; struct { long long x_14_2_1; int x_14_2_2; unsigned int x_14_2_3; long long x_14_2_4; } x_14_1_14; float x_14_1_15; float x_14_1_16; struct Vector<ma::Object *> { struct __CFArray {} *x_17_2_1; } x_14_1_17; struct Vector<ma::Object *> { struct __CFArray {} *x_18_2_1; } x_14_1_18; } x14; }*)arg1 saliencyRegions:(id)arg2;
- (int)seedAnalyzersWithPixelBuffer:(struct __CVBuffer { }*)arg1 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setActionScore:(float)arg1;
- (void)setNextCaptureFrame:(struct __CVBuffer { }*)arg1;

@end
