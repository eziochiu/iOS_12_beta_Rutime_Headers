/* made by EzioChiu.
 */

@protocol SBCDomainValueServiceProtocol <NSObject>

@required

- (oneway void)pullPlaybackPositionEntity:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 9: SBCPlaybackPositionEntity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, SBCPlaybackPositionEntity *, void*
- (oneway void)pushPlaybackPositionEntity:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 9: SBCPlaybackPositionEntity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, SBCPlaybackPositionEntity *, void*

@end
