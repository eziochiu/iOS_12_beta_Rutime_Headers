/* made by EzioChiu.
 */

@protocol PKPassLibraryDelegate <NSObject>

@optional

- (void)contactlessInterfaceDidDismissFromSource:(long long)arg1;
- (void)contactlessInterfaceDidPresentFromSource:(long long)arg1;
- (void)passLibrary:(PKPassLibrary *)arg1 receivedUpdatedCatalog:(PKCatalog *)arg2 passes:(NSSet *)arg3;
- (void)passLibrary:(PKPassLibrary *)arg1 removingPassesOfType:(unsigned long long)arg2 didFinishWithSuccess:(bool)arg3;
- (void)passLibrary:(PKPassLibrary *)arg1 removingPassesOfType:(unsigned long long)arg2 didUpdateWithProgress:(double)arg3;
- (void)passLibraryReceivedInterruption;

@end
