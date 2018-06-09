/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNTUCallProvider : NSObject <CNTUCallProvider> {
    TUCallProvider * _callProvider;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) TUCallProvider *callProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSSet *supportedHandleTypes;
@property (nonatomic, readonly) bool supportsAudio;
@property (nonatomic, readonly) bool supportsVideo;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)callProvider;
- (id)dialRequestForHandle:(id)arg1 contact:(id)arg2 video:(bool)arg3;
- (id)initWithCallProvider:(id)arg1;
- (id)localizedName;
- (void)setCallProvider:(id)arg1;
- (id)supportedHandleTypes;
- (bool)supportsAudio;
- (bool)supportsVideo;

@end
