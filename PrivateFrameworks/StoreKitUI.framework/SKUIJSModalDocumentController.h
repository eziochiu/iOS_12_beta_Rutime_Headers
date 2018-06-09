/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIJSModalDocumentController : IKJSObject <SKUIJSModalDocumentController> {
    SKUIModalDocumentController * _modalDocumentController;
}

@property (nonatomic, readonly, retain) NSArray *documents;
@property (readonly) SKUIModalDocumentController *modalDocumentController;

- (void).cxx_destruct;
- (id)_adjustedOptionsWithOptions:(id)arg1;
- (id)documents;
- (id)initWithAppContext:(id)arg1 modalDocumentController:(id)arg2;
- (id)modalDocumentController;
- (void)popDocument;
- (void)popToDocument:(id)arg1;
- (void)pushDocument:(id)arg1 :(id)arg2;
- (void)replaceDocument:(id)arg1 :(id)arg2 :(id)arg3;

@end
