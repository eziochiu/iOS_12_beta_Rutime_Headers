/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

@interface ICDocCamZoomablePageContentImageView : UIImageView {
    <ICDocCamZoomablePageContentViewDelegate> * _pageContentViewDelegate;
}

@property (nonatomic) <ICDocCamZoomablePageContentViewDelegate> *pageContentViewDelegate;

- (void).cxx_destruct;
- (id)_accessibilityScrollAncestorForSelector:(SEL)arg1;
- (id)pageContentViewDelegate;
- (void)setPageContentViewDelegate:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
