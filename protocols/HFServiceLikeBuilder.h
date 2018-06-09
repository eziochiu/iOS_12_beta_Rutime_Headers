/* made by EzioChiu.
 */

@protocol HFServiceLikeBuilder <HFAccessoryVendor, NSObject>

@required

- (NSString *)name;
- (NSString *)originalName;
- (NAFuture *)removeItemFromHome;
- (HFRoomBuilder *)room;
- (void)setName:(NSString *)arg1;
- (void)setRoom:(HFRoomBuilder *)arg1;
- (bool)supportsFavoriting;

@optional

- (NSArray *)availableIconDescriptors;
- (<HFIconDescriptor> *)iconDescriptor;
- (bool)isFavorite;
- (void)setIconDescriptor:(id <HFIconDescriptor>)arg1;
- (void)setIsFavorite:(bool)arg1;

@end
