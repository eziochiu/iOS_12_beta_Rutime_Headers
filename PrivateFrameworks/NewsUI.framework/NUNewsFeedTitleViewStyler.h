/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUNewsFeedTitleViewStyler : NSObject <NUTitleViewStyler> {
    long long  _textAlignment;
    UIColor * _textColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long textAlignment;
@property (nonatomic, readonly) UIColor *textColor;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTextColor:(id)arg1 textAlignment:(long long)arg2;
- (id)messageLargeFont;
- (id)messageSmallFont;
- (id)styleTextAsMessage:(id)arg1 boundingSize:(struct CGSize { double x1; double x2; })arg2;
- (id)styleTextAsTitle:(id)arg1 boundingSize:(struct CGSize { double x1; double x2; })arg2;
- (id)styleTitleText:(id)arg1 styleType:(unsigned long long)arg2 boundingSize:(struct CGSize { double x1; double x2; })arg3;
- (long long)textAlignment;
- (id)textColor;
- (id)titleExtraLargeFont;
- (id)titleParagraphStyleWithWrapping:(bool)arg1;

@end
