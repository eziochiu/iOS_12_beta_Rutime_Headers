/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARExposureLightEstimationTechnique : ARTechnique {
    float  _lightIntensity;
    NSObject<OS_dispatch_semaphore> * _resultSemaphore;
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

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (id)processData:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;

@end
