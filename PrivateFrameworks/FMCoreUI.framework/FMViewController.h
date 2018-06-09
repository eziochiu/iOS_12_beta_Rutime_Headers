/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

@interface FMViewController : UIViewController {
    NSMutableDictionary * _kvoObservationTokens;
    NSMutableSet * _notificationTokens;
}

@property (readonly, copy) NSString *controllerNibName;
@property (nonatomic, retain) NSMutableDictionary *kvoObservationTokens;
@property (nonatomic, retain) NSMutableSet *notificationTokens;

- (void).cxx_destruct;
- (id)actualNibNameForName:(id)arg1;
- (void)addKVOObservationToken:(id)arg1 forObject:(id)arg2;
- (void)addNotificationToken:(id)arg1;
- (void)awakeFromNib;
- (id)controllerNibName;
- (void)dealloc;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)kvoObservationTokens;
- (id)notificationTokens;
- (void)performSegueWithIdentifier:(id)arg1 sender:(id)arg2;
- (void)removeKVOObservationTokens;
- (void)removeNotificationTokens;
- (void)setKvoObservationTokens:(id)arg1;
- (void)setNotificationTokens:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
