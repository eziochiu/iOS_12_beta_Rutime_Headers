/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideo : NSObject <SVVideo> {
    bool  _allowsCallToActionBar;
    NSString * _identifier;
    unsigned long long  _videoType;
}

@property (nonatomic, readonly) bool allowsCallToActionBar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long videoType;

- (void).cxx_destruct;
- (bool)allowsCallToActionBar;
- (id)identifier;
- (id)initWithVideoType:(unsigned long long)arg1;
- (unsigned long long)videoType;

@end
