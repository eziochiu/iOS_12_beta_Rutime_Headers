/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIActivityUserDefaultsViewController : UITableViewController <UITableViewDataSourcePrefetching> {
    NSArray * _activities;
    UIImage * _placeholderImage;
    _UIActivityUserDefaults * _userDefaults;
}

@property (nonatomic, copy) NSArray *activities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (readonly) Class superclass;
@property (nonatomic, retain) _UIActivityUserDefaults *userDefaults;

- (void).cxx_destruct;
- (id)activities;
- (id)activityForRowAtIndexPath:(id)arg1;
- (id)initWithActivities:(id)arg1 userDefaults:(id)arg2;
- (id)placeholderImage;
- (long long)preferredActivityCategory;
- (void)setActivities:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)toggleActivityHiddenForControl:(id)arg1;
- (void)toggleActivityHiddenForRowAtIndexPath:(id)arg1;
- (id)userDefaults;
- (void)viewDidLoad;

@end
