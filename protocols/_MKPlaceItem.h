/* made by EzioChiu.
 */

@protocol _MKPlaceItem

@required

- (EKCalendarItem *)calendarItem;
- (CNContact *)contact;
- (bool)hasContactOnly;
- (bool)isContactPersisted;
- (bool)isIntermediateMapItem;
- (MKMapItem *)mapItem;
- (NSString *)name;
- (unsigned long long)options;

@end
