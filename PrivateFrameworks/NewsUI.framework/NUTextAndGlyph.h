/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUTextAndGlyph : NSObject {
    NSAttributedString * _attributedText;
    UIImage * _glyph;
    NSString * _text;
}

@property (nonatomic, readonly) NSAttributedString *attributedText;
@property (nonatomic, readonly) UIImage *glyph;
@property (nonatomic, readonly) NSString *text;

- (void).cxx_destruct;
- (id)attributedText;
- (id)glyph;
- (id)init;
- (id)initWithAttributedText:(id)arg1 glyph:(id)arg2;
- (id)initWithAttributedText:(id)arg1 text:(id)arg2 glyph:(id)arg3;
- (id)initWithText:(id)arg1 glyph:(id)arg2;
- (id)text;

@end
