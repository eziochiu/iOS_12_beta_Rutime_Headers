/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIWatchListUtilities : NSObject {
    bool  _isWatchListed;
    NSString * _watchListIdentifier;
}

@property (nonatomic) bool isWatchListed;
@property (retain) NSString *watchListIdentifier;

+ (void)generateWatchListReponseForWatchListIdentifier:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 watchListed:(bool)arg2;
- (id)initWithResponse:(id)arg1;
- (bool)isWatchListed;
- (void)setIsWatchListed:(bool)arg1;
- (void)setWatchListIdentifier:(id)arg1;
- (void)toggleWatchListWithCompletion:(id /* block */)arg1;
- (id)watchListIdentifier;

@end
