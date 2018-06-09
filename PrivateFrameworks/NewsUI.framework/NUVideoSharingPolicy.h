/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUVideoSharingPolicy : NSObject <SVVideoSharingPolicy> {
    bool  _sharingEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isSharingEnabled, nonatomic) bool sharingEnabled;
@property (readonly) Class superclass;

- (id)init;
- (id)initWithSharingEnabled:(bool)arg1;
- (bool)isSharingEnabled;
- (bool)isVideoShareable:(id)arg1;
- (void)setSharingEnabled:(bool)arg1;

@end
