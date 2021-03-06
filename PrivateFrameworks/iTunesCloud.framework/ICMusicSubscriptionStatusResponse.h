/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMusicSubscriptionStatusResponse : NSObject <NSCopying> {
    NSDate * _expirationDate;
    bool  _needsReload;
    ICMusicSubscriptionStatus * _subscriptionStatus;
}

@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (nonatomic) bool needsReload;
@property (nonatomic, readonly, copy) NSDictionary *propertyListRepresentation;
@property (nonatomic, copy) ICMusicSubscriptionStatus *subscriptionStatus;

- (void).cxx_destruct;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)expirationDate;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)initWithResponseDictionary:(id)arg1 expirationDate:(id)arg2;
- (bool)isExpired;
- (bool)needsReload;
- (id)propertyListRepresentation;
- (void)setNeedsReload:(bool)arg1;
- (void)setSubscriptionStatus:(id)arg1;
- (id)subscriptionStatus;

@end
