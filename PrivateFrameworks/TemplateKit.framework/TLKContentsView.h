/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKContentsView : TLKStackView {
    NSMutableArray * _detailsLabels;
    unsigned long long  _style;
    UILabel * _titleLabel;
}

@property (retain) NSMutableArray *detailsLabels;
@property (nonatomic) unsigned long long style;
@property (retain) UILabel *titleLabel;

+ (id)detailsLabelWithStyle:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)detailsLabels;
- (id)init;
- (void)setDetailsLabels:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTitleLabel:(id)arg1;
- (unsigned long long)style;
- (id)titleLabel;
- (void)updateWithTitle:(id)arg1 contents:(id)arg2;

@end
