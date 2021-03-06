/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMusicSubscriptionStatusTerms : NSObject <NSCopying> {
    long long  _acceptedVersion;
    long long  _currentVersion;
    long long  _sourceType;
    long long  _type;
}

@property (nonatomic, readonly) long long acceptedVersion;
@property (nonatomic, readonly) long long currentVersion;
@property (nonatomic, readonly) long long sourceType;
@property (nonatomic, readonly) long long type;

- (long long)acceptedVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)currentVersion;
- (id)initWithResponseTermsDictionary:(id)arg1;
- (long long)sourceType;
- (long long)type;

@end
