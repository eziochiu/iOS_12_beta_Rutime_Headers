/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicModalNavigationStackItem : NSObject {
    MusicJSManagedObject * _jsNavigationDocumentManagedObject;
    long long  _lastNavigationControllerOperation;
    UINavigationController * _navigationController;
    SKUINavigationDocumentController * _navigationDocumentController;
}

@property (setter=setJSNavigationDocumentManagedObject:, nonatomic, retain) MusicJSManagedObject *jsNavigationDocumentManagedObject;
@property (nonatomic) long long lastNavigationControllerOperation;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, retain) SKUINavigationDocumentController *navigationDocumentController;

- (void).cxx_destruct;
- (id)init;
- (id)initWithNavigationController:(id)arg1;
- (id)jsNavigationDocumentManagedObject;
- (long long)lastNavigationControllerOperation;
- (id)navigationController;
- (id)navigationDocumentController;
- (void)setJSNavigationDocumentManagedObject:(id)arg1;
- (void)setLastNavigationControllerOperation:(long long)arg1;
- (void)setNavigationDocumentController:(id)arg1;

@end
