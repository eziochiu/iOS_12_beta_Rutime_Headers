/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSMediaSyncInfo : NSObject {
    NSDictionary * _info;
    int  _notifyToken;
    unsigned long long  _target;
    NSString * _targetIdentifier;
}

@property (nonatomic, retain) NSDictionary *info;
@property (nonatomic, readonly) unsigned long long target;
@property (nonatomic, readonly) NSString *targetIdentifier;

+ (id)_syncInfoDirectory;

- (void).cxx_destruct;
- (id)_initWithTarget:(unsigned long long)arg1 readAndObserveChanges:(bool)arg2;
- (bool)_isValid;
- (id)_notificationName;
- (id)_preferencesApplicationID;
- (id)_preferencesInfoKey;
- (void)_readInfo;
- (void)_registerForInfoChanged;
- (id)_syncInfoFilePath;
- (id)_targetIdentifier;
- (id)containers;
- (void)dealloc;
- (id)info;
- (id)initWithTarget:(unsigned long long)arg1;
- (unsigned long long)itemCountForContainer:(id)arg1;
- (id)itemsForContainer:(id)arg1;
- (unsigned long long)playabilityForContainer:(id)arg1;
- (float)progressForContainer:(id)arg1;
- (float)progressForItem:(id)arg1;
- (void)setInfo:(id)arg1;
- (unsigned long long)statusForContainer:(id)arg1;
- (unsigned long long)statusForItem:(id)arg1;
- (unsigned long long)target;
- (id)targetIdentifier;
- (id)userInfoForContainer:(id)arg1;
- (id)userInfoForItem:(id)arg1;

@end
