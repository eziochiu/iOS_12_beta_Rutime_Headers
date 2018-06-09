/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARFaceTrackingTechnique : ARImageBasedTechnique {
    bool  _isFaceTracked;
}

@property bool isFaceTracked;

+ (bool)isSupported;

- (id)init;
- (bool)isFaceTracked;
- (id)processData:(id)arg1;
- (unsigned long long)requiredSensorDataTypes;
- (void)setIsFaceTracked:(bool)arg1;

@end
