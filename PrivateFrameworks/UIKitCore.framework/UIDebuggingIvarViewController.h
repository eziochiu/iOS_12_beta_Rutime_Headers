/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDebuggingIvarViewController : UITableViewController <UIDebuggingInformationViewController> {
    NSObject * _inspectedObject;
}

@property (nonatomic) NSObject *inspectedObject;

- (void).cxx_destruct;
- (Class)_classForTableSection:(long long)arg1;
- (id)_classHierarchyForInspectedObject;
- (id)_ivarForIndexPath:(id)arg1;
- (id)_ivarsForInspectedObjectInClass:(Class)arg1;
- (id)init;
- (id)inspectedObject;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)prepareForDisplayAsTopLevelDebuggingViewController;
- (void)setInspectedObject:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@end