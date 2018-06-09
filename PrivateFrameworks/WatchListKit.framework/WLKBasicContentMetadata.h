/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKBasicContentMetadata : NSObject {
    NSString * _canonicalID;
    NSArray * _categories;
    NSNumber * _commonSenseBeginsAge;
    unsigned long long  _contentType;
    NSString * _descriptiveText;
    WLKArtworkVariantListing * _images;
    bool  _isEvod;
    NSString * _shortTitle;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *canonicalID;
@property (nonatomic, readonly, copy) NSArray *categories;
@property (nonatomic, readonly) NSNumber *commonSenseBeginsAge;
@property (nonatomic, readonly) unsigned long long contentType;
@property (nonatomic, readonly, copy) NSString *descriptiveText;
@property (nonatomic, readonly) WLKArtworkVariantListing *images;
@property (nonatomic, readonly) bool isEvod;
@property (nonatomic, readonly, copy) NSString *shortTitle;
@property (nonatomic, readonly, copy) NSString *title;

+ (Class)_classForContentType:(unsigned long long)arg1;
+ (unsigned long long)contentTypeForString:(id)arg1;

- (void).cxx_destruct;
- (id)canonicalID;
- (id)categories;
- (id)commonSenseBeginsAge;
- (unsigned long long)contentType;
- (id)descriptiveText;
- (id)images;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (bool)isEvod;
- (id)shortTitle;
- (id)title;

@end
