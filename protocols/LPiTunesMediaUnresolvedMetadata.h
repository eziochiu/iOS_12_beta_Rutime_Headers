/* made by EzioChiu.
 */

@protocol LPiTunesMediaUnresolvedMetadata <NSObject>

@required

- (NSArray *)assetsToResolve;
- (LPSpecializationMetadata *)resolve;

@end
