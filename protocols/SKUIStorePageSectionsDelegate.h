/* made by EzioChiu.
 */

@protocol SKUIStorePageSectionsDelegate <NSObject>

@optional

- (bool)sectionsViewController:(SKUIStorePageSectionsViewController *)arg1 showProductPageForItem:(SKUIItem *)arg2;
- (bool)sectionsViewController:(SKUIStorePageSectionsViewController *)arg1 showStorePageForURL:(NSURL *)arg2;
- (void)sectionsViewController:(SKUIStorePageSectionsViewController *)arg1 willScrollToOffset:(struct CGPoint { double x1; double x2; })arg2 visibleRange:(struct SKUIIndexPathRange { long long x1; long long x2; long long x3; long long x4; })arg3;
- (void)sectionsViewControllerDidDismissOverlayController:(SKUIStorePageSectionsViewController *)arg1;
- (void)sectionsViewControllerDidScroll:(SKUIStorePageSectionsViewController *)arg1;

@end
