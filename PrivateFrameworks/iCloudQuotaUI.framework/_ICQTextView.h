/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

@interface _ICQTextView : UITextView {
    NSDictionary * _attributes;
    NSString * _format;
    NSArray * _links;
}

@property (nonatomic, retain) NSDictionary *attributes;
@property (nonatomic, retain) NSString *format;
@property (nonatomic, retain) NSArray *links;

- (void).cxx_destruct;
- (id)attributes;
- (bool)canBecomeFirstResponder;
- (id)format;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)links;
- (void)setAttributedText;
- (void)setAttributes:(id)arg1;
- (void)setFormat:(id)arg1;
- (void)setLinks:(id)arg1;

@end
