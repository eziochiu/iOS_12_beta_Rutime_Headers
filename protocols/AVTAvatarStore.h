/* made by EzioChiu.
 */

@protocol AVTAvatarStore <NSObject>

@required

- (NSArray *)avatarsForFetchRequest:(AVTAvatarFetchRequest *)arg1 error:(id*)arg2;
- (bool)canCreateAvatar;
- (void)deleteAvatar:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: <AVTAvatarRecord> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)fetchAvatarsForFetchRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: AVTAvatarFetchRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
