/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIObjectInspectorViewController : UIViewController <SKUIObjectInspector, UITableViewDataSource, UITableViewDelegate, UIViewControllerTransitioningDelegate> {
    UIVisualEffectView * _backgroundView;
    UIView * _contentView;
    _SKUIInspectablePropertySection * _currentSection;
    <SKUIInspectableObject> * _inspectableObject;
    UINavigationBar * _navigationBar;
    NSMutableArray * _sections;
    UITableView * _tableView;
}

@property (nonatomic, retain) UIVisualEffectView *backgroundView;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) _SKUIInspectablePropertySection *currentSection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *friendlyName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *information;
@property (nonatomic, retain) <SKUIInspectableObject> *inspectableObject;
@property (nonatomic, retain) UINavigationBar *navigationBar;
@property (nonatomic, retain) NSMutableArray *sections;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

+ (void)showInspectableObject:(id)arg1;

- (void).cxx_destruct;
- (id)backgroundView;
- (void)beginSectionWithFriendlyName:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calculateContentViewFrameWithParentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withTraitCollection:(id)arg2;
- (id)contentView;
- (id)currentSection;
- (void)dismiss;
- (void)done:(id)arg1;
- (void)endSection;
- (void)exposePropertyWithFriendlyName:(id)arg1 value:(id)arg2;
- (id)friendlyName;
- (void)handleBackgroundTap:(id)arg1;
- (id)information;
- (id)initWithInspectableObject:(id)arg1;
- (id)inspectableObject;
- (id)navigationBar;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)populate;
- (id)sections;
- (void)setBackgroundView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setCurrentSection:(id)arg1;
- (void)setFriendlyName:(id)arg1;
- (void)setInformation:(id)arg1;
- (void)setInspectableObject:(id)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setupConstraints;
- (void)showFromViewController:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
