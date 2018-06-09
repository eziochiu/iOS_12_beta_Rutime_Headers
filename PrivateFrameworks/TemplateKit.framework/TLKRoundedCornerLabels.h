/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKRoundedCornerLabels : TLKStackView {
    NSMutableArray * _roundedLabels;
    unsigned long long  _style;
}

@property (nonatomic, retain) NSMutableArray *roundedLabels;
@property (nonatomic) unsigned long long style;

- (void).cxx_destruct;
- (id)init;
- (id)roundedLabels;
- (void)setRoundedLabels:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)style;
- (void)updateRoundedText:(id)arg1;

@end