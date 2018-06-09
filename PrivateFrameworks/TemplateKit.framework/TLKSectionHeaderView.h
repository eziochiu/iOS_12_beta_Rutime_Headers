/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKSectionHeaderView : TLKView <NUIContainerBoxViewDelegate> {
    UIView * _backgroundView;
    TLKMultilineText * _headerText;
    UILabel * _headerTextLabel;
}

@property (retain) UIView *backgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TLKMultilineText *headerText;
@property (retain) UILabel *headerTextLabel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)backgroundView;
- (long long)containerBoxView:(id)arg1 horizontalAlignmentForArrangedSubview:(id)arg2;
- (long long)containerBoxView:(id)arg1 verticalAlignmentForArrangedSubview:(id)arg2;
- (id)headerLabelText;
- (id)headerText;
- (id)headerTextLabel;
- (id)init;
- (void)observedPropertiesChanged;
- (void)setBackgroundView:(id)arg1;
- (void)setHeaderText:(id)arg1;
- (void)setHeaderTextLabel:(id)arg1;
- (void)styleDidChange:(unsigned long long)arg1;

@end
