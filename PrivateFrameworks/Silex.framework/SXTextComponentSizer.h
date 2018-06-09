/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXTextComponentSizer : SXComponentSizer <SXTextSourceDataSource> {
    SXTextLayouter * _textLayouter;
    SXTextResizer * _textResizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long stringLength;
@property (readonly) Class superclass;
@property (nonatomic, retain) SXTextLayouter *textLayouter;
@property (nonatomic, retain) SXTextResizer *textResizer;

- (void).cxx_destruct;
- (void)addExclusionPath:(id)arg1;
- (id)additionsForTextSource:(id)arg1;
- (double)calculateHeightForWidth:(double)arg1 inColumnLayout:(id)arg2;
- (id)contentSizeCategoryForTextSource:(id)arg1;
- (id)documentControllerForTextSource:(id)arg1;
- (id)existingExclusionPathForComponentWithIdentifier:(id)arg1;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 documentController:(id)arg4 layoutAttributes:(id)arg5 textComponentLayoutHosting:(id)arg6 actionProvider:(id)arg7;
- (id)inlineTextStylesForTextSource:(id)arg1;
- (void)removeAllExclusionPaths;
- (void)setTextLayouter:(id)arg1;
- (void)setTextResizer:(id)arg1;
- (id)snapLines;
- (unsigned long long)stringLength;
- (id)textLayouter;
- (id)textResizer;
- (id)textResizerForTextSource:(id)arg1;
- (id)textRulesForTextSource:(id)arg1;
- (id)textStyleForTextSource:(id)arg1;
- (double)verticalPositionForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
