/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
 */

@interface VUIRestrictions : NSObject

@property (nonatomic, readonly) bool allowsShowingUndownloadedMovies;
@property (nonatomic, readonly) bool allowsShowingUndownloadedTVShows;

+ (id)sharedInstance;

- (bool)allowsShowingUndownloadedMovies;
- (bool)allowsShowingUndownloadedTVShows;

@end
