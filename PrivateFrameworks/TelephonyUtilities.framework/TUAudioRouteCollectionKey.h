/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAudioRouteCollectionKey : NSObject <NSCopying> {
    NSString * _category;
    NSString * _mode;
}

@property (nonatomic, readonly, copy) NSString *category;
@property (nonatomic, readonly, copy) NSString *mode;

- (void).cxx_destruct;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithCategory:(id)arg1 mode:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAudioRouteCollectionKey:(id)arg1;
- (id)mode;

@end
