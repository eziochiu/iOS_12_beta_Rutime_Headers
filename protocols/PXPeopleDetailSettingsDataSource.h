/* made by EzioChiu.
 */

@protocol PXPeopleDetailSettingsDataSource <NSObject>

@required

- (long long)action;
- (bool)hasMoreDetails;
- (void)imageAtIndex:(void *)arg1 targetSize:(void *)arg2 withCompletionBlock:(void *)arg3; // needs 3 arg types, found 8: unsigned long long, struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, void*
- (unsigned long long)numberOfItems;
- (void)setTitle:(NSString *)arg1;
- (NSString *)title;

@optional

- (unsigned long long)faceCount:(long long)arg1;
- (id)modelObjectForIndex:(long long)arg1;
- (NSString *)personNameAtIndex:(long long)arg1;
- (long long)verifyTypeAtIndex:(long long)arg1;

@end
