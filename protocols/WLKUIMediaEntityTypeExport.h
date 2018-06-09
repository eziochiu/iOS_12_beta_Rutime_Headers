/* made by EzioChiu.
 */

@protocol WLKUIMediaEntityTypeExport <JSExport>

@required

+ (id)episode;
+ (id)homeVideo;
+ (id)movie;
+ (id)rental;
+ (id)season;
+ (id)show;

- (NSString *)category;
- (NSString *)collectionType;
- (NSString *)subtype;

@end