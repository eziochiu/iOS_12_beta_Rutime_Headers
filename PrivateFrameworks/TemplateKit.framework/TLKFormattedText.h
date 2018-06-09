/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKFormattedText : TLKFormattedTextItem {
    long long  _color;
    bool  _isBold;
    bool  _isEmphasized;
    unsigned long long  _maxLines;
    NSString * _string;
    long long  _verticalTextAlignment;
}

@property (nonatomic) long long color;
@property (nonatomic) bool isBold;
@property (nonatomic) bool isEmphasized;
@property (nonatomic) unsigned long long maxLines;
@property (nonatomic, retain) NSString *string;
@property (nonatomic) long long verticalTextAlignment;

+ (id)formattedTextWithString:(id)arg1;

- (void).cxx_destruct;
- (long long)color;
- (id)description;
- (bool)hasContent;
- (bool)isBold;
- (bool)isEmphasized;
- (unsigned long long)maxLines;
- (void)setColor:(long long)arg1;
- (void)setIsBold:(bool)arg1;
- (void)setIsEmphasized:(bool)arg1;
- (void)setMaxLines:(unsigned long long)arg1;
- (void)setString:(id)arg1;
- (void)setVerticalTextAlignment:(long long)arg1;
- (id)string;
- (long long)verticalTextAlignment;

@end
