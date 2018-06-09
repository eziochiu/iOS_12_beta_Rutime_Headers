/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNRecognizedObjectObservation : VNDetectedObjectObservation {
    NSArray * _labels;
}

@property (nonatomic, readonly, copy) NSArray *labels;

- (void).cxx_destruct;
- (id)initWithRequestRevision:(unsigned long long)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 confidence:(float)arg3 labels:(id)arg4;
- (id)labels;

@end
