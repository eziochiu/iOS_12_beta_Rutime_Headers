/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIWidgetFooterBar : PXUIWidgetBar <PXUIWidgetFooterViewDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createView;
- (void)setDisclosureTitle:(id)arg1;
- (void)setSpec:(id)arg1;
- (void)updateView;
- (double)viewHeight;
- (void)widgetFooterView:(id)arg1 didSelectDisclosure:(id)arg2;

@end
