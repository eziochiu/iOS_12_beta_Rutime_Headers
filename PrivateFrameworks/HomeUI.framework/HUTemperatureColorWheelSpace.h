/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUTemperatureColorWheelSpace : NSObject <HUColorWheelSpace> {
    unsigned long long  _mirroringBiasAxis;
    struct { 
        double minimum; 
        double maximum; 
    }  _supportedRange;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long mirroringBiasAxis;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct { double x1; double x2; } supportedRange;
@property (nonatomic, readonly) unsigned long long type;

+ (struct { double x1; double x2; })defaultTemperatureRange;
+ (struct { double x1; double x2; })largestAllowableTemperatureRange;

- (struct { double x1; double x2; double x3; double x4; })colorForCoordinate:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })coordinateForColor:(struct { double x1; double x2; double x3; double x4; })arg1 isValid:(out bool*)arg2;
- (id)init;
- (id)initWithSupportedRange:(struct { double x1; double x2; })arg1;
- (unsigned long long)mirroringBiasAxis;
- (void)setMirroringBiasAxis:(unsigned long long)arg1;
- (struct { double x1; double x2; })supportedRange;
- (unsigned long long)type;

@end
