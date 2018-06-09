/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAstronomyTimelineEntryModel : NTKTimelineEntryModel {
    CLLocation * _anyLocation;
    CLLocation * _currentLocation;
    NSDate * _date;
    unsigned long long  _vista;
}

@property (nonatomic, readonly) CLLocation *anyLocation;
@property (nonatomic, readonly) CLLocation *currentLocation;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) unsigned long long vista;

- (void).cxx_destruct;
- (id)anyLocation;
- (id)currentLocation;
- (id)date;
- (id)initWithVista:(unsigned long long)arg1 date:(id)arg2 currentLocation:(id)arg3 anyLocation:(id)arg4;
- (id)templateForComplicationFamily:(long long)arg1;
- (unsigned long long)vista;

@end
