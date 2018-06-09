/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoBrowserTitleViewController : NSObject {
    NSString * __dayDescription;
    PLDateRangeFormatter * __dayFormatter;
    bool  __isPerformingChanges;
    bool  __isUpdating;
    bool  __needsUpdateDayAndTimeDescriptions;
    bool  __needsUpdateGestureRecognizers;
    bool  __needsUpdateLabels;
    bool  __needsUpdatePlayClockDescription;
    NSString * __playClockDescription;
    NSDateComponentsFormatter * __playClockFormatter;
    UITapGestureRecognizer * __tapGestureRecognizer;
    NSString * __timeDescription;
    PLDateRangeFormatter * __timeFormatter;
    NSDate * _creationDate;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _currentPlaybackTime;
    <PUPhotoBrowserTitleViewControllerDelegate> * _delegate;
    struct { 
        bool respondsToTapped; 
    }  _delegateFlags;
    NSString * _geoDescription;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _playbackDuration;
    bool  _tappable;
    bool  _usingCompactTitleView;
    UIView * _view;
}

@property (setter=_setDayDescription:, nonatomic, retain) NSString *_dayDescription;
@property (nonatomic, readonly) PLDateRangeFormatter *_dayFormatter;
@property (setter=_setPerformingChanges:, nonatomic) bool _isPerformingChanges;
@property (setter=_setUpdating:, nonatomic) bool _isUpdating;
@property (setter=_setNeedsUpdateDayAndTimeDescriptions:, nonatomic) bool _needsUpdateDayAndTimeDescriptions;
@property (setter=_setNeedsUpdateGestureRecognizers:, nonatomic) bool _needsUpdateGestureRecognizers;
@property (setter=_setNeedsUpdateLabels:, nonatomic) bool _needsUpdateLabels;
@property (setter=_setNeedsUpdatePlayClockDescription:, nonatomic) bool _needsUpdatePlayClockDescription;
@property (setter=_setPlayClockDescription:, nonatomic, retain) NSString *_playClockDescription;
@property (nonatomic, readonly) NSDateComponentsFormatter *_playClockFormatter;
@property (setter=_setTapGestureRecognizer:, nonatomic, retain) UITapGestureRecognizer *_tapGestureRecognizer;
@property (setter=_setTimeDescription:, nonatomic, retain) NSString *_timeDescription;
@property (nonatomic, readonly) PLDateRangeFormatter *_timeFormatter;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } currentPlaybackTime;
@property (nonatomic) <PUPhotoBrowserTitleViewControllerDelegate> *delegate;
@property (nonatomic, retain) NSString *geoDescription;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } playbackDuration;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (getter=isTappable, nonatomic) bool tappable;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, readonly, copy) NSString *title;
@property (getter=isUsingCompactTitleView, nonatomic) bool usingCompactTitleView;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)_assertInsideChangeBlock;
- (void)_assertInsideUpdate;
- (void)_dateFormatterChanged:(id)arg1;
- (id)_dayDescription;
- (id)_dayFormatter;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)_invalidateDayAndTimeDescriptions;
- (void)_invalidateGestureRecognizers;
- (void)_invalidateLabels;
- (void)_invalidatePlayClockDescription;
- (bool)_isPerformingChanges;
- (bool)_isUpdating;
- (bool)_needsUpdate;
- (bool)_needsUpdateDayAndTimeDescriptions;
- (bool)_needsUpdateGestureRecognizers;
- (bool)_needsUpdateLabels;
- (bool)_needsUpdatePlayClockDescription;
- (id)_playClockDescription;
- (id)_playClockFormatter;
- (void)_setDayDescription:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateDayAndTimeDescriptions:(bool)arg1;
- (void)_setNeedsUpdateGestureRecognizers:(bool)arg1;
- (void)_setNeedsUpdateLabels:(bool)arg1;
- (void)_setNeedsUpdatePlayClockDescription:(bool)arg1;
- (void)_setPerformingChanges:(bool)arg1;
- (void)_setPlayClockDescription:(id)arg1;
- (void)_setTapGestureRecognizer:(id)arg1;
- (void)_setTimeDescription:(id)arg1;
- (void)_setUpdating:(bool)arg1;
- (id)_tapGestureRecognizer;
- (id)_timeDescription;
- (id)_timeFormatter;
- (void)_updateDayAndTimeDescriptionsIfNeeded;
- (void)_updateGestureRecognizersIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateLabelsIfNeeded;
- (void)_updatePlayClockDescriptionIfNeeded;
- (id)creationDate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentPlaybackTime;
- (void)dealloc;
- (id)delegate;
- (id)geoDescription;
- (id)init;
- (bool)isTappable;
- (bool)isUsingCompactTitleView;
- (void)performChanges:(id /* block */)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })playbackDuration;
- (void)setCreationDate:(id)arg1;
- (void)setCurrentPlaybackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setGeoDescription:(id)arg1;
- (void)setPlaybackDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTappable:(bool)arg1;
- (void)setTextColor:(id)arg1;
- (void)setUsingCompactTitleView:(bool)arg1;
- (id)subtitle;
- (id)textColor;
- (id)title;
- (id)view;

@end
