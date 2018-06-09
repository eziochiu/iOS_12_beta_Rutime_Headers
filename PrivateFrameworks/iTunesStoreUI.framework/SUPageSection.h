/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUPageSection : NSObject {
    double  _expirationTime;
    NSString * _identifier;
    UIImage * _image;
    long long  _structuredPageType;
    NSString * _title;
    SSMutableURLRequestProperties * _urlRequestProperties;
    id  _userInfo;
}

@property (nonatomic, copy) SSURLRequestProperties *URLRequestProperties;
@property (nonatomic) double expirationTime;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) id segmentedControlItem;
@property (nonatomic) long long structuredPageType;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) id userInfo;

- (id)URLRequestProperties;
- (void)_setURL:(id)arg1;
- (void)_setURLBagKey:(id)arg1;
- (void)dealloc;
- (double)expirationTime;
- (id)identifier;
- (id)image;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)loadFromDictionary:(id)arg1;
- (id)segmentedControlItem;
- (void)setExpirationTime:(double)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setStructuredPageType:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setURLRequestProperties:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (long long)structuredPageType;
- (id)title;
- (id)userInfo;

@end
