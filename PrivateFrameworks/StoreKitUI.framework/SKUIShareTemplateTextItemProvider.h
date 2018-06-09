/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIShareTemplateTextItemProvider : UIActivityItemProvider {
    SKUIClientContext * _clientContext;
    SKUIShareTemplateViewElement * _templateElement;
}

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)initWithTemplateElement:(id)arg1 clientContext:(id)arg2;
- (id)item;

@end
