/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureImageMotionDetector : NSObject {
    struct { 
        double centerx; 
        double centery; 
        bool lensCoefficientsValid; 
        float lensCoefficients[5]; 
        float gravityFactor; 
        float pixelsPerMicron; 
        bool isFrontCamera; 
    }  _cameraData;
    int  _colSumCapacity;
    int  _colSumLength;
    double * _corrArray;
    struct { 
        int fusedRingIndex; 
        double fusedRingTime[256]; 
        struct { 
            double w; 
            double x; 
            double y; 
            double z; 
        } fusedRingQuaternion[256]; 
        unsigned char ignoreMotionDataForPowerTest; 
        unsigned char relaxMotionDataLoggingThreshold; 
        unsigned char didHaveMotionData; 
        unsigned char prevDidHaveMotionData; 
        unsigned char usingMotionDataFromISP; 
        struct { 
            unsigned int numSamples; 
            struct { 
                bool doingBiasEstimation; 
                double timestamp; 
                struct { 
                    double w; 
                    double x; 
                    double y; 
                    double z; 
                } quaternion; 
            } samples[256]; 
        } rawQuaternions; 
    }  _gyroDataCtx;
    struct { 
        int fusedRingIndex[2]; 
        double fusedRingTime[2][256]; 
        struct { 
            float x; 
            float y; 
        } fusedRingHallPosition[2][256]; 
        double hallTimeShift; 
        unsigned char isFirstSample[2]; 
        unsigned char bypassHighPassFilter; 
        float lowpassParameter; 
        struct { 
            float x; 
            float y; 
        } lowpassHallPosition[2]; 
    }  _hallDataCtx;
    int  _height;
    struct { 
        double **rowSums; 
        double **colSums; 
        struct { /* ? */ } *motionMetadata; 
        unsigned int curIdx; 
        unsigned int count; 
        unsigned int size; 
    }  _imgProj;
    int * _intColSum;
    int * _intRowSum;
    int  _maximumSearchRange;
    struct { 
        float crossCorrelationMaximum[2]; 
        int maxCorrelationShift[2]; 
        bool useCameraMotionMetadata; 
        float gyroTranslation[2]; 
        float oisTranslation[2]; 
        int frameRingBufferCount; 
        int frameRingBufferDistance; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } roi; 
        bool isMotionDetected; 
        bool valid; 
    }  _motionStatistics;
    int  _processedBufferCount;
    int  _rowSumCapacity;
    int  _rowSumLength;
    float  _stationaryThreshold;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sumROI;
    double * _tmpSum1;
    double * _tmpSum2;
    struct { 
        int width; 
        int height; 
        int overscanWidth; 
        int overscanHeight; 
        int method; 
        int platform; 
        int baseTransformCount; 
        int derivedTransformCount; 
        int derivedTransformStep; 
        float limitFactor; 
        unsigned char limitTransform; 
        unsigned char prevTransformLimited; 
        unsigned char forceIdentity; 
        unsigned short lineBufferCount; 
        float digitalZoomFactorOverride; 
        int ISPStripOffsetX; 
        int ISPStripOffsetY; 
        bool isUsing1kLineBuffers; 
        struct { /* ? */ } *visStripParams; 
        unsigned long long visStripParamsSize; 
    }  _transformCtx;
    int  _width;
}

@property (nonatomic, readonly) int maximumSearchRange;
@property (nonatomic, readonly) struct { float x1[2]; int x2[2]; bool x3; float x4[2]; float x5[2]; int x6; int x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; bool x9; bool x10; } motionStatistics;
@property (nonatomic) float stationaryThreshold;

- (int)_allocateArrays:(int)arg1 height:(int)arg2 frameRingSize:(int)arg3;
- (int)_computeStatistics;
- (struct { bool x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; } x3; struct { int x_4_1_1; float x_4_1_2; float x_4_1_3; unsigned char x_4_1_4; float x_4_1_5; float x_4_1_6; double x_4_1_7; double x_4_1_8; double x_4_1_9; double x_4_1_10; struct { struct { int x_1_3_1; int x_1_3_2; } x_11_2_1; struct { int x_2_3_1; int x_2_3_2; } x_11_2_2; } x_4_1_11; int x_4_1_12; } x4; })_extractMotionMetadata:(id)arg1;
- (void)_freeAllocatedArrays;
- (void)_resetGyroHallContext;
- (void)dealloc;
- (id)init;
- (id)initWithWidth:(int)arg1 height:(int)arg2;
- (id)initWithWidth:(int)arg1 height:(int)arg2 maximumSearchRange:(int)arg3 frameRingSize:(int)arg4;
- (int)maximumSearchRange;
- (struct { float x1[2]; int x2[2]; bool x3; float x4[2]; float x5[2]; int x6; int x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; bool x9; bool x10; })motionStatistics;
- (int)processPixelBuffer:(struct __CVBuffer { }*)arg1;
- (int)processPixelBuffer:(struct __CVBuffer { }*)arg1 metadataDictionary:(id)arg2;
- (void)resetProcessingState;
- (int)setCentralROIAndGetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (int)setRoi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 actualROI:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (void)setStationaryThreshold:(float)arg1;
- (float)stationaryThreshold;

@end
