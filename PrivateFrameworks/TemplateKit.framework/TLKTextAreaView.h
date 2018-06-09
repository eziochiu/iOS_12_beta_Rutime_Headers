/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKTextAreaView : TLKStackView <NUIContainerStackViewDelegate, TLKTextAreaViewTesting> {
    NSMutableArray * _detailsFields;
    bool  _disableAllObservers;
    TLKRichTextField * _footnoteLabel;
    unsigned long long  _style;
    TLKTitleContainerView * _titleContainer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSMutableArray *detailsFields;
@property bool disableAllObservers;
@property (retain) TLKRichTextField *footnoteLabel;
@property (readonly) unsigned long long hash;
@property unsigned long long style;
@property (readonly) Class superclass;
@property (retain) TLKTitleContainerView *titleContainer;

+ (id)footNoteLabelFont;

- (void).cxx_destruct;
- (id)detailsFields;
- (bool)disableAllObservers;
- (id)footnoteLabel;
- (id)footnoteLabelString;
- (id)init;
- (void)internalTextFieldsInBatchUpdate:(bool)arg1;
- (bool)noFootNote;
- (bool)noRichTextFields;
- (void)performBatchUpdates:(id /* block */)arg1;
- (id)secondaryTitleLabelString;
- (void)setDetailsFields:(id)arg1;
- (void)setDisableAllObservers:(bool)arg1;
- (void)setFootnoteLabel:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTitleContainer:(id)arg1;
- (unsigned long long)style;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)textAreaLabelStrings;
- (id)titleContainer;
- (id)titleLabelString;
- (void)updateDetails:(id)arg1;
- (void)updateFootnote:(id)arg1;
- (void)updateResultWithTitle:(id)arg1 secondaryTitle:(id)arg2 image:(id)arg3 detached:(bool)arg4;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
