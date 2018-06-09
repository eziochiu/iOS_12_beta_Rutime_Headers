/* made by EzioChiu.
 */

@protocol MiroAutoEditDelegate <NSObject>

@required

- (MiroMemory *)activeMemory;
- (MiroAutoEditLogger *)logger;
- (Project *)project;

@optional

- (bool)titleIsSupported;
- (MiroMetadataRange *)trimRangeForClip:(KonaClip *)arg1;

@end
