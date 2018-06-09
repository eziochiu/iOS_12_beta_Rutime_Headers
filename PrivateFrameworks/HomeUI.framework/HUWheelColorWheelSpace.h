/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUWheelColorWheelSpace : NSObject <HUColorWheelSpace>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long mirroringBiasAxis;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

- (struct { double x1; double x2; double x3; double x4; })colorForCoordinate:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })coordinateForColor:(struct { double x1; double x2; double x3; double x4; })arg1 isValid:(out bool*)arg2;
- (unsigned long long)type;

@end
