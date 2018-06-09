/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUDOMElement : NSObject {
    DOMElement * _element;
    UIImage * _image;
    UIWebView * _webView;
}

@property (nonatomic, readonly) DOMElement *element;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) UIImage *imageRepresentation;
@property (nonatomic, readonly) NSString *innerText;
@property (nonatomic, retain) UIWebView *webView;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForDOMElement:(id)arg1;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frame;
- (void)dealloc;
- (id)element;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)imageRepresentation;
- (id)initWithDOMElement:(id)arg1;
- (id)innerText;
- (id)newImageView;
- (id)newLabelForElementWithText:(id)arg1;
- (void)setProperty:(id)arg1 value:(id)arg2;
- (void)setWebView:(id)arg1;
- (id)webView;

@end
