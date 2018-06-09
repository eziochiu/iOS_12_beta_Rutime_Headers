/* made by EzioChiu.
 */

@protocol CompoundClipInformation <NSObject>

@required

- (bool)expandsEditList;

@optional

- (NSArray *)containedClips;
- (NSArray *)containedClipsWithInTransition:(TransitionClip *)arg1 outTransition:(TransitionClip *)arg2;

@end
