/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGWidgetEventTracker : NSObject {
    bool  _authenticated;
    unsigned long long  _location;
    NSDateComponents * _previousTodayViewAppearDateComponents;
    NSDate * _previousTodayViewAppearanceDate;
    NSMutableDictionary * _previousWidgetAppearanceDateByIdentifier;
    PETDistributionEventTracker * _widgetLingerTracker;
    PETDistributionEventTracker * _widgetListLingerTracker;
    PETScalarEventTracker * _widgetListShownTracker;
    PETScalarEventTracker * _widgetShownTracker;
    PETScalarEventTracker * _widgetStatusTracker;
    PETScalarEventTracker * _widgetToggleContract;
    PETScalarEventTracker * _widgetToggleContractTracker;
    PETScalarEventTracker * _widgetToggleExpand;
    PETScalarEventTracker * _widgetToggleExpandTracker;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_authenticationProperty;
- (id)_locationProperty;
- (void)_lockedStateDidChange;
- (id)_modeProperty;
- (id)_statusProperty;
- (void)_trackWidgetContractEventForWidget:(id)arg1;
- (void)_trackWidgetExpandEventForWidget:(id)arg1;
- (void)_trackWidgetLingerEventForWidget:(id)arg1 withLocation:(unsigned long long)arg2 authenticated:(bool)arg3 mode:(long long)arg4 duration:(double)arg5;
- (void)_trackWidgetListLingerEventWithLocation:(unsigned long long)arg1 authenticated:(bool)arg2 duration:(double)arg3;
- (void)_trackWidgetListShownEventWithLocation:(unsigned long long)arg1 authenticated:(bool)arg2;
- (void)_trackWidgetShownEventForWidget:(id)arg1 withLocation:(unsigned long long)arg2 authenticated:(bool)arg3 mode:(long long)arg4;
- (void)_trackWidgetStatusEventForWidget:(id)arg1 withStatus:(bool)arg2;
- (id)_widgetLingerTracker;
- (id)_widgetListLingerTracker;
- (id)_widgetProperty;
- (id)_widgetShownTracker;
- (id)_widgetStatusTracker;
- (id)_widgetToggleContractTracker;
- (void)dealloc;
- (id)init;
- (void)widget:(id)arg1 didAppearInMode:(long long)arg2;
- (void)widget:(id)arg1 didChangeUserSpecifiedDisplayMode:(long long)arg2;
- (void)widget:(id)arg1 didDisappearInMode:(long long)arg2;
- (void)widgetListDidAppearAtLocation:(unsigned long long)arg1 withEnabledWidgets:(id)arg2 disabledWidgets:(id)arg3;
- (void)widgetListDidDisappearAtLocation:(unsigned long long)arg1;
- (id)widgetListShownTracker;
- (id)widgetToggleExpandTracker;
- (void)widgetViewDidAppearWithWidget:(id)arg1;
- (void)widgetViewDidDisappearWithWidget:(id)arg1;

@end
