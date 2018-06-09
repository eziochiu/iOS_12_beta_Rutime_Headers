/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXCalendarEventActionActivityProvider : NSObject <SXActionActivityProvider> {
    <SXCalendarPresenter> * _calendarPresenter;
    <SXHost> * _host;
}

@property (nonatomic, readonly) <SXCalendarPresenter> *calendarPresenter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXHost> *host;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityGroupForAction:(id)arg1;
- (id)calendarPresenter;
- (void)createEvent:(id)arg1;
- (id)host;
- (id)initWithCalendarPresenter:(id)arg1 host:(id)arg2;
- (void)showInCalendar:(id)arg1;

@end
