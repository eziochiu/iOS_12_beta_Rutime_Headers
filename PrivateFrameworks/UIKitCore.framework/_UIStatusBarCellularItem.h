/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarCellularItem : _UIStatusBarItem {
    _UIStatusBarImageView * _callForwardingView;
    _UIStatusBarStringView * _networkTypeView;
    _UIStatusBarStringView * _serviceNameView;
    _UIStatusBarCellularSignalView * _signalView;
    _UIStatusBarImageView * _sosView;
    _UIStatusBarImageView * _warningView;
}

@property (nonatomic, retain) _UIStatusBarImageView *callForwardingView;
@property (nonatomic, readonly) NSString *cellularDataEntryKey;
@property (nonatomic, retain) _UIStatusBarStringView *networkTypeView;
@property (nonatomic, retain) _UIStatusBarStringView *serviceNameView;
@property (nonatomic, readonly) bool showsCustomServiceString;
@property (nonatomic, retain) _UIStatusBarCellularSignalView *signalView;
@property (nonatomic, retain) _UIStatusBarImageView *sosView;
@property (nonatomic, retain) _UIStatusBarImageView *warningView;

+ (id)callForwardingDisplayIdentifier;
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2;
+ (id)nameDisplayIdentifier;
+ (id)signalStrengthDisplayIdentifier;
+ (id)sosDisplayIdentifier;
+ (id)typeDisplayIdentifier;
+ (id)warningDisplayIdentifier;

- (void).cxx_destruct;
- (id)_backgroundColorForUpdate:(id)arg1;
- (id)_fillColorForUpdate:(id)arg1;
- (id)_stringForCellularType:(long long)arg1;
- (bool)_updateSignalView:(id)arg1 withUpdate:(id)arg2 entry:(id)arg3;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)callForwardingView;
- (id)cellularDataEntryKey;
- (id)dependentEntryKeys;
- (id)entryForDisplayItemWithIdentifier:(id)arg1;
- (id)networkTypeView;
- (void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2;
- (id)serviceNameView;
- (id)serviceStringForData:(id)arg1;
- (void)setCallForwardingView:(id)arg1;
- (void)setNetworkTypeView:(id)arg1;
- (void)setServiceNameView:(id)arg1;
- (void)setSignalView:(id)arg1;
- (void)setSosView:(id)arg1;
- (void)setWarningView:(id)arg1;
- (bool)showsCustomServiceString;
- (id)signalView;
- (id)sosView;
- (id)viewForIdentifier:(id)arg1;
- (id)warningView;

@end
