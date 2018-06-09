/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICURLBagCacheEntry : NSObject {
    double  _expirationTime;
    ICURLBag * _urlBag;
}

@property (nonatomic) double expirationTime;
@property (retain) ICURLBag *urlBag;

- (void).cxx_destruct;
- (double)expirationTime;
- (id)initWithURLBag:(id)arg1 expirationTime:(double)arg2;
- (void)setExpirationTime:(double)arg1;
- (void)setUrlBag:(id)arg1;
- (id)urlBag;

@end
