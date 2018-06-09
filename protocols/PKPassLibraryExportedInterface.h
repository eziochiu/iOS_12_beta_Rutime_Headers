/* made by EzioChiu.
 */

@protocol PKPassLibraryExportedInterface

@required

- (void)catalogChanged:(PKCatalog *)arg1 withNewPasses:(NSSet *)arg2;
- (void)contactlessInterfaceDidDismissFromSource:(long long)arg1;
- (void)contactlessInterfaceDidPresentFromSource:(long long)arg1;
- (void)passAdded:(PKPass *)arg1;
- (void)passRemoved:(PKPass *)arg1;
- (void)passUpdated:(PKPass *)arg1;
- (void)removingPassesOfType:(unsigned long long)arg1 didFinishWithSuccess:(bool)arg2;
- (void)removingPassesOfType:(unsigned long long)arg1 didUpdateWithProgress:(double)arg2;

@end
