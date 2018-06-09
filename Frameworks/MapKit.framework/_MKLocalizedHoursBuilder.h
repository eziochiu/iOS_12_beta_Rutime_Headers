/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKLocalizedHoursBuilder : NSObject {
    unsigned long long  _geoMapItemOpeningHourOptions;
    UIColor * _hoursStateLabelColor;
    bool  _isClosedTodayAllDay;
    bool  _isClosingSoon;
    bool  _isCurrentlyClosed;
    bool  _isOpeningSoon;
    unsigned long long  _localizedHoursStringOptions;
    NSString * _localizedOperatingHours;
    NSArray * _operatingHours;
    NSTimeZone * _timeZone;
}

@property (nonatomic) unsigned long long geoMapItemOpeningHourOptions;
@property (nonatomic, readonly) UIColor *hoursStateLabelColor;
@property (nonatomic) unsigned long long localizedHoursStringOptions;
@property (nonatomic, readonly) NSString *localizedOperatingHours;
@property (nonatomic, retain) NSArray *operatingHours;
@property (nonatomic, retain) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (void)_updateLocalizedString;
- (id)_updatedHoursLabelColor;
- (id)_updatedLocalizedOperatingHoursString;
- (unsigned long long)geoMapItemOpeningHourOptions;
- (id)hoursStateLabelColor;
- (id)initWithMapItem:(id)arg1 localizedHoursStringOptions:(unsigned long long)arg2;
- (id)initWithMapItemForMessageForBusiness:(id)arg1 localizedHoursStringOptions:(unsigned long long)arg2;
- (id)initWithTimeZone:(id)arg1 operatingHours:(id)arg2 geoMapItemOpeningHourOptions:(unsigned long long)arg3 localizedHoursStringOptions:(unsigned long long)arg4;
- (unsigned long long)localizedHoursStringOptions;
- (id)localizedOperatingHours;
- (id)operatingHours;
- (void)setGeoMapItemOpeningHourOptions:(unsigned long long)arg1;
- (void)setLocalizedHoursStringOptions:(unsigned long long)arg1;
- (void)setOperatingHours:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;

@end
