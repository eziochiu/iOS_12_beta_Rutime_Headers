/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInputSwitcherItem : NSObject {
    NSString * _identifier;
    NSString * _localizedSubtitle;
    NSString * _localizedTitle;
    id /* block */  _persistentSelectedIndex;
    NSArray * _segmentImages;
    NSArray * _segmentTitles;
    long long  _selectedSegmentIndex;
    UIFont * _subtitleFont;
    UIFont * _titleFont;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) bool isSegmentedItem;
@property (nonatomic, copy) NSString *localizedSubtitle;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic, copy) id /* block */ persistentSelectedIndex;
@property (nonatomic, retain) NSArray *segmentImages;
@property (nonatomic, retain) NSArray *segmentTitles;
@property (nonatomic) long long selectedSegmentIndex;
@property (nonatomic, retain) UIFont *subtitleFont;
@property (nonatomic, retain) UIFont *titleFont;

+ (id)switcherItemWithIdentifier:(id)arg1;

- (void)dealloc;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (bool)isSegmentedItem;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (id /* block */)persistentSelectedIndex;
- (id)segmentImages;
- (id)segmentTitles;
- (long long)selectedSegmentIndex;
- (void)setIdentifier:(id)arg1;
- (void)setLocalizedSubtitle:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setPersistentSelectedIndex:(id /* block */)arg1;
- (void)setSegmentImages:(id)arg1;
- (void)setSegmentTitles:(id)arg1;
- (void)setSelectedSegmentIndex:(long long)arg1;
- (void)setSubtitleFont:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (id)subtitleFont;
- (id)titleFont;

@end
