/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetComment : PHObject {
    bool  _canBeDeletedByUser;
    NSString * _cloudGUID;
    NSDate * _commentClientDate;
    NSDate * _commentDate;
    NSString * _commentText;
    NSString * _commenterHashedPersonID;
    bool  _isBatchComment;
    bool  _isCaption;
    bool  _isDeletable;
    bool  _isInterestingToUser;
    bool  _isLike;
    bool  _isMyComment;
}

@property (nonatomic, readonly) bool canBeDeletedByUser;
@property (nonatomic, readonly) NSString *cloudGUID;
@property (nonatomic, readonly) NSDate *commentClientDate;
@property (nonatomic, readonly) NSDate *commentDate;
@property (nonatomic, readonly) NSString *commentText;
@property (nonatomic, readonly) NSString *commenterDisplayName;
@property (nonatomic, readonly) NSString *commenterEmail;
@property (nonatomic, readonly) NSString *commenterFirstName;
@property (nonatomic, readonly) NSString *commenterFullName;
@property (nonatomic, readonly) NSString *commenterHashedPersonID;
@property (nonatomic, readonly) NSString *commenterLastName;
@property (nonatomic, readonly) bool isBatchComment;
@property (nonatomic, readonly) bool isCaption;
@property (nonatomic, readonly) bool isDeletable;
@property (nonatomic, readonly) bool isInterestingForAlbumsSorting;
@property (nonatomic, readonly) bool isInterestingToUser;
@property (nonatomic, readonly) bool isLike;
@property (nonatomic, readonly) bool isMyComment;

+ (id)fetchType;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)_isInterestingToUser:(id)arg1;
- (bool)canBeDeletedByUser;
- (Class)changeRequestClass;
- (id)cloudGUID;
- (id)commentClientDate;
- (id)commentDate;
- (id)commentText;
- (id)commenterDisplayName;
- (id)commenterEmail;
- (id)commenterFirstName;
- (id)commenterFullName;
- (id)commenterHashedPersonID;
- (id)commenterLastName;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (bool)isBatchComment;
- (bool)isCaption;
- (bool)isDeletable;
- (bool)isInterestingForAlbumsSorting;
- (bool)isInterestingToUser;
- (bool)isLike;
- (bool)isMyComment;
- (bool)shouldNotifyAsNotificationWithMediaStreamInfo:(id)arg1 asCaptionOnly:(bool*)arg2;

@end
