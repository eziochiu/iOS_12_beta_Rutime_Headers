/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUVideoTrimQueueController : NSObject {
    PLManagedAlbum * _album;
    NSString * _albumName;
    NSString * _commentText;
    <PUVideoTrimQueueControllerDelegate> * _delegate;
    struct { 
        unsigned int hasWillTrim : 1; 
        unsigned int hasDidTrim : 1; 
        unsigned int hasDidFinish : 1; 
        unsigned int hasDidCancel : 1; 
    }  _delegateFlags;
    UIViewController * _displayingViewController;
    double  _endTime;
    NSArray * _recipients;
    NSMutableArray * _sourcesToTransform;
    double  _startTime;
    NSMutableArray * _trimQueue;
    NSMutableDictionary * _trimmedVideoInfo;
    NSArray * _videosSources;
    NSDictionary * _videosSourcesSharingInfo;
}

@property (nonatomic, readonly) PLManagedAlbum *album;
@property (nonatomic, retain) NSString *albumName;
@property (nonatomic, retain) NSString *commentText;
@property (nonatomic) <PUVideoTrimQueueControllerDelegate> *delegate;
@property (nonatomic, retain) NSArray *recipients;
@property (nonatomic, readonly) NSDictionary *trimmedVideoInfo;
@property (nonatomic, readonly) NSArray *videosSources;
@property (nonatomic, readonly) NSDictionary *videosSourcesSharingInfo;

+ (bool)areVideoSourcesStreamShareSources:(id)arg1;

- (void).cxx_destruct;
- (void)_dequeueTrimmingControl;
- (void)_sendDidFinish;
- (bool)_shouldShowVideoTooLongAlertForVideoSource:(id)arg1;
- (void)_showTrimViewControllerForSource:(id)arg1;
- (void)_trimVideoSource:(id)arg1;
- (id)_videoTooLongAlertController;
- (id)album;
- (id)albumName;
- (void)cleanupResources;
- (id)commentText;
- (id)delegate;
- (void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (id)initWithViewController:(id)arg1 videoSources:(id)arg2 videoSourcesSharingInfo:(id)arg3 album:(id)arg4;
- (id)recipients;
- (void)setAlbumName:(id)arg1;
- (void)setCommentText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)start;
- (id)trimmedVideoInfo;
- (id)videosSources;
- (id)videosSourcesSharingInfo;

@end
