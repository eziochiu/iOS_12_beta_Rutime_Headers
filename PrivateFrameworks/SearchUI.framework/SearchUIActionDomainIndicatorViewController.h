/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIActionDomainIndicatorViewController : SearchUIAccessoryViewController {
    unsigned long long  _style;
}

@property unsigned long long style;
@property (retain) UIImageView *view;

+ (bool)supportsResult:(id)arg1;

- (void)setStyle:(unsigned long long)arg1;
- (id)setupViewWithStyle:(unsigned long long)arg1;
- (unsigned long long)style;
- (void)updateWithResult:(id)arg1;

@end