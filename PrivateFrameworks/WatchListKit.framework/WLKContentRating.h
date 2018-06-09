/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKContentRating : NSObject {
    unsigned long long  _contentRatingSystem;
    NSString * _displayName;
    unsigned long long  _ratingValue;
}

@property (nonatomic, readonly) unsigned long long contentRatingSystem;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly) unsigned long long ratingValue;

+ (Class)_classForContentRatingSystem:(unsigned long long)arg1;
+ (unsigned long long)_ratingSystemForString:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)contentRatingSystem;
- (id)displayName;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)ratingValue;

@end
