/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSplashScreenViewController : HKViewController <UITableViewDataSource, UITableViewDelegate> {
    NSMutableArray * _splashItems;
    long long  _splashVersion;
}

@property (readonly) UIButton *continueButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *splashItems;
@property (nonatomic, readonly) HKSplashScreenView *splashScreenView;
@property (nonatomic) long long splashVersion;
@property (readonly) Class superclass;

+ (void)markSplashScreenAtVersion:(long long)arg1;
+ (id)splashScreenForSplashScreenVersion:(long long)arg1;

- (void).cxx_destruct;
- (void)addSplashScreenViewControllerItem:(id)arg1;
- (id)continueButton;
- (id)initForSplashScreenVersion:(long long)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setSplashItems:(id)arg1;
- (void)setSplashVersion:(long long)arg1;
- (id)splashItems;
- (id)splashScreenView;
- (long long)splashVersion;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end