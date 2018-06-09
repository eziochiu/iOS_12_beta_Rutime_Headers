/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKContentsContainerView : TLKStackView {
    NSMutableArray * _contentsViews;
    unsigned long long  _style;
}

@property (retain) NSMutableArray *contentsViews;
@property (nonatomic) unsigned long long style;

- (void).cxx_destruct;
- (id)contentsViews;
- (id)init;
- (void)setContentsViews:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)style;
- (void)updateWithContents:(id)arg1;

@end
