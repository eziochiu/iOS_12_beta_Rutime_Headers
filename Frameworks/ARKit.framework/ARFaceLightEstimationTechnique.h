/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARFaceLightEstimationTechnique : ARTechnique {
    bool  _cameraTransformAvailable;
    NSObject<OS_dispatch_semaphore> * _estimatingSemaphore;
    struct FLEOptions { 
        float smoothingAlpha; 
        float lightIntensityMinimumConstraint; 
        bool ransacEnabled; 
        bool chromaEnabled; 
        int ransacMinSampleSet; 
        float ransacErrorThreshold; 
        bool darkBehindHead; 
    }  _faceLightEstimationOptions;
    struct FacialLightEstimation { 
        struct Matrix<float, 0, 1> { 
            float *m_data; 
            unsigned long long m_capacity; 
            unsigned int m_rows; 
        } m_validSampleIntensities; 
        struct vector<int, std::__1::allocator<int> > { 
            int *__begin_; 
            int *__end_; 
            struct __compressed_pair<int *, std::__1::allocator<int> > { 
                int *__value_; 
            } __end_cap_; 
        } m_validChromaSampleIDS; 
        struct vector<int, std::__1::allocator<int> > { 
            int *__begin_; 
            int *__end_; 
            struct __compressed_pair<int *, std::__1::allocator<int> > { 
                int *__value_; 
            } __end_cap_; 
        } m_sampleIndices_all; 
        struct Matrix<float, 0, 0> { 
            float *m_data; 
            unsigned long long m_capacity; 
            unsigned int m_rows; 
            unsigned int m_cols; 
        } m_validRtfs; 
        struct shared_ptr<arkit::PrecomputedFaceData> { 
            struct PrecomputedFaceData {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } m_precomputedFaceData; 
        struct ExponentialSmoother<cva::Matrix<float, 9, 1> > { 
            struct optional<cva::Matrix<float, 9, 1> > { 
                bool m_initialized; 
                struct aligned_storage<cva::Matrix<float, 9, 1> > { 
                    union dummy_u { 
                        BOOL data[36]; 
                        struct a4 { } aligner_; 
                    } dummy_; 
                } m_storage; 
            } state; 
        } m_smoother; 
        struct vector<unsigned long, std::__1::allocator<unsigned long> > { 
            unsigned long long *__begin_; 
            unsigned long long *__end_; 
            struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { 
                unsigned long long *__value_; 
            } __end_cap_; 
        } m_inliers; 
    }  _faceLightEstimator;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _lastCameraTransform;
    ARFaceTrackingData * _lastFaceData;
    ARDirectionalLightEstimate * _lastLightEstimate;
    NSObject<OS_dispatch_queue> * _lightEstimationQueue;
    float  _lightIntensity;
    struct __CVBuffer { } * _pixelBufferRef;
    NSObject<OS_dispatch_semaphore> * _resultSemaphore;
    float  _shSmoothingAlpha;
    struct ExponentialSmoother<float> { 
        struct optional<float> { 
            bool m_initialized; 
            struct aligned_storage<float> { 
                union dummy_u { 
                    BOOL data[4]; 
                    struct a4 { } aligner_; 
                } dummy_; 
            } m_storage; 
        } state; 
    }  _smoother;
    float  _temperature;
}

+ (float)_computeShSmoothingAlpha:(double)arg1;
+ (struct shared_ptr<arkit::FaceTrackingData> { struct FaceTrackingData {} *x1; struct __shared_weak_count {} *x2; })_transformFaceTrackingData:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)processData:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;

@end
