/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSNavigationAlertQueue : NSObject <CPSApplicationStateObserving, CPSButtonDelegate> {
    NSTimer * _alertTimer;
    CPSApplicationStateMonitor * _applicationStateMonitor;
    CPNavigationAlert * _currentAlert;
    CPSNavigationAlertView * _currentAlertView;
    <CPSNavigationAlertQueueDelegate> * _delegate;
    <CPTemplateDelegate> * _templateDelegate;
}

@property (nonatomic, retain) NSTimer *alertTimer;
@property (nonatomic) CPSApplicationStateMonitor *applicationStateMonitor;
@property (nonatomic, readonly) bool canDisplayAlert;
@property (nonatomic, readonly) CPNavigationAlert *currentAlert;
@property (nonatomic, readonly) CPSNavigationAlertView *currentAlertView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CPSNavigationAlertQueueDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <CPTemplateDelegate> *templateDelegate;

- (void).cxx_destruct;
- (void)_startAlertAnimations;
- (void)_visibleAlertTimerFired:(id)arg1;
- (id)alertTimer;
- (id)applicationStateMonitor;
- (void)applicationStateMonitor:(id)arg1 didBecomeActive:(bool)arg2;
- (bool)canDisplayAlert;
- (id)currentAlert;
- (id)currentAlertView;
- (id)delegate;
- (void)didSelectButton:(id)arg1;
- (void)dismissCurrentNavigationAlertAnimated:(bool)arg1 context:(unsigned long long)arg2;
- (id)initWithDelegate:(id)arg1 applicationStateMonitor:(id)arg2;
- (void)prepareNavigationAlert:(id)arg1 templateDelegate:(id)arg2 forDisplayInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 animated:(bool)arg4;
- (void)setAlertTimer:(id)arg1;
- (void)setApplicationStateMonitor:(id)arg1;
- (void)setTemplateDelegate:(id)arg1;
- (id)templateDelegate;

@end
