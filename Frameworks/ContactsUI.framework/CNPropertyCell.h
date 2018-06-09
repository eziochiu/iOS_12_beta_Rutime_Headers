/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPropertyCell : CNLabeledCell {
    bool  _allowsEditing;
    <CNPropertyCellDelegate> * _delegate;
    UIResponder * _firstResponderItem;
    bool  _forceSuggested;
    bool  _highlightedProperty;
    bool  _ignoreSuggested;
    bool  _important;
    double  _labelWidth;
    <CNPresenterDelegate> * _presentingDelegate;
    id  _property;
}

@property (nonatomic) bool allowsEditing;
@property (nonatomic) <CNPropertyCellDelegate> *delegate;
@property (nonatomic, readonly) UIResponder *firstResponderItem;
@property (nonatomic) bool forceSuggested;
@property (getter=isHighlightedProperty, nonatomic) bool highlightedProperty;
@property (nonatomic) bool ignoreSuggested;
@property (getter=isImportant, nonatomic) bool important;
@property (nonatomic) double labelWidth;
@property (nonatomic) <CNPresenterDelegate> *presentingDelegate;
@property (nonatomic) id property;
@property (nonatomic, readonly) CNPropertyGroupItem *propertyItem;
@property (getter=isSuggested, nonatomic, readonly) bool suggested;
@property (nonatomic, readonly) bool supportsTintColorValue;

+ (id)labelStringFromAppName:(id)arg1 andPropertyLabel:(id)arg2;

- (void).cxx_destruct;
- (bool)allowsEditing;
- (void)copy:(id)arg1;
- (id)delegate;
- (id)firstResponderItem;
- (bool)forceSuggested;
- (bool)ignoreSuggested;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isHighlightedProperty;
- (bool)isImportant;
- (bool)isSuggested;
- (id)labelString;
- (double)labelWidth;
- (void)performAccessoryAction;
- (void)performDefaultAction;
- (id)presentingDelegate;
- (id)property;
- (id)propertyItem;
- (void)setAllowsEditing:(bool)arg1;
- (void)setCardGroupItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForceSuggested:(bool)arg1;
- (void)setHighlightedProperty:(bool)arg1;
- (void)setIgnoreSuggested:(bool)arg1;
- (void)setImportant:(bool)arg1;
- (void)setLabelWidth:(double)arg1;
- (void)setPresentingDelegate:(id)arg1;
- (void)setProperty:(id)arg1;
- (void)setPropertyItem:(id)arg1;
- (bool)shouldShowSuggestionOrigin;
- (bool)supportsTintColorValue;
- (void)tintColorDidChange;
- (void)updateValueWithPropertyItem:(id)arg1;
- (void)updateWithPropertyItem:(id)arg1;
- (id)valueString;

@end
