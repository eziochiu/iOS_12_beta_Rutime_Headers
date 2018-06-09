/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAccountsAndGroupsSection : NSObject {
    NSArray * _items;
    NSString * _title;
    id /* block */  _titleProvider;
}

@property (nonatomic, retain) NSArray *items;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, copy) id /* block */ titleProvider;

- (void).cxx_destruct;
- (id)items;
- (void)setItems:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleProvider:(id /* block */)arg1;
- (id)title;
- (id /* block */)titleProvider;

@end
