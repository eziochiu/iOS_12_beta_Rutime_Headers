/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVInfoHeaderView : UIView <TVAppTemplateImpressionable> {
    UIView * _headerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *headerView;
@property (readonly) Class superclass;

+ (id)infoHeaderViewWithElement:(id)arg1 existingView:(id)arg2;

- (void).cxx_destruct;
- (id)headerView;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)layoutSubviews;
- (void)setHeaderView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
