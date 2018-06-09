/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVStyleSheet : NSObject {
    double  _additionalInlinePaddingForDodgingSafeArea;
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultItemFullScreenSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultItemInlineSize;
    double  _elapsedTimeLabelBaselineToControlsBottomDistance;
    double  _elapsedTimeLabelTopToScrubberCenterYDistance;
    UIFont * _infoLabelFont;
    double  _liveBroadcastLabelTopToBackdropTopDistance;
    double  _maximumMultiRowTransportControlsWidth;
    double  _maximumProminentPlayButtonDimension;
    double  _maximumTransportControlsWidth;
    double  _minimumProminentPlayButtonDimension;
    double  _minimumScrubberWidth;
    double  _minimumTransportControlsWidth;
    double  _playButtonCenterToBottomDistance;
    struct CGSize { 
        double width; 
        double height; 
    }  _routePickerButtonFullScreenSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _routePickerButtonInlineSize;
    double  _scrubberCenterToScrubInstructionsDistance;
    double  _scrubberCenterYToControlsTopMinimumDistance;
    UIFont * _scrubberInfoLabelFont;
    double  _scrubberInstructionsMinimumRequiredWidth;
    double  _scrubberInstructionsTopToBackdropTopDistance;
    UIFont * _scrubberTimeLabelFont;
    bool  _shouldUseCompactFullScreenSize;
    double  _standardInteritemPadding;
    double  _standardPadding;
    double  _volumeSliderCompactFullScreenWidth;
    double  _volumeSliderInlineWidth;
    double  _volumeSliderPadding;
    double  _volumeSliderRegularFullScreenWidth;
}

@property (nonatomic, readonly) double additionalInlinePaddingForDodgingSafeArea;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } defaultItemFullScreenSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } defaultItemInlineSize;
@property (nonatomic, readonly) double elapsedTimeLabelBaselineToControlsBottomDistance;
@property (nonatomic, readonly) double elapsedTimeLabelTopToScrubberCenterYDistance;
@property (nonatomic, readonly) UIFont *infoLabelFont;
@property (nonatomic, readonly) double liveBroadcastLabelTopToBackdropTopDistance;
@property (nonatomic, readonly) double maximumMultiRowTransportControlsWidth;
@property (nonatomic, readonly) double maximumProminentPlayButtonDimension;
@property (nonatomic, readonly) double maximumTransportControlsWidth;
@property (nonatomic, readonly) double minimumProminentPlayButtonDimension;
@property (nonatomic, readonly) double minimumScrubberWidth;
@property (nonatomic, readonly) double minimumTransportControlsWidth;
@property (nonatomic, readonly) double playButtonCenterToBottomDistance;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } routePickerButtonFullScreenSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } routePickerButtonInlineSize;
@property (nonatomic, readonly) double scrubberCenterToScrubInstructionsDistance;
@property (nonatomic, readonly) double scrubberCenterYToControlsTopMinimumDistance;
@property (nonatomic, readonly) UIFont *scrubberInfoLabelFont;
@property (nonatomic, readonly) double scrubberInstructionsMinimumRequiredWidth;
@property (nonatomic, readonly) double scrubberInstructionsTopToBackdropTopDistance;
@property (nonatomic, readonly) UIFont *scrubberTimeLabelFont;
@property (nonatomic) bool shouldUseCompactFullScreenSize;
@property (nonatomic, readonly) double standardInteritemPadding;
@property (nonatomic, readonly) double standardPadding;
@property (nonatomic, readonly) double volumeSliderCompactFullScreenWidth;
@property (nonatomic, readonly) double volumeSliderInlineWidth;
@property (nonatomic, readonly) double volumeSliderPadding;
@property (nonatomic, readonly) double volumeSliderRegularFullScreenWidth;

- (void).cxx_destruct;
- (double)additionalInlinePaddingForDodgingSafeArea;
- (struct CGSize { double x1; double x2; })defaultItemFullScreenSize;
- (struct CGSize { double x1; double x2; })defaultItemInlineSize;
- (double)elapsedTimeLabelBaselineToControlsBottomDistance;
- (double)elapsedTimeLabelTopToScrubberCenterYDistance;
- (id)infoLabelFont;
- (id)initWithTraitCollection:(id)arg1 shouldUseCompactFullScreenSize:(bool)arg2;
- (double)liveBroadcastLabelTopToBackdropTopDistance;
- (double)maximumMultiRowTransportControlsWidth;
- (double)maximumProminentPlayButtonDimension;
- (double)maximumTransportControlsWidth;
- (double)minimumProminentPlayButtonDimension;
- (double)minimumScrubberWidth;
- (double)minimumTransportControlsWidth;
- (double)playButtonCenterToBottomDistance;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })playbackControlsViewLayoutMarginsForView:(id)arg1 isFullScreen:(bool)arg2;
- (struct CGSize { double x1; double x2; })routePickerButtonFullScreenSize;
- (struct CGSize { double x1; double x2; })routePickerButtonInlineSize;
- (double)scrubberCenterToScrubInstructionsDistance;
- (double)scrubberCenterYToControlsTopMinimumDistance;
- (id)scrubberInfoLabelFont;
- (double)scrubberInstructionsMinimumRequiredWidth;
- (double)scrubberInstructionsTopToBackdropTopDistance;
- (id)scrubberTimeLabelFont;
- (void)setShouldUseCompactFullScreenSize:(bool)arg1;
- (bool)shouldUseCompactFullScreenSize;
- (double)standardInteritemPadding;
- (double)standardPadding;
- (double)volumeSliderCompactFullScreenWidth;
- (double)volumeSliderInlineWidth;
- (double)volumeSliderPadding;
- (double)volumeSliderRegularFullScreenWidth;

@end
