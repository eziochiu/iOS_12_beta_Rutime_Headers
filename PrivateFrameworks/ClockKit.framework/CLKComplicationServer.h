/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKComplicationServer : NSObject <CLKComplicationClient> {
    NSSet * _activeComplications;
    NSString * _clientIdentifier;
    <CLKComplicationDataSource> * _dataSource;
    Class  _dataSourceClass;
    struct { 
        bool supportsGetTimeTravelDirections; 
        bool supportsGetTimelineStartDate; 
        bool supportsGetTimelineEndDate; 
        bool supportsGetPrivacyBehavior; 
        bool supportsGetTimelineAnimationBehavior; 
        bool supportsExtendAfter; 
        bool supportsExtendBefore; 
        bool supportsGetRequestedUpdate; 
        bool supportsNotifyRequestedUpdate; 
        bool supportsNotifyBudgetExhausted; 
        bool supportsGetPlaceholderTemplate; 
        bool supportsGetLocalizableDescriptionProvider; 
        bool supportsGetLocalizableSampleTemplate; 
        bool exceptionOnSkippedHandler; 
    }  _dataSourceFlags;
    NSXPCConnection * _serverConnection;
}

@property (nonatomic, readonly) NSArray *activeComplications;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *earliestTimeTravelDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *latestTimeTravelDate;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_checkinWithServer;
- (void)_createConnection;
- (void)_createDataSourceIfNecessary;
- (id)_init;
- (id)activeComplications;
- (id)earliestTimeTravelDate;
- (void)extendTimelineForComplication:(id)arg1;
- (void)getCurrentTimelineEntryForComplication:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getLocalizableSampleTemplateForComplication:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getNextRequestedUpdateDateWithHandler:(id /* block */)arg1;
- (void)getPrivacyBehaviorForComplication:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getSupportedTimeTravelDirectionsForComplication:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getTimelineAnimationBehaviorForComplication:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getTimelineEndDateForComplication:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getTimelineEntriesForComplication:(id)arg1 afterDate:(id)arg2 limit:(unsigned long long)arg3 withHandler:(id /* block */)arg4;
- (void)getTimelineEntriesForComplication:(id)arg1 beforeDate:(id)arg2 limit:(unsigned long long)arg3 withHandler:(id /* block */)arg4;
- (void)getTimelineStartDateForComplication:(id)arg1 withHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithClientIdentifier:(id)arg1;
- (id)latestTimeTravelDate;
- (void)reloadTimelineForComplication:(id)arg1;
- (void)requestedUpdateBudgetExhausted;
- (void)requestedUpdateDidBegin;
- (void)setActiveComplications:(id)arg1;

@end
