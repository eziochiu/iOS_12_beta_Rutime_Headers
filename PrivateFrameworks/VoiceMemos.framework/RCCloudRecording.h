/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCCloudRecording : NSManagedObject <RCMutableRecording> {
    AVAsset * _avAsset;
}

@property (nonatomic, readonly, copy) NSURL *URIRepresentation;
@property (nonatomic, retain) <_NSFileBackedFuture> *audioFuture;
@property (nonatomic, readonly) AVAsset *avAsset;
@property (nonatomic, copy) NSString *customLabel;
@property (nonatomic, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic) bool evicted;
@property (nonatomic, copy) NSDate *evictionDate;
@property (nonatomic) unsigned long long flags;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long iTunesPersistentID;
@property (nonatomic, readonly) bool isContentBeingModified;
@property (nonatomic, readonly, copy) CLLocation *location;
@property (nonatomic, copy) NSString *path;
@property (nonatomic) bool pendingRestore;
@property (nonatomic, readonly) bool playable;
@property (readonly) Class superclass;
@property (nonatomic) bool synced;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *titleDisallowingEmptyString;
@property (nonatomic, copy) NSString *uniqueID;
@property (nonatomic, readonly, copy) NSURL *url;

+ (id)playablePredicate;
+ (id)savedRecordingURIForSearchableItemIdentifier:(id)arg1;
+ (id)searchableItemIdentifierForSavedRecordingURI:(id)arg1;

- (void).cxx_destruct;
- (id)URIRepresentation;
- (id)_activityURLCreateIfNecessary:(bool)arg1;
- (id)_detailLabel;
- (id)_labelAllowingEmptyString:(bool)arg1;
- (void)_synchronizeWithExistingAudioFuture:(id /* block */)arg1;
- (void)_validatePath;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)avAsset;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (bool)evicted;
- (bool)isContentBeingModified;
- (id)location;
- (id)name;
- (id)path;
- (bool)pendingRestore;
- (bool)playable;
- (id)searchableItem;
- (void)setEvicted:(bool)arg1;
- (void)setEvictionDate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setPendingRestore:(bool)arg1;
- (void)setPlayable:(bool)arg1;
- (void)setSynced:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleDisallowingEmptyString:(id)arg1;
- (bool)synced;
- (void)synchronizeAudioFutureWithModel:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)title;
- (id)titleDisallowingEmptyString;
- (id)url;
- (void)willSave;

@end
