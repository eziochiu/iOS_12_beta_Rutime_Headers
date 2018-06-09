/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKDetailsView : TLKView <TLKTextAreaViewTesting> {
    NSArray * _details;
    TLKRichText * _footnote;
    TLKMultilineText * _secondaryTitle;
    TLKImage * _secondaryTitleImage;
    bool  _secondaryTitleIsDetached;
    TLKTextAreaView * _textAreaView;
    TLKRichText * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *details;
@property (nonatomic, retain) TLKRichText *footnote;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TLKMultilineText *secondaryTitle;
@property (nonatomic, retain) TLKImage *secondaryTitleImage;
@property (nonatomic) bool secondaryTitleIsDetached;
@property (readonly) Class superclass;
@property (retain) TLKTextAreaView *textAreaView;
@property (nonatomic, retain) TLKRichText *title;

- (void).cxx_destruct;
- (id)details;
- (id)footnote;
- (id)footnoteLabelString;
- (id)init;
- (void)observedPropertiesChanged;
- (id)secondaryTitle;
- (id)secondaryTitleImage;
- (bool)secondaryTitleIsDetached;
- (id)secondaryTitleLabelString;
- (void)setDetails:(id)arg1;
- (void)setFootnote:(id)arg1;
- (void)setSecondaryTitle:(id)arg1;
- (void)setSecondaryTitleImage:(id)arg1;
- (void)setSecondaryTitleIsDetached:(bool)arg1;
- (void)setTextAreaView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)textAreaLabelStrings;
- (id)textAreaView;
- (id)title;
- (id)titleLabelString;

@end
