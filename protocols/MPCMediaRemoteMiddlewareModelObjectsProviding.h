/* made by EzioChiu.
 */

@protocol MPCMediaRemoteMiddlewareModelObjectsProviding <NSObject>

@required

- (MPSectionedCollection *)modelObjects;
- (NSIndexPath *)playingIndexPath;
- (MPSectionedCollection *)sourceContentItems;

@end
