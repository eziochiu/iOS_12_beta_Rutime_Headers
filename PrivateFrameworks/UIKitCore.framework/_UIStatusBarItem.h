/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarItem : NSObject {
    NSMutableDictionary * _displayItems;
    _UIStatusBarIdentifier * _identifier;
    bool  _needsUpdate;
    _UIStatusBar * _statusBar;
}

@property (nonatomic, readonly) NSSet *dependentEntryKeys;
@property (nonatomic, retain) NSMutableDictionary *displayItems;
@property (nonatomic, readonly) _UIStatusBarIdentifier *identifier;
@property (nonatomic, readonly) bool needsUpdate;
@property (readonly) _UIStatusBar *statusBar;

+ (id)createItemForIdentifier:(id)arg1 visualProvider:(id)arg2;
+ (id)defaultDisplayIdentifier;
+ (id)displayItemIdentifierFromIdentifier:(id)arg1 string:(id)arg2;
+ (id)displayItemIdentifierFromString:(id)arg1;
+ (id)identifier;
+ (Class)itemClassForIdentifier:(id)arg1 visualProvider:(id)arg2;
+ (id)itemIdentifierForDisplayItemIdentifier:(id)arg1;
+ (id)itemIdentifierFromString:(id)arg1;

- (void).cxx_destruct;
- (id)_applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1;
- (void)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;
- (id)dependentEntryKeys;
- (id)description;
- (void)displayItem:(id)arg1 didMoveToContainerView:(id)arg2;
- (id)displayItemForIdentifier:(id)arg1;
- (id)displayItems;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;
- (bool)needsUpdate;
- (void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1;
- (void)setDisplayItems:(id)arg1;
- (void)setNeedsUpdate;
- (void)setupDisplayItem:(id)arg1;
- (id)statusBar;
- (id)viewForIdentifier:(id)arg1;

@end
