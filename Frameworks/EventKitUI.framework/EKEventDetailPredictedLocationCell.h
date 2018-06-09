/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDetailPredictedLocationCell : UITableViewCell {
    UIView * _bottomSeparator;
    <EKEventDetailPredictedLocationCellDelegate> * _delegate;
    UIButton * _dismissButton;
    EKEvent * _event;
    EKStructuredLocation * _location;
    bool  _showsTopSeparator;
    EKEventDetailsHighlightControl * _titleControl;
    UIView * _topSeparator;
}

@property <EKEventDetailPredictedLocationCellDelegate> *delegate;
@property (nonatomic) bool showsTopSeparator;

+ (id)_separatorColor;

- (void).cxx_destruct;
- (void)_disambiguateIfNeeded;
- (void)_setEventDate:(id)arg1;
- (void)confirmLocationTapped:(id)arg1;
- (id)delegate;
- (id)init;
- (id)initEditable:(bool)arg1;
- (void)rejectLocationTapped:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setShowsTopSeparator:(bool)arg1;
- (bool)showsTopSeparator;

@end
