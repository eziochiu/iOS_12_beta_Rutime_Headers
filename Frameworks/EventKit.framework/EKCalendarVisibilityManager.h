/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarVisibilityManager : NSObject {
    EKEventStore * _eventStore;
    CalDarwinNotificationListener * _notificationListener;
    id /* block */  _visibilityChangedCallback;
}

@property (nonatomic, retain) EKEventStore *eventStore;
@property (nonatomic, retain) NSArray *invisibleCalendars;
@property (nonatomic, retain) CalDarwinNotificationListener *notificationListener;
@property (nonatomic, copy) id /* block */ visibilityChangedCallback;
@property (nonatomic, readonly) NSArray *visibleCalendars;

+ (id)visibilityChangedNotificationName;

- (void).cxx_destruct;
- (id)_calendarsThatAreVisible:(bool)arg1;
- (id)_deselectedCalendarIdentifiers;
- (void)dealloc;
- (id)eventStore;
- (id)init;
- (id)initWithEventStore:(id)arg1 visibilityChangedCallback:(id /* block */)arg2;
- (id)invisibleCalendars;
- (id)notificationListener;
- (void)setEventStore:(id)arg1;
- (void)setInvisibleCalendars:(id)arg1;
- (void)setNotificationListener:(id)arg1;
- (void)setVisibilityChangedCallback:(id /* block */)arg1;
- (id /* block */)visibilityChangedCallback;
- (id)visibleCalendars;

@end
