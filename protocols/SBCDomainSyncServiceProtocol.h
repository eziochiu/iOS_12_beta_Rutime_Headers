/* made by EzioChiu.
 */

@protocol SBCDomainSyncServiceProtocol <NSObject>

@required

- (oneway void)beginAccessingPlaybackPositionEntities;
- (oneway void)deletePlaybackPositionEntities;
- (oneway void)deletePlaybackPositionEntity:(SBCPlaybackPositionEntity *)arg1;
- (oneway void)endAccessingPlaybackPositionEntities;
- (oneway void)persistPlaybackPositionEntity:(void *)arg1 isCheckpoint:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 8: SBCPlaybackPositionEntity *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)pullLocalPlaybackPositionForEntityIdentifiers:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 9: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, NSArray *, void*
- (oneway void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(SBCPlaybackPositionEntity *)arg1;

@end
