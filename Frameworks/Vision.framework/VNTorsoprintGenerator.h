/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNTorsoprintGenerator : VNDetector {
    void * _mEspressoContext;
    struct { 
        void *plan; 
        int network_index; 
    }  _mEspressoNetwork;
    void * _mEspressoPlan;
}

+ (float)_minimumTorsoInsideInputImageThreshold;
+ (struct CGSize { double x1; double x2; })_torsoprintDescriptorSize;
+ (struct CGSize { double x1; double x2; })_torsoprintInputImageSize;

- (bool)_calculateTorsoBBoxFromFaceBBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 insideImageWithSize:(struct CGSize { double x1; double x2; })arg2 torsoBBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 error:(id*)arg4;
- (bool)completeInitializationAndReturnError:(id*)arg1;
- (void)dealloc;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 error:(id*)arg4;

@end
