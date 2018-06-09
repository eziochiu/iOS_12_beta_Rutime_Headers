/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImageRequestBehaviorSpec : NSObject {
    bool  _allowPlaceholder;
    long long  _choosingPolicy;
    long long  _loadingMode;
    bool  _networkAccessAllowed;
    bool  _synchronous;
    long long  _version;
}

@property (nonatomic) bool allowPlaceholder;
@property (nonatomic) long long choosingPolicy;
@property (nonatomic) long long loadingMode;
@property (getter=isNetworkAccessAllowed, nonatomic) bool networkAccessAllowed;
@property (getter=isSynchronous, nonatomic) bool synchronous;
@property (nonatomic) long long version;

- (bool)allowPlaceholder;
- (long long)choosingPolicy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)isNetworkAccessAllowed;
- (bool)isSynchronous;
- (long long)loadingMode;
- (void)setAllowPlaceholder:(bool)arg1;
- (void)setChoosingPolicy:(long long)arg1;
- (void)setLoadingMode:(long long)arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setSynchronous:(bool)arg1;
- (void)setVersion:(long long)arg1;
- (id)shortDescription;
- (long long)version;

@end
