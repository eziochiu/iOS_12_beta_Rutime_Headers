/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
 */

@interface EMFEmojiPreferencesService : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSXPCListener * _listener;
    EMFEmojiPreferences * _preferences;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) EMFEmojiPreferences *preferences;
@property (readonly) Class superclass;

+ (id)sharedServiceWithMachName:(id)arg1;

- (void).cxx_destruct;
- (void)_createPreferencesIfNecessary;
- (void)dealloc;
- (id)dispatchQueue;
- (id)initWithMachName:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)preferences;
- (void)setPreferences:(id)arg1;

@end
