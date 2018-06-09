/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasVideoTimelineEvent : NSObject {
    double  _duration;
    UIImage * _image;
    bool  _isFirstEvent;
    IKLockupElement * _lockup;
    VideosExtrasVideoTimelineEvent * _next;
    double  _offset;
    VideosExtrasVideoTimelineEvent * _previous;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic) bool isFirstEvent;
@property (nonatomic) VideosExtrasVideoTimelineEvent *next;
@property (nonatomic, readonly) double offset;
@property (nonatomic, readonly) VideosExtrasVideoTimelineEvent *previous;
@property (nonatomic, readonly) NSString *subHeader;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)description;
- (double)duration;
- (id)initWithElement:(id)arg1 prev:(id)arg2;
- (bool)isFirstEvent;
- (void)loadImage:(id /* block */)arg1;
- (id)next;
- (double)offset;
- (id)previous;
- (void)setIsFirstEvent:(bool)arg1;
- (void)setNext:(id)arg1;
- (id)subHeader;
- (id)title;

@end
