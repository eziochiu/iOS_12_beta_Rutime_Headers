/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleNamePickerResultsTableViewController : UITableViewController {
    NSMutableArray * _items;
    NSString * _personLocalIdentifier;
    NSArray * _suggestedContacts;
}

@property (nonatomic, readonly) bool hasResults;
@property (retain) NSMutableArray *items;
@property (retain) NSString *personLocalIdentifier;
@property (retain) NSArray *suggestedContacts;

- (void).cxx_destruct;
- (id)contactAtIndexPath:(id)arg1;
- (bool)hasResults;
- (id)initWithStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 personLocalIdentifier:(id)arg2 suggestedContacts:(id)arg3;
- (id)items;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)personAtIndexPath:(id)arg1;
- (id)personLocalIdentifier;
- (void)setItems:(id)arg1;
- (void)setPersonLocalIdentifier:(id)arg1;
- (void)setSuggestedContacts:(id)arg1;
- (id)suggestedContacts;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateItemsForSearchString:(id)arg1;
- (void)viewDidLoad;

@end
