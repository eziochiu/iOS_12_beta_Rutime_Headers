/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarTimeItem : _UIStatusBarItem {
    _UIStatusBarStringView * _dateView;
    _UIStatusBarStringView * _pillTimeView;
    _UIStatusBarStringView * _shortTimeView;
    _UIStatusBarStringView * _timeView;
}

@property (nonatomic, retain) _UIStatusBarStringView *dateView;
@property (nonatomic, retain) _UIStatusBarStringView *pillTimeView;
@property (nonatomic, retain) _UIStatusBarStringView *shortTimeView;
@property (nonatomic, retain) _UIStatusBarStringView *timeView;

+ (id)dateDisplayIdentifier;
+ (id)pillTimeDisplayIdentifier;
+ (id)shortTimeDisplayIdentifier;
+ (id)timeDisplayIdentifier;

- (void).cxx_destruct;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)dateView;
- (id)dependentEntryKeys;
- (id)pillTimeView;
- (void)setDateView:(id)arg1;
- (void)setPillTimeView:(id)arg1;
- (void)setShortTimeView:(id)arg1;
- (void)setTimeView:(id)arg1;
- (id)shortTimeView;
- (id)timeView;
- (id)viewForIdentifier:(id)arg1;

@end
