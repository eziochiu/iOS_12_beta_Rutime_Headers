/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIMLFactory : NSObject <TVInterfaceCreating, _TVInterfaceCreatingPrivate> {
    NSDictionary * _elementTypeLookup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *elementTypeLookup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_registerElements;
+ (void)_registerStyles;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_imageProxyForElement:(id)arg1;
- (void)_parseAppConfigurationForElement:(id)arg1;
- (id)_styleSheetURLForTemplate:(id)arg1;
- (Class)collectionViewCellClassForElement:(id)arg1;
- (id)elementTypeLookup;
- (id)imageForResource:(id)arg1;
- (id)init;
- (id)navigationControllerForTabIdentifier:(id)arg1;
- (void)setElementTypeLookup:(id)arg1;
- (id)viewControllerForElement:(id)arg1 existingViewController:(id)arg2;
- (id)viewForElement:(id)arg1 existingView:(id)arg2;
- (unsigned long long)vuiElementTypeForElement:(id)arg1;

@end
