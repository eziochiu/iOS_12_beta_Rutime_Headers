/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKURLBagCache : NSObject {
    NSString * _cachePath;
    NSDictionary * _existingDictionary;
    SSURLBag * _urlBag;
}

@property (nonatomic, readonly) NSString *cachePath;
@property (nonatomic, readonly) NSDictionary *existingDictionary;
@property (nonatomic, readonly) SSURLBag *urlBag;

+ (id)URLBagContext;
+ (id)sharedCache;

- (void).cxx_destruct;
- (void)_loadWithNotification:(bool)arg1 completion:(id /* block */)arg2;
- (id)cachePath;
- (void)checkTrustStatusForURL:(id)arg1 completion:(id /* block */)arg2;
- (id)existingDictionary;
- (id)init;
- (bool)isTrustedURL:(id)arg1;
- (void)loadValueForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)updateWithInvalidation:(bool)arg1;
- (id)urlBag;
- (id)valueForKey:(id)arg1;

@end
