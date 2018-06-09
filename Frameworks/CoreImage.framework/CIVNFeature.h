/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIVNFeature : CIFeature {
    float  confidence;
}

@property (readonly) float confidence;

- (float)confidence;
- (id)initWithObservation:(id)arg1 inImage:(id)arg2;

@end
