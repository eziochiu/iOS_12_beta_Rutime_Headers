/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKComplicationTemplateActivity : CLKComplicationTemplate {
    double  _briskMinutesPercentComplete;
    double  _energyPercentComplete;
    long long  _family;
    bool  _hideDots;
    double  _standHoursPercentComplete;
}

@property (nonatomic) double briskMinutesPercentComplete;
@property (nonatomic) double energyPercentComplete;
@property (getter=dotsAreHidden, nonatomic) bool hideDots;
@property (nonatomic) double standHoursPercentComplete;

+ (id)activityTemplateWithFamily:(long long)arg1;

- (double)briskMinutesPercentComplete;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)dotsAreHidden;
- (double)energyPercentComplete;
- (bool)isCompatibleWithFamily:(long long)arg1;
- (void)setBriskMinutesPercentComplete:(double)arg1;
- (void)setEnergyPercentComplete:(double)arg1;
- (void)setHideDots:(bool)arg1;
- (void)setStandHoursPercentComplete:(double)arg1;
- (double)standHoursPercentComplete;

@end
