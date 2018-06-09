/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXCalendarPresenter : NSObject <EKEventEditViewDelegate, SXCalendarPresenter> {
    EKEventStore * _eventStore;
    <SXViewControllerPresenting> * _viewControllerPresenting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) EKEventStore *eventStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXViewControllerPresenting> *viewControllerPresenting;

- (void).cxx_destruct;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (id)eventStore;
- (id)initWithViewControllerPresenting:(id)arg1 eventStore:(id)arg2;
- (void)presentCalendarEvent:(id)arg1;
- (id)viewControllerPresenting;

@end
