/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIShareTemplateActivity : UIActivity {
    SKUIClientContext * _clientContext;
    SKUIShareSheetActivityViewElement * _viewElement;
}

- (void).cxx_destruct;
- (id)_beforeActivity;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)initWithActivityViewElement:(id)arg1 clientContext:(id)arg2;
- (void)performActivity;

@end
