/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKRichText : TLKMultilineText {
    NSArray * _formattedTextItems;
}

@property (nonatomic, retain) NSArray *formattedTextItems;
@property (readonly) bool hasContent;

- (void).cxx_destruct;
- (id)description;
- (id)filterItemsByType:(unsigned long long)arg1;
- (id)formattedTextItems;
- (bool)hasContent;
- (id)icons;
- (id)inlineRoundedText;
- (void)setFormattedTextItems:(id)arg1;
- (id)stars;
- (id)text;

@end
