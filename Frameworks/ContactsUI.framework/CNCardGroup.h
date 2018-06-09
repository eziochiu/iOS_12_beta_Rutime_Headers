/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNCardGroup : NSObject <NSCopying> {
    NSArray * _actionItems;
    NSMutableArray * _actions;
    bool  _addSpacerFromPreviousGroup;
    CNContact * _contact;
    NSMutableArray * _items;
    NSString * _title;
    bool  _useSplitActions;
}

@property (nonatomic, readonly) NSArray *actionItems;
@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic) bool addSpacerFromPreviousGroup;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, readonly) NSArray *displayItems;
@property (nonatomic, readonly) NSArray *editingItems;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic) bool useSplitActions;

+ (id)groupForContact:(id)arg1;

- (void).cxx_destruct;
- (id)_loadActionItems;
- (id)actionItems;
- (id)actions;
- (void)addAction:(id)arg1 withTitle:(id)arg2;
- (void)addAction:(id)arg1 withTitle:(id)arg2 color:(id)arg3 transportType:(long long)arg4;
- (id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(bool)arg4;
- (bool)addSpacerFromPreviousGroup;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayItems;
- (id)editingItems;
- (id)initWithContact:(id)arg1;
- (void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)removeActionWithTitle:(id)arg1;
- (void)setAddSpacerFromPreviousGroup:(bool)arg1;
- (void)setContact:(id)arg1;
- (void)setUseSplitActions:(bool)arg1;
- (id)title;
- (SEL)unwrappedSelectorForAction:(id)arg1;
- (id)unwrappedTargetForAction:(id)arg1;
- (bool)useSplitActions;

@end
