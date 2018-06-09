/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIMessageContentTemplateView : SiriUIBaseTemplateView {
    id  _textBalloonView;
}

@property (nonatomic) <SiriUIMessageContentTemplateModel> *dataSource;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_textBalloonViewBoundingSize;
- (double)desiredHeight;
- (id)initWithDataSource:(id)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setSemanticContentAttribute:(long long)arg1;

@end
