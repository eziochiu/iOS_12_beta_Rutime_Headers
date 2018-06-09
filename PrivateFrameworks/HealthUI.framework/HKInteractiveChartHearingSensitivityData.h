/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKInteractiveChartHearingSensitivityData : NSObject <HKGraphSeriesChartData> {
    bool  _isLeftEar;
    double  _sensitivityDbHL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLeftEar;
@property (nonatomic) double sensitivityDbHL;
@property (readonly) Class superclass;

- (bool)isLeftEar;
- (double)sensitivityDbHL;
- (void)setIsLeftEar:(bool)arg1;
- (void)setSensitivityDbHL:(double)arg1;

@end
