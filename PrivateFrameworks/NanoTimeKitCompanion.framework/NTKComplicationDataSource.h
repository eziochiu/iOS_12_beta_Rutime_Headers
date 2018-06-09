/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKComplicationDataSource : NSObject {
    NTKComplication * _complication;
    <NTKComplicationDataSourceDelegate> * _delegate;
    CLKDevice * _device;
    long long  _family;
}

@property (nonatomic, readonly) NTKComplication *complication;
@property (nonatomic) <NTKComplicationDataSourceDelegate> *delegate;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, readonly) long long family;
@property (nonatomic, readonly) bool supportsTapAction;
@property (nonatomic, readonly) unsigned long long timelineAnimationBehavior;

+ (bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
+ (bool)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;
+ (bool)acceptsComplicationType:(unsigned long long)arg1 withFamily:(long long)arg2 forDevice:(id)arg3;
+ (Class)dataSourceClassForComplicationType:(unsigned long long)arg1 family:(long long)arg2 forDevice:(id)arg3;

- (void).cxx_destruct;
- (bool)alwaysShowIdealizedTemplateInSwitcher;
- (void)becomeActive;
- (void)becomeInactive;
- (id)complication;
- (id)complicationApplicationIdentifier;
- (id)currentSwitcherTemplate;
- (id)delegate;
- (id)device;
- (void)didTouchDown;
- (void)didTouchUpInside;
- (long long)family;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)arg1;
- (void)getDesiredUpdateIntervalWithHandler:(id /* block */)arg1;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)getSupportedTimeTravelDirectionsWithHandler:(id /* block */)arg1;
- (void)getTimelineEndDateWithHandler:(id /* block */)arg1;
- (void)getTimelineEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (void)getTimelineEntriesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (void)getTimelineStartDateWithHandler:(id /* block */)arg1;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (id)lockedTemplate;
- (void)pause;
- (void)pauseAnimations;
- (void)resume;
- (void)resumeAnimations;
- (void)setDelegate:(id)arg1;
- (bool)supportsTapAction;
- (unsigned long long)timelineAnimationBehavior;

@end
