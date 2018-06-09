/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCBaseThumbnail : NSObject <DOCThumbnail, DOCThumbnailListener, DOCThumbnailOperationDelegate> {
    DOCThumbnailCache * _cache;
    <DOCThumbnail> * _fallback;
    bool  _isInteractive;
    NSHashTable * _listeners;
    bool  _needsUpdate;
    NSOperation * _operation;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _representativeIcon;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    unsigned long long  _style;
    UIImage * _thumbnailImage;
}

@property (nonatomic, readonly) DOCThumbnailCache *cache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <DOCThumbnail> *fallback;
@property (readonly) bool hasFinishedTryingToFetchCorrectThumbnail;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInteractive;
@property (nonatomic, readonly) bool isRepresentativeIcon;
@property (nonatomic, readonly) NSHashTable *listeners;
@property (getter=isLoading, nonatomic, readonly) bool loading;
@property (nonatomic, readonly) bool needsUpdate;
@property (nonatomic, readonly) NSOperation *operation;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool representativeIcon;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) unsigned long long style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIImage *thumbnail;
@property (nonatomic, readonly) UIImage *thumbnailImage;

- (void).cxx_destruct;
- (void)addListener:(id)arg1;
- (id)cache;
- (id)createOperationWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 style:(unsigned long long)arg3 isInteractive:(bool)arg4;
- (void)dealloc;
- (id)fallback;
- (bool)hasFinishedTryingToFetchCorrectThumbnail;
- (id)initWithCache:(id)arg1 queueLabel:(const char *)arg2 size:(struct CGSize { double x1; double x2; })arg3 scale:(double)arg4 fallback:(id)arg5 style:(unsigned long long)arg6 isInteractive:(bool)arg7;
- (bool)isInteractive;
- (bool)isLoading;
- (bool)isRepresentativeIcon;
- (void)kickstart;
- (id)listeners;
- (bool)needsUpdate;
- (void)notifyListeners;
- (id)operation;
- (id)queue;
- (void)removeListener:(id)arg1;
- (bool)representativeIcon;
- (double)scale;
- (void)scheduleUpdateIfNeeded;
- (void)setFallback:(id)arg1;
- (void)setNeedsUpdate;
- (void)setRepresentativeIcon:(bool)arg1;
- (struct CGSize { double x1; double x2; })size;
- (void)startOperation;
- (unsigned long long)style;
- (id)thumbnail;
- (id)thumbnailImage;
- (void)thumbnailLoaded:(id)arg1;
- (void)thumbnailOperation:(id)arg1 didLoadThumbnail:(id)arg2 representativeIcon:(bool)arg3;
- (void)thumbnailOperationFailedToLoadThumbnail:(id)arg1;

@end
