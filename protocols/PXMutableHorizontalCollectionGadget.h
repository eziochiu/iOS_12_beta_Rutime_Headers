/* made by EzioChiu.
 */

@protocol PXMutableHorizontalCollectionGadget <NSObject>

@required

- (unsigned long long)collectionAccessoryButtonType;
- (double)collectionHeight;
- (NSString *)collectionTitle;
- (void)setCollectionAccessoryButtonType:(unsigned long long)arg1;
- (void)setCollectionHeight:(double)arg1;
- (void)setCollectionTitle:(NSString *)arg1;

@end
