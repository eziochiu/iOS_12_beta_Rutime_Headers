/* made by EzioChiu.
 */

@protocol GEOEncyclopedicInfo <NSObject>

@required

- (GEOMapItemAttribution *)encyclopedicAttribution;
- (NSArray *)factoids;
- (bool)hasPairOfFactoids;
- (bool)hasTextBlock;
- (NSString *)textBlockText;
- (NSString *)textBlockTitle;

@end
