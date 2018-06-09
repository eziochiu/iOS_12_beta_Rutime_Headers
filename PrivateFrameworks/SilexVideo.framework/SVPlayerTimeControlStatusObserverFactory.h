/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVPlayerTimeControlStatusObserverFactory : NSObject <SVPlayerTimeControlStatusObserverFactory> {
    <SVPlayerProviding> * _playerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVPlayerProviding> *playerProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createTimeControlStatusObserverForVideo:(id)arg1;
- (id)initWithPlayerProvider:(id)arg1;
- (id)playerProvider;

@end
