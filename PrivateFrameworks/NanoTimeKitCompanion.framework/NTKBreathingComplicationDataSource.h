/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKBreathingComplicationDataSource : NTKComplicationDataSource

+ (id)_templateForFamily:(long long)arg1;
+ (bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
+ (bool)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;

- (id)_template;
- (id)complicationApplicationIdentifier;
- (id)currentSwitcherTemplate;
- (void)dealloc;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)arg1;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)getSupportedTimeTravelDirectionsWithHandler:(id /* block */)arg1;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (id)lockedTemplate;

@end
