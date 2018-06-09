/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIDocumentStackItem : NSObject {
    IKAppDocument * _document;
    SKUINavigationDocumentController * _navigationDocumentController;
    UIPopoverPresentationController * _popoverPresentationController;
    NSDictionary * _presentationOptions;
    bool  _usesNavigationControllerForModalPresentation;
    UIViewController * _viewController;
}

@property (getter=isAnimated, nonatomic, readonly) bool animated;
@property (nonatomic, readonly) IKAppDocument *document;
@property (nonatomic, retain) SKUINavigationDocumentController *navigationDocumentController;
@property (nonatomic, readonly) NSString *overlayType;
@property (nonatomic, retain) UIPopoverPresentationController *popoverPresentationController;
@property (nonatomic, readonly) NSDictionary *presentationOptions;
@property (nonatomic, readonly) NSString *presentationType;
@property (nonatomic, readonly) NSString *sheetType;
@property (nonatomic, readonly) NSString *sourceElementIdentifier;
@property (nonatomic) bool usesNavigationControllerForModalPresentation;
@property (nonatomic, retain) UIViewController *viewController;

- (void).cxx_destruct;
- (void)_setDocument:(id)arg1;
- (id)document;
- (id)init;
- (id)initWithDocument:(id)arg1 presentationOptions:(id)arg2;
- (bool)isAnimated;
- (id)navigationDocumentController;
- (id)overlayType;
- (id)popoverPresentationController;
- (id)presentationOptions;
- (id)presentationType;
- (void)setNavigationDocumentController:(id)arg1;
- (void)setPopoverPresentationController:(id)arg1;
- (void)setUsesNavigationControllerForModalPresentation:(bool)arg1;
- (void)setViewController:(id)arg1;
- (id)sheetType;
- (id)sourceElementIdentifier;
- (bool)usesNavigationControllerForModalPresentation;
- (id)viewController;

@end
