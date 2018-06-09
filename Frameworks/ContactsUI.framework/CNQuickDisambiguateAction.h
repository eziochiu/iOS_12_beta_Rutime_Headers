/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNQuickDisambiguateAction : CNQuickPropertyAction {
    NSOrderedSet * _actions;
    bool  _ignoreMainAction;
    CNQuickAction * _mainAction;
}

@property (nonatomic, retain) NSOrderedSet *actions;
@property (nonatomic) bool ignoreMainAction;
@property (nonatomic) CNQuickAction *mainAction;

- (void).cxx_destruct;
- (id)actions;
- (id)description;
- (bool)ignoreMainAction;
- (id)initWithActions:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mainAction;
- (void)performWithCompletionBlock:(id /* block */)arg1;
- (void)setActions:(id)arg1;
- (void)setIgnoreMainAction:(bool)arg1;
- (void)setMainAction:(id)arg1;
- (id)subtitleForContext:(long long)arg1;
- (id)titleForContext:(long long)arg1;

@end
