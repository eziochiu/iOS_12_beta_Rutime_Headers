/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARPlaneEstimationOptions : NSObject <NSCopying> {
    bool  _deliverRawSceneUnderstandingResults;
    bool  _mlModelEnabled;
    unsigned long long  _planeDetection;
}

@property (nonatomic) bool deliverRawSceneUnderstandingResults;
@property (nonatomic) bool mlModelEnabled;
@property (nonatomic) unsigned long long planeDetection;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deliverRawSceneUnderstandingResults;
- (bool)isEqual:(id)arg1;
- (bool)mlModelEnabled;
- (unsigned long long)planeDetection;
- (void)setDeliverRawSceneUnderstandingResults:(bool)arg1;
- (void)setMlModelEnabled:(bool)arg1;
- (void)setPlaneDetection:(unsigned long long)arg1;

@end
