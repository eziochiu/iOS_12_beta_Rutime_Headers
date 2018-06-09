/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUSegmentedControlAppearance : NSObject <NSCopying> {
    SUControlAppearance * _backgroundImages;
    NSMutableDictionary * _dividerImages;
    UIImage * _optionsBackgroundImage;
    NSMutableDictionary * _titleTextAttributes;
}

@property (nonatomic, retain) UIImage *optionsBackgroundImage;

+ (id)defaultBarAppearance;
+ (id)defaultOptionsAppearanceForTintStyle:(long long)arg1;

- (id)_newDividerImageKeyWithLeftState:(unsigned long long)arg1 rightState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (id)optionsBackgroundImage;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 barMetrics:(long long)arg4;
- (void)setOptionsBackgroundImage:(id)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)styleSegmentedControl:(id)arg1;
- (id)titleTextAttributesForState:(unsigned long long)arg1;

@end
