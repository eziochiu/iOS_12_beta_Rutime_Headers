/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIWebCardSectionView : SearchUICardSectionView <NUIContainerBoxViewDelegate, UIWebViewDelegate>

@property (retain) NUIContainerBoxView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (id)initWithRowModel:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;
- (id)replaceSemanticColor:(id)arg1 withColor:(id)arg2 inString:(id)arg3;
- (id)setupContentView;
- (void)webViewDidFinishLoad:(id)arg1;

@end