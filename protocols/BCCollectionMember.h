/* made by EzioChiu.
 */

@protocol BCCollectionMember <BCCloudData>

@required

- (NSString *)collectionMemberID;
- (int)sortOrder;

@end
