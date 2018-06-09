/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlSwitchViewProfile : HUQuickControlViewProfile <HUQuickControlIncrementalConvertibleProfile>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasSecondaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)gestureDragCoefficient;
- (double)percentageValueForViewValue:(id)arg1;
- (id)viewValueForPercentageValue:(double)arg1 round:(bool)arg2;

@end
