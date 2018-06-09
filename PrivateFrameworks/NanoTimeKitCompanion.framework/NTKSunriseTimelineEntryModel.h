/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKSunriseTimelineEntryModel : NTKTimelineEntryModel {
    NSString * _animationGroup;
    long long  _constantSun;
    bool  _currentEvent;
    CLLocation * _location;
    NSString * _locationText;
    bool  _showingSunrise;
    NSDate * _sunriseDate;
    NSDate * _sunsetDate;
}

@property (nonatomic, retain) NSString *animationGroup;
@property (nonatomic) long long constantSun;
@property (nonatomic) bool currentEvent;
@property (nonatomic, readonly) NSDate *eventDate;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, retain) NSString *locationText;
@property (nonatomic) bool showingSunrise;
@property (nonatomic, retain) NSDate *sunriseDate;
@property (nonatomic, retain) NSDate *sunsetDate;

+ (id)_eventTimeAndCountdown:(id)arg1 suppressCountdown:(bool)arg2 suppressCommaSeparator:(bool)arg3;
+ (id)_swapPlaceholderString:(id)arg1 withTimeStringForDate:(id)arg2 inString:(id)arg3 usingBaseFont:(id)arg4 smallCapsBaseFont:(id)arg5;
+ (id)circular:(id)arg1 isMedium:(bool)arg2;
+ (id)extraLarge:(id)arg1;
+ (id)largeModular:(id)arg1;
+ (id)largeUtility:(id)arg1 suppressCountdown:(bool)arg2;
+ (id)smallModular:(id)arg1;
+ (id)smallUtility:(id)arg1;

- (void).cxx_destruct;
- (id)animationGroup;
- (long long)constantSun;
- (bool)currentEvent;
- (id)description;
- (id)eventDate;
- (id)location;
- (id)locationText;
- (void)setAnimationGroup:(id)arg1;
- (void)setConstantSun:(long long)arg1;
- (void)setCurrentEvent:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationText:(id)arg1;
- (void)setShowingSunrise:(bool)arg1;
- (void)setSunriseDate:(id)arg1;
- (void)setSunsetDate:(id)arg1;
- (bool)showingSunrise;
- (id)sunriseDate;
- (id)sunsetDate;
- (id)templateForComplicationFamily:(long long)arg1;

@end
