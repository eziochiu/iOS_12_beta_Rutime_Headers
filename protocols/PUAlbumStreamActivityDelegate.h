/* made by EzioChiu.
 */

@protocol PUAlbumStreamActivityDelegate <NSObject>

@optional

- (void)albumStreamActivity:(PUAlbumStreamActivity *)arg1 didCreateAlbum:(struct NSObject { Class x1; }*)arg2;
- (void)albumStreamActivity:(PUAlbumStreamActivity *)arg1 didFinishSuccessfully:(bool)arg2;

@end
