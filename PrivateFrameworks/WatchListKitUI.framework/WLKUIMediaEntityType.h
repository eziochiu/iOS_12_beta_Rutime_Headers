/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUIMediaEntityType : WLKUIJSObject <WLKUIMediaEntityTypeExport> {
    NSString * _category;
    NSString * _collectionType;
    NSString * _subtype;
}

@property (nonatomic, retain) NSString *category;
@property (nonatomic, retain) NSString *collectionType;
@property (nonatomic, retain) NSString *subtype;

+ (id)episode;
+ (id)homeVideo;
+ (id)movie;
+ (id)rental;
+ (id)season;
+ (id)show;

- (void).cxx_destruct;
- (id)category;
- (id)collectionType;
- (id)description;
- (id)initWithAppContext:(id)arg1;
- (id)initWithMediaEntitySubtype:(id)arg1 category:(id)arg2 collectionType:(id)arg3 appContext:(id)arg4;
- (void)setCategory:(id)arg1;
- (void)setCollectionType:(id)arg1;
- (void)setSubtype:(id)arg1;
- (id)subtype;

@end
