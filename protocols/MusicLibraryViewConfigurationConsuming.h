/* made by EzioChiu.
 */

@protocol MusicLibraryViewConfigurationConsuming <NSObject>

@required

- (id)initWithLibraryViewConfiguration:(MusicLibraryViewConfiguration *)arg1;
- (MusicLibraryViewConfiguration *)libraryViewConfiguration;

@end
