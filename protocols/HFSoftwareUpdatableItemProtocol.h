/* made by EzioChiu.
 */

@protocol HFSoftwareUpdatableItemProtocol <NSObject>

@required

- (NSSet *)accessoriesSupportingSoftwareUpdate;
- (NSSet *)availableSoftwareUpdates;

@end
