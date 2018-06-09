/* made by EzioChiu.
 */

@protocol TVCarouselViewDataSource <NSObject>

@required

- (UICollectionViewCell *)carouselView:(TVCarouselView *)arg1 cellForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInCarouselView:(TVCarouselView *)arg1;

@end
