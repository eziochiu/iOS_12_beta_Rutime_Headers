/* made by EzioChiu.
 */

@protocol AVTStoreBackend <NSObject>

@required

- (NSArray *)avatarsForFetchRequest:(AVTAvatarFetchRequest *)arg1 error:(id*)arg2;
- (bool)canCreateAvatar;
- (bool)deleteAvatarWithIdentifier:(NSString *)arg1 error:(id*)arg2;
- (AVTAvatarRecord *)duplicateAvatarRecord:(AVTAvatarRecord *)arg1 error:(id*)arg2;
- (bool)saveAvatar:(AVTAvatarRecord *)arg1 error:(id*)arg2;

@end
