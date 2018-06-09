/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVAccessoryItemContentProviderManager : NSObject <SVAccessoryItemContentManager, SVAccessoryItemContentProviderManager> {
    NSMapTable * _contentProviders;
}

@property (nonatomic, readonly) NSMapTable *contentProviders;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contentProviders;
- (id)init;
- (void)registerAccessoryItem:(id)arg1 withContentProvider:(id)arg2;
- (void)updateAccessoryItem:(id)arg1 forVideo:(id)arg2 animated:(bool)arg3;

@end
